# File contents created with the following Python script:

def make_parallel_invoke(n):
    targs = ', '.join([('typename F%s' % i) for i in range(n)])
    fargs = ', '.join([('const F%s& f%s' % (i,i)) for i in range(n)])
    body  = '\n'.join([
    """
        #pragma omp section
        {
          f%s();
        }""" % i for i in range(n)
    ])
    
    return \
    """
    template <%s>
    void parallel_invoke(%s)
    {
      #pragma omp parallel sections
      {%s
      }
    }""" % (targs, fargs, body)

for n in range(1,11):
    print make_parallel_invoke(n)

