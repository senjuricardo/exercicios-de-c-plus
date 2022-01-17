// ler media de numeros impares.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

	double media = 0;
	double cont = 0;

	for (int i = 0; i < n; i++) {
		if (vec[i] % 2 != 0) {
			media = media + vec[i];
			cont++;
		}
	}

	double med = media / cont;

	cout << " a media é de : " << med << endl;
}