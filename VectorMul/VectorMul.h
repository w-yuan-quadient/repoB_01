#pragma once

#ifdef VECTORMUL_EXPORTS
#define VECTORMUL_API __declspec(dllexport)
#else
#define VECTORMUL_API __declspec(dllimport)
#endif

extern "C" VECTORMUL_API void vector_mul(const double* a, const double* b, double* out, int size);
