// vetores, pl02, 1 a -ruben.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Vectores.h"
using namespace std;

void Vectores::lerVector(int n, int* vec) {
	for (int i = 0; i < n; i++) {
		cout << "vec[" << i << "]=";
			cin >> vec[i];
	}
}

void Vectores::mostrarVector(int n, int* vec) {
	for (int i = 0; i < n; i++) {
		cout << "vec[" << i << "]=" << vec[i] << "\n";
	}
}

double Vectores::mediaVector(int n, int* vec) {
	double soma = 0, media;
	for (int i = 0; i < n; i++) {
		soma += vec[i];
	}
	media = soma / n;
	return media;
}

int Vectores::modaVector(int n, int* vec) {
	int moda = 0;
	int aux;
	int cont;
	for (int i = 0; i < n; i++)
		for (int j = i+1; i < n; i++) {
			if (vec[i] == vec[j]) {
				cont++;
			}
	}
	
	return moda;
}

