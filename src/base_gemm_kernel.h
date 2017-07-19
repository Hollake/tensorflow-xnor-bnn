// base_gemm_kernel.h
#ifndef BASE_GEMM_KERNEL_H_
#define BASE_GEMM_KERNEL_H_

template <typename Device, typename T>
struct BaseGemmFunctor {
  // Computes on device "d": C = A * B, where * is matrix multiplication.
  void operator()(const Device& d, const float* A, const float* B, float* C, const int m, const int n, const int k);
  	  /*
      const Device& d, typename MatMulTypes<T>::out_type out,
      typename MatMulTypes<T>::in_type in0,
      typename MatMulTypes<T>::in_type in1,
      const Eigen::array<Eigen::IndexPair<Eigen::DenseIndex>, 1>& dim_pair
      #endif);
      */
};

#endif // BASE_GEMM_KERNEL_H_
