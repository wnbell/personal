
    template <typename F0>
    void parallel_invoke(const F0& f0)
    {
      #pragma omp parallel sections
      {
        #pragma omp section
        {
          f0();
        }
      }
    }

    template <typename F0, typename F1>
    void parallel_invoke(const F0& f0, const F1& f1)
    {
      #pragma omp parallel sections
      {
        #pragma omp section
        {
          f0();
        }

        #pragma omp section
        {
          f1();
        }
      }
    }

    template <typename F0, typename F1, typename F2>
    void parallel_invoke(const F0& f0, const F1& f1, const F2& f2)
    {
      #pragma omp parallel sections
      {
        #pragma omp section
        {
          f0();
        }

        #pragma omp section
        {
          f1();
        }

        #pragma omp section
        {
          f2();
        }
      }
    }

    template <typename F0, typename F1, typename F2, typename F3>
    void parallel_invoke(const F0& f0, const F1& f1, const F2& f2, const F3& f3)
    {
      #pragma omp parallel sections
      {
        #pragma omp section
        {
          f0();
        }

        #pragma omp section
        {
          f1();
        }

        #pragma omp section
        {
          f2();
        }

        #pragma omp section
        {
          f3();
        }
      }
    }

    template <typename F0, typename F1, typename F2, typename F3, typename F4>
    void parallel_invoke(const F0& f0, const F1& f1, const F2& f2, const F3& f3, const F4& f4)
    {
      #pragma omp parallel sections
      {
        #pragma omp section
        {
          f0();
        }

        #pragma omp section
        {
          f1();
        }

        #pragma omp section
        {
          f2();
        }

        #pragma omp section
        {
          f3();
        }

        #pragma omp section
        {
          f4();
        }
      }
    }

    template <typename F0, typename F1, typename F2, typename F3, typename F4, typename F5>
    void parallel_invoke(const F0& f0, const F1& f1, const F2& f2, const F3& f3, const F4& f4, const F5& f5)
    {
      #pragma omp parallel sections
      {
        #pragma omp section
        {
          f0();
        }

        #pragma omp section
        {
          f1();
        }

        #pragma omp section
        {
          f2();
        }

        #pragma omp section
        {
          f3();
        }

        #pragma omp section
        {
          f4();
        }

        #pragma omp section
        {
          f5();
        }
      }
    }

    template <typename F0, typename F1, typename F2, typename F3, typename F4, typename F5, typename F6>
    void parallel_invoke(const F0& f0, const F1& f1, const F2& f2, const F3& f3, const F4& f4, const F5& f5, const F6& f6)
    {
      #pragma omp parallel sections
      {
        #pragma omp section
        {
          f0();
        }

        #pragma omp section
        {
          f1();
        }

        #pragma omp section
        {
          f2();
        }

        #pragma omp section
        {
          f3();
        }

        #pragma omp section
        {
          f4();
        }

        #pragma omp section
        {
          f5();
        }

        #pragma omp section
        {
          f6();
        }
      }
    }

    template <typename F0, typename F1, typename F2, typename F3, typename F4, typename F5, typename F6, typename F7>
    void parallel_invoke(const F0& f0, const F1& f1, const F2& f2, const F3& f3, const F4& f4, const F5& f5, const F6& f6, const F7& f7)
    {
      #pragma omp parallel sections
      {
        #pragma omp section
        {
          f0();
        }

        #pragma omp section
        {
          f1();
        }

        #pragma omp section
        {
          f2();
        }

        #pragma omp section
        {
          f3();
        }

        #pragma omp section
        {
          f4();
        }

        #pragma omp section
        {
          f5();
        }

        #pragma omp section
        {
          f6();
        }

        #pragma omp section
        {
          f7();
        }
      }
    }

    template <typename F0, typename F1, typename F2, typename F3, typename F4, typename F5, typename F6, typename F7, typename F8>
    void parallel_invoke(const F0& f0, const F1& f1, const F2& f2, const F3& f3, const F4& f4, const F5& f5, const F6& f6, const F7& f7, const F8& f8)
    {
      #pragma omp parallel sections
      {
        #pragma omp section
        {
          f0();
        }

        #pragma omp section
        {
          f1();
        }

        #pragma omp section
        {
          f2();
        }

        #pragma omp section
        {
          f3();
        }

        #pragma omp section
        {
          f4();
        }

        #pragma omp section
        {
          f5();
        }

        #pragma omp section
        {
          f6();
        }

        #pragma omp section
        {
          f7();
        }

        #pragma omp section
        {
          f8();
        }
      }
    }

    template <typename F0, typename F1, typename F2, typename F3, typename F4, typename F5, typename F6, typename F7, typename F8, typename F9>
    void parallel_invoke(const F0& f0, const F1& f1, const F2& f2, const F3& f3, const F4& f4, const F5& f5, const F6& f6, const F7& f7, const F8& f8, const F9& f9)
    {
      #pragma omp parallel sections
      {
        #pragma omp section
        {
          f0();
        }

        #pragma omp section
        {
          f1();
        }

        #pragma omp section
        {
          f2();
        }

        #pragma omp section
        {
          f3();
        }

        #pragma omp section
        {
          f4();
        }

        #pragma omp section
        {
          f5();
        }

        #pragma omp section
        {
          f6();
        }

        #pragma omp section
        {
          f7();
        }

        #pragma omp section
        {
          f8();
        }

        #pragma omp section
        {
          f9();
        }
      }
    }
