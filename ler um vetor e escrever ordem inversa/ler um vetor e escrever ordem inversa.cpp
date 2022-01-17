// ler um vetor e escrever ordem inversa.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	
	for (int i = n-1; i >= 0; i--) {
		cout << vec[i]<< endl;
	}

}