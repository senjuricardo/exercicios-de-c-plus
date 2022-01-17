// numeros ate ser inserido 0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, ("portuguese"));
	int n;
	int cont = 0;
	double soma = 0;

	cout << " digite um numero\n";
	cin >> n;
	while (n != 0) {
		soma = soma + n;
		cont++;
		cout << " digite um numero\n";
		cin >> n;
	}

	double media = soma / cont;

	cout << " a média de valore sé de " << media << endl;
}