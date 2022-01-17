// exerc 2 de funçoes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

void LerVec (int *vec){
	for (int i = 0; i < 5; i++) {
		cout << "digite o numero da posicao " << i << endl;
		cin >> vec[i];
}
}

int lerNeg(int* vec) {
	int cont = 0;

	for (int i = 0; i < 5; i++) {
		if (vec[i] < 0) {
			cont++;
		}
	}

	return cont;
}

int mediaVal(int* vec) {
	double cont = 0;
	double soma = 0;

	for (int i = 0; i < 5; i++) {
		if (vec[i] > 0) {
			soma = soma + vec[i];
			cont++;
		}
	}
	
	double media = soma / cont;

	return media;
}

int lerMult(int* vec) {
	double cont = 0;
	double soma = 0;

	for (int i = 0; i < 5; i++) {
		if (vec[i] % 3 == 0 && vec[i] % 5 == 0 ) {
			cont++;
		}
	}

	return cont;
}

int main()
{
	setlocale(LC_ALL, ("portuguese"));
	
	int vec[5];
	LerVec(vec);
	int op;
	do {
		cout << "digite [1]para criar um vetor \n  [2] para ver os negativos\n  [3] para ver a media dos positivos \n  [4] para ver os multiplos de 3 e de 5 \n queres sair? prime 0 oh burro"  << endl;
		cin >> op;

		if (op == 1) {
			LerVec(vec);
		}
		if (op == 2) {
			int numNeg = lerNeg(vec);
			cout << "o numero de negativos e " << numNeg << endl;
		}
		if (op == 3) {
			double med = mediaVal(vec);
			cout << "a media dos valores positivos e " << med << endl;
		}
		if (op == 4) {
			double totalMult = lerMult(vec);
			cout << "a media dos multiplos de 3 e de 5 sao  " << totalMult << endl;
		}
	} while (op != 0);

}
