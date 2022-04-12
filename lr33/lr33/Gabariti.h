// директива препроцессора
#ifndef Gabariti_h
#define Gabariti_h
#include <iostream>

class Gabariti {
	int a, b, c;

public:
	friend Gabariti operator +(const Gabariti& A, int value);
	friend Gabariti operator -(const Gabariti& A, int value);
	friend Gabariti operator /(const Gabariti& A, int value);
	friend Gabariti operator *(const Gabariti& A, int value);
	friend Gabariti operator +=(const Gabariti& A, int value);
	friend Gabariti operator -=(const Gabariti& A, int value);
	friend Gabariti operator /=(const Gabariti& A, int value);
	friend Gabariti operator *=(const Gabariti& A, int value);

public:
	~Gabariti(); //Деструктор для освобождения памяти
	Gabariti(int i, int j, int k) {
		a = i; 
		b = j; 
		c = k; 
	}
	int getShowA() { return a; }
	int getShowB() { return b; }
	int getShowC() { return c; }
	Gabariti() {a = b = c = 0;}
};

// Заканчиваем директивой препроцессора
#endif