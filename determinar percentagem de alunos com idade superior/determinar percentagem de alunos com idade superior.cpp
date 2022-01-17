// determinar percentagem de alunos com idade superior.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, ("portuguese"));
	int n, idadeDef;
	cout << "digite o numero de alunos da turma\n";
	cin >> n;
	cout << "digite uma idade defniida\n";
	cin >> idadeDef;


	int* vec = new int[n];
	int cont = 0;
	for (int i = 0; i < n; i++)
	{ 
		cout << " diga a idade: \n";
		cin >> vec[i];
		if (vec[i] > idadeDef)
		{
			cont++;
		}
		
	}

	int perc = (cont * 100) / n;

		cout << " a percentagem de alunos com idade Superior a " << idadeDef << " é de: " << perc << endl;
}