#include <immintrin.h> // для использования AVX команд
#include <iostream>

double compare_avx(double x) {
    __m256d a = _mm256_set1_pd(x);
    __m256d b = _mm256_set1_pd(3.0);
    __m256d mask = _mm256_cmp_pd(a, b, _CMP_NEQ_OQ);
    __m256d one = _mm256_set1_pd(1.0);
    __m256d result = _mm256_and_pd(mask, one);
    double* result_ptr = (double*)(&result);
    return result_ptr[0];
}


int zd_10() {
    std::cout << compare_avx(5.0f) << std::endl;
    return 0;
}