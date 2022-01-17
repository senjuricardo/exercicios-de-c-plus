// ler um vetor e comparar aos vizinhos.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

	int cont = 0;
	for (int i = 1; i < n -1; i++) {
		if (vec[i] > vec[i - 1] && vec[i] > vec[i + 1]) {
			cout << vec[i] << endl;
			cont++;
			}
		}
	
	cout << cont << endl;
	


}