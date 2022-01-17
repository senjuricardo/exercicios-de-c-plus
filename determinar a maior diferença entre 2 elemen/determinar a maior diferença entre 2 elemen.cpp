// determinar a maior diferença entre 2 elemen.cpp : This file contains the 'main' function. Program execution begins and ends there.
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



	int dif = abs(vec[0] - vec[1]);
	

	for (int i = 0; i < n -1 ; i++) {
		if (abs(vec[i] - vec[i + 1]) > dif ) {
			dif = abs(vec[i] - vec[i + 1]);

		}
	}

	cout << dif << endl;


}