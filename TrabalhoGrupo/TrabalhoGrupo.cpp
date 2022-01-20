// TrabalhoGrupo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <windows.h>
#include <tchar.h>
#include <string>
#include <chrono>
#include <thread>


using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
using std::chrono::system_clock;

int intro(int *vecID, string* vecPess) {
	int a;
	for (int i = 0; i < 5; i++) {
		cout << "-----------------------------" << endl;
		cout << " || o ID " <<"["<< vecID[i]<< "]" << " corresponde a "<<  vecPess[i] <<" ||"<< endl;
		cout << "-----------------------------" << endl;
	}

	cout << "Digite o seu id: ";
	cin >> a;


	return a;
}

double checkout(string* vecNomes, int* vec, double* vecPre);

void venda(string* vecNomes, int* vec, double* vecPre) {
	cout << "Computador [1]: " << vec[0] << endl;
	cout << "telemovel[2]: " << vec[1] << endl;
	cout << "rato[3]: " << vec[2] << endl;
	cout << "fones[4]: " << vec[3] << endl;
	cout << "teclado[5]: " << vec[4] << endl;

	int op, quant, quant1, quant2, quant3, quant4;
	cin >> op;

	do {
		if (op == 1) {
			cout << "indique a quantidade : " << endl;
			cin >> quant;
			if (vec[0] > 0) {
				vec[0] = vec[0] - quant;

				cout << "adicionado à lista" << endl;
				
			}
		}
		else
			if (op == 2) {
				cout << "indique a quantidade : " << endl;
				cin >> quant1;
				if (vec[1] > 0) {
					vec[1] = vec[1] - quant1;
					cout << "adicionado à lista" << endl;
					
				}
			}
			else
				if (op == 3) {
					cout << "indique a quantidade : " << endl;
					cin >> quant2;
					if (vec[2] > 0) {
						vec[2] = vec[2] - quant2;

						cout << "adicionado à lista" << endl;
						
					}
				}
				else
					if (op == 4) {
						cout << "indique a quantidade : " << endl;
						cin >> quant3;
						if (vec[3] > 0) {
							vec[3] = vec[3] - quant3;

							cout << "adicionado à lista" << endl;
						
						}
					}
					else
						if (op == 5) {
							cout << "indique a quantidade : " << endl;
							cin >> quant4;
							if (vec[4] > 0) {
								vec[4] = vec[4] - quant4;

								cout << "adicionado à lista" << endl;
								
							}
						}
		
		cout << "Computador [1]: " << vec[0] << endl;
		cout << "telemovel[2]: " << vec[1] << endl;
		cout << "rato[3]: " << vec[2] << endl;
		cout << "fones[4]: " << vec[3] << endl;
		cout << "teclado[5]: " << vec[4] << endl;

		cout << " Escolha outro produto || Caso queira terminar a compra prima [0]";
		cin >> op;
		if (op == 0) {
		checkout(vecNomes, vec, vecPre);
	}
	} while (op != 0);
}

double checkout(string* vecNomes, int* vec, double* vecPre) {
	double venda = 0;
	for (int i = 0; i < 5; i++) {
		venda = venda + vec[i] * vecPre[i];

	}
			
	return venda;
}
	
		void menu() {
	
			cout << "|------------------------------------|" << endl;
			cout << "|	  ####STORE####              |" << endl;
			cout << "|			  	     |" << endl;
			cout << "|       Efetuar uma venda [1]        |" << endl;
			cout << "|Relatorio de compra para stock [2]  |" << endl;
			cout << "|	Criar relatórios [3]	     |" << endl;
			cout << "|			             |" << endl;
			cout << "|------------------------------------|" << endl;

			
			sleep_for(10ns);
			sleep_until(system_clock::now() + 5s);
			system("cls");
		}

int main()
{		setlocale(LC_ALL, ("portuguese"));

	int vec[] = { 5,5,5,5,5 };
	string vecNomes[] = { "computador", "telemovel", "rato", "fones", "teclado" };
	double vecPre[] = { 100.00 , 60.00, 20.00, 15.00, 10.00 };
	int vecID[] = { 1000, 1001, 1002, 1003, 1004 };
	string vecPess[] = { "Ricardo",	"Ana", "Goncalo", "Sandra", "Joana" };

	int var = intro( vecID, vecPess);
	
	menu();
	int opc;
	
	do {
		cin >> opc;
		if (opc == 1) {
			venda(vecNomes, vec, vecPre);
		}

			/*if (op == 2) {
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
			}*/
	} while (opc != 0);

	double valorTot = checkout(vecNomes, vec, vecPre);

	cout << "o valor total a pagar pela compra e de: " << valorTot;


	
}