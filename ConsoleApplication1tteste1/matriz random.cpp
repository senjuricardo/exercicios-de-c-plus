// ConsoleApplication1tteste1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <tchar.h>
#include<string>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <vector>

using namespace std;

int main()
{
	
	int linhas, colunas;
	cout << "digite um numero de linhas:  \n";
	cin >> linhas;
	cout << "digite um numero de colunas:  \n";
	cin >> colunas;


	
	int** mat = new int *[linhas];
	
	for (int i = 0; i < linhas; i++) {
		mat[i] = new int[colunas];
	
	}

	for (int i = 0; i < linhas; i++) {
		
		for (int j = 0; j < colunas; j++) {
			mat[i][j] = rand() % 10 + 1;
		}	
	};


	for (int i = 0; i < linhas; i++) {
		
		for (int j = 0; j < colunas; j++) {
			cout << mat[i][j];
		}
		cout << endl;
	};

	
	system("pause");
	return	0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
