#include <cstddef>
#include <iostream>
#include "Gabariti.h"
using namespace std;

//деструктор для очистки памяти
Gabariti::~Gabariti()
{
}

Gabariti operator +(const Gabariti &A, int value) {
	int i = A.a;
	int j = A.b;
	int k = A.c;
	return Gabariti(i + value, j + value, k + value);
}

Gabariti operator -(const Gabariti& A, int value) {
	int i = A.a;
	int j = A.b;
	int k = A.c;
	return Gabariti(i - value, j - value, k - value);
}

Gabariti operator /(const Gabariti& A, int value) {
	int i = A.a;
	int j = A.b;
	int k = A.c;
	return Gabariti(i / value, j / value, k / value);
}

Gabariti operator *(const Gabariti& A, int value) {
	int i = A.a;
	int j = A.b;
	int k = A.c;
	return Gabariti(i * value, j * value, k * value);
}

Gabariti operator +=(const Gabariti& A, int value) {
	int i = A.a;
	int j = A.b;
	int k = A.c;
	return Gabariti(i += value, j += value, k += value);
}

Gabariti operator -=(const Gabariti& A, int value) {
	int i = A.a;
	int j = A.b;
	int k = A.c;
	return Gabariti(i -= value, j -= value, k -= value);
}

Gabariti operator /=(const Gabariti& A, int value) {
	int i = A.a;
	int j = A.b;
	int k = A.c;
	return Gabariti(i /= value, j /= value, k /= value);
}

Gabariti operator *=(const Gabariti& A, int value) {
	int i = A.a;
	int j = A.b;
	int k = A.c;
	return Gabariti(i *= value, j *= value, k *= value);
}

