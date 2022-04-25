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
	if (i - value < 0 && j - value < 0) {
		i = 0;
		j = 0;
		return Gabariti(i, j, k - value);
	}
	if (i - value < 0 && k - value < 0) {
		i = 0;
		k = 0;
		return Gabariti(i, j - value, k);
	}
	if (k - value < 0 && j - value < 0) {
		k = 0;
		j = 0;
		return Gabariti(i - value, j, k);
	}
	if (i - value < 0) {
		i = 0;
		return Gabariti(i, j - value, k - value);
	}
	if (j - value < 0) {
		j = 0;
		return Gabariti(i - value, j, k - value);
	}
	if (k - value < 0) {
		k = 0;
		return Gabariti(i - value, j - value, k);
	}
	else
	return Gabariti(i - value, j - value, k - value);
}

Gabariti operator /(const Gabariti& A, int value) {
	int i = A.a;
	int j = A.b;
	int k = A.c;
	if (value <= 0) {
		return Gabariti(i=0, j=0, k=0);
	}
	else
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
	if ((i -= value < 0) && (j -= value < 0)) {
		i = 0;
		j = 0;
		return Gabariti(i, j, k -= value);
	}
	if ((i -= value < 0) && (k -= value < 0)) {
		i = 0;
		k = 0;
		return Gabariti(i, j -= value, k);
	}
	if ((k -= value < 0) && (j -= value < 0)) {
		k = 0;
		j = 0;
		return Gabariti(i -= value, j, k);
	}
	if (i -= value < 0) {
		i = 0;
		return Gabariti(i, j -= value, k -= value);
	}
	if (j -= value < 0) {
		j = 0;
		return Gabariti(i -= value, j, k -= value);
	}
	if (k -= value < 0) {
		k = 0;
		return Gabariti(i -= value, j -= value, k);
	}
	else
	return Gabariti(i -= value, j -= value, k -= value);
}

Gabariti operator /=(const Gabariti& A, int value) {
	int i = A.a;
	int j = A.b;
	int k = A.c;
	if (value <= 0) {
		return Gabariti(i = 0, j = 0, k = 0);
	}
	else
	return Gabariti(i /= value, j /= value, k /= value);
}

Gabariti operator *=(const Gabariti& A, int value) {
	int i = A.a;
	int j = A.b;
	int k = A.c;
	return Gabariti(i *= value, j *= value, k *= value);
}

