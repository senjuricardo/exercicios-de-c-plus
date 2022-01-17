// ler um vetor e determnar o maior elemnto e o menor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, ("portuguese"));

	int n;

	cout << "digite um numero\n";
	cin >> n;

	int* vec = new int[n];

	for (int i = 0; i < n; i++) {
		cout << "digite um n\n";
		cin >> vec[i];
	}

	int maior = 0;
	int posMaior;
	for (int i = 0; i < n; i < i++) {
		if (vec[i] > maior) {
			maior = vec[i];
			posMaior = i;
		}
	}

		int menor = vec[0];
		int posMenor;
		for (int i = 0; i < n; i < i++) {
			if (vec[i] < menor) {
				menor = vec[i];
				posMenor = i;
			}
		}

		cout << "[" << maior << "]" << endl;
		cout << "[" << posMaior << "]" << endl;
		cout << "[" << menor << "]" << endl;
		cout << "[" << posMenor << "]" << endl;

	
}