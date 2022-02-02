#include "Chave.h"

#include <iostream>
#include <time.h>
#include<cstdlib>
using namespace std;

bool duplicado(int* ch, int valorValidar, int vecsize) {
	for (int i = 0; i < vecsize; i++) {
		if (ch[i] == valorValidar)
			return true;
	}

	return false;
}

void Chave::gerarChaveAleatoria(int* ch, int vecsize)
{
	srand(time(NULL));

	for (int i = 0; i < vecsize; i++) {
		int random;

		do
		{
			random = rand() % 49 + 1;
		} while (duplicado(ch, random, vecsize));

		ch[i] = random;
		
	}
}

void Chave::lerChave(int* ch, int vecsize) {
	for (int i = 0; i < vecsize; i++) {
	int number;
	bool flag = true;
	
		do{
		cout << "digite um numero de 1 a 49 " << endl;
		cin >> number;

		flag = duplicado(ch, number, vecsize);
		} while (flag);
			ch[i] = number;
	}
	
}

void Chave::imprimirChave(int* ch, int vecsize) {
	for (int i = 0; i < vecsize; i++) {
		cout << ch[i] << "-";
	}
	cout << endl;
}

void Chave::ordenaChave(int* ch, int vecsize) {
	int aux = 0;
	for (int i = 0; i < vecsize; i++) {
		for (int j = 0; j < vecsize-1; j++) {
			if (ch[i] < ch[j]) {
				aux = ch[i];
				ch[i] = ch[j];
				ch[j] = aux;
			}
		}
	}
}

int Chave::verifPremio(int* ch, int* ch2, int vecsize) {
	int cont = 0;
	for (int i = 0; i < vecsize; i++) {
		for (int j = 0; j < vecsize; j++) {
			if (ch[i] == ch2[j]) {
				cont++;
			}
		}
	}
	switch (cont)
	{
	case 5:
		return 1;
	case 4:
		return 2;
	case 3:
		return 3;
	default:
		return 0;
	}
}


