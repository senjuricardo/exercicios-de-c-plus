// ler numeros interios ate ser inserido 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, ("portuguese"));
	int n;
	int cont = 0;
	int contP = 0;
	int maior = 0;
	

	while (cont < 5) {
		cout << " digite um numero\n";
		cin >> n;

		if (n % 2 == 0 && n > maior) {
			contP++;
			maior = n;
		}
		else 	
			if (n % 2 != 0) {
				cont++;
			}
	}

	if (contP == 0) {
		cout << "nao foram introduzidos numeros pares";
	}
	else
		cout << "o valor par mais alto é de " << maior << endl;

	
}