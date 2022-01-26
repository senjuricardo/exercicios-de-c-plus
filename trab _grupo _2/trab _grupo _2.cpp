// trab _grupo _2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int intro(int* vecID, string* vecPess) {
	int idLogin;
	for (int i = 0; i < 5; i++) {
		cout << "-----------------------------" << endl;
		cout << " || o ID " << "[" << vecID[i] << "]" << " corresponde a " << vecPess[i] << " ||" << endl;
		cout << "-----------------------------" << endl;
	}

	do {
		cout << "Digite o seu id: ";
		cin >> idLogin;

		if (idLogin <= 0 || idLogin > 5)
		{
			cout << " id invalido" << endl;
		}
	} while (idLogin <= 0 || idLogin > 5);
	
	cout << "Seja bem-vindo " << vecPess[idLogin -1] << endl;
	sleep_for(10ns);
	sleep_until(system_clock::now() + 4s);
	system("cls");

	return idLogin;
}

double checkout(string* vecNomes, int* vec, double* vecPre, int matQuantPess[][5], int idPessoa);
void menu();
void venda(string* vecNomes, int* vec, double* vecPre, int matQuantPess[][5], int idPessoa, int matVendas[5][3], int* vecID, string* vecPess) {
	int selectedProd = 0;
	int buttonMenu =0;
	cout << matVendas[idPessoa - 1][2] << endl;
	if (matVendas[idPessoa-1][2] >= 10) {
		cout << "nao pode fazer mais compras " << endl;
		sleep_for(10ns);
		sleep_until(system_clock::now() + 4s);
		system("CLS");
		return;
		
	}
	while (selectedProd != 9){
		
			cout << "ID produto   ||   Produtos        ||    quantidade    ||         preço" << endl;
			for (int i = 0; i < sizeof(*vecNomes) / sizeof(vecNomes); i++) {
				cout << i + 1 <<  "                " << vecNomes[i] << "                  " << vec[i] << "                 " << vecPre[i] *1.23 << endl;
			}
			
		
				cout << "indique o produto que deseja comprar ou digite [9] para sair" << endl;
				int selectedProd;
				cin >> selectedProd;

			
			if (selectedProd == 9) {
				system("CLS");
				break;
			}
			int quant;
			cout << " qual é a quantidade do produto " << vecNomes[selectedProd - 1] << endl;
			cin >> quant;

			while (quant > vec[selectedProd - 1] || quant < 1) {
				cout << "Insira um valor correto" << endl;
				cin >> quant;

			}
			matQuantPess[idPessoa - 1][selectedProd - 1] = matQuantPess[idPessoa - 1][selectedProd - 1] + quant;
			vec[selectedProd - 1] = vec[selectedProd - 1] - quant;
			cout << quant << "  " << vecNomes[selectedProd - 1] << " foram adicionados à lista de " << vecPess[idPessoa - 1] << endl;
			
			sleep_for(10ns);
			sleep_until(system_clock::now() + 2s);
			system("CLS");
			
		};
	
	      // CHECKOUT 
	double valoCheckout = checkout(vecNomes, vec, vecPre, matQuantPess, idPessoa);
		  cout << " <<<<<<<<<< Checkout >>>>>>>>>>>" << endl ;
		  cout << " O valor total a pagar é de : " << valoCheckout << endl;
		
		// TALAO DE COMPRA
		
		double precoDado, troco;
		do {

			cout << " Diga o valor a dar para o pagamento" << endl;
			cin >> precoDado;
			troco = precoDado  - valoCheckout;

			if (precoDado < valoCheckout) {
				cout << "valor insuficiente" << endl;
			}

		} while (precoDado < valoCheckout);
		
		int cont = 1;

		system("CLS");

		cout << "##############################################" << endl;
		cout << "---------------Talao de Compra----------------" << endl;
		cout << "         Número do Cliente " << idPessoa  << endl;
		cout << "         Nome do Cliente " << vecPess[idPessoa - 1]<< endl;
		cout << "         Numero de linha " << cont << endl;
		
		for (int i = 0; i < 5; i++){
			if (matQuantPess[idPessoa - 1][i ] > 0) {
				cout << "         Nome do produto " << vecNomes[i] << endl;
				cout << "         Quantidade " << matQuantPess[idPessoa - 1][i] << endl;
				cout << "         Preço s/IVA " << (vecPre[i]) << endl;
				cout << "         IVA " << vecPre[i] * 0.23 << endl;
				cout << "         Total C/iva " << vecPre[i] * 1.23 << endl;
			}
		}
		
		cout << "         Valor entregue " << precoDado <<  endl;
		cout << "         Troco " <<  troco << endl;
		cout << "----------------------------------------------" << endl;
		cout << "##############################################" << endl;
		cout << "                                               " << endl;
		
		matVendas[idPessoa-1][2] ++;
	

		cout << "para voltar ao menu inicial prima 1" << endl;
		cin >> buttonMenu;
		if (buttonMenu == 1) {
			menu();
		}

}

double checkout(string* vecNomes, int* vec, double* vecPre, int matQuantPess[][5], int idPessoa) {
	double precoTotal = 0;
	for (int i = 0; i < 5; i++) {
		
		precoTotal = precoTotal + matQuantPess[idPessoa - 1][i] * vecPre[i];

	}

	return (precoTotal* 1.23);
}



/*void menu() {

	cout << "|------------------------------------|" << endl;
	cout << "|	  ####STORE####              |" << endl;
	cout << "|			  	     |" << endl;
	cout << "|       Efetuar uma venda [1]        |" << endl;
	cout << "|Relatorio de compra para stock [2]  |" << endl;
	cout << "| Criar relatórios Stock Total[3]	  |" << endl;
	cout << "| Criar relatórios Stock Produto [4  |" << endl;
	cout << "|			             |" << endl;
	cout << "|------------------------------------|" << endl;


	
}*/
void compraStock(string* vecNomes, int *vec) {
	int falta;
	for (int i = 0; i < 5; i++) {
		if (vec[i] < 5) {
			falta = 5 - vec[i];
			vec[i] = vec[i] + falta;
			cout << "foram adicionados " << falta << vecNomes[i] << " ao stock " << endl;
		}
	}
	cout << "            " << endl;
	int buttonMenu;
	cout << "para voltar ao menu inicial prima 1" << endl;
	cin >> buttonMenu;
	if (buttonMenu == 1) {
		menu();
	}
}

void stockTotal(int* vec ) {
	int totalStock = 0;

	for (int i = 0; i < 5; i++) {
		totalStock = totalStock + vec[i];
	}
	cout << "-------STOCK TOTAL-------" << endl;
	cout << "     o stock total de produtos é: " << totalStock << endl;

	cout << "            " << endl;
	int buttonMenu;
	cout << "para voltar ao menu inicial prima 1" << endl;
	cin >> buttonMenu;
	if (buttonMenu == 1) {
		menu();
	}
}

void stockTotalProd(int* vec, string* vecNomes) {
	
	cout << "-------STOCK Produto-------" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "     o stock de " << vecNomes[i] << " é de: " << vec[i] << endl;
	}
	cout << "            " << endl;
	int buttonMenu;
	cout << "para voltar ao menu inicial prima 1" << endl;
	cin >> buttonMenu;
	if (buttonMenu == 1) {
		menu();
	}
}

int main()
{
	setlocale(LC_ALL, ("portuguese"));

	int vec[] = { 5,5,5,5,5 };
	string vecNomes[] = { "COMPUTADOR", "telemovel", "rato", "fones", "teclado" };
	double vecPre[] = { 100.00 , 60.00, 20.00, 15.00, 10.00 };
	int vecID[] = { 1, 2, 3, 4, 5 };
	string vecPess[] = { "Ricardo",	"Ana", "Goncalo", "Sandra", "Joana" };

	int matQuantPess[][5] = { {0, 0 ,0 ,0 ,0} , {0, 0 ,0 ,0 ,0}, {0, 0 ,0 ,0 ,0}, {0, 0 ,0 ,0 ,0}, {0, 0 ,0 ,0 ,0} };

	int matVendas[5][3] = { { 0, 0 ,9 } , { 1, 0 ,0 } ,{ 2, 0 ,0 } ,{ 3, 0 ,0 } ,{ 4, 0 ,0 } };
	

	int idPessoa = intro(vecID, vecPess);

	//menu();
	int opc;
	do {
		cout << "|------------------------------------|" << endl;
		cout << "|	  ####STORE####              |" << endl;
		cout << "|			  	     |" << endl;
		cout << "|       Efetuar uma venda [1]        |" << endl;
		cout << "|Relatorio de compra para stock [2]  |" << endl;
		cout << "| Criar relatorios Stock Total[3]	  |" << endl;
		cout << "| Criar relatorios Stock Produto [4  |" << endl;
		cout << "|			             |" << endl;
		cout << "|------------------------------------|" << endl;
		cin >> opc;
		if (opc == 1) {
			system("CLS");
			venda(vecNomes, vec, vecPre,  matQuantPess, idPessoa, matVendas, vecID, vecPess );
		}
		if (opc == 2) {
			system("CLS");
			compraStock(vecNomes, vec);
		}
		if (opc == 3) {
			system("CLS");
			stockTotal(vec);
		}
		if (opc == 4) {
			system("CLS");
			stockTotalProd(vec, vecNomes);
		}

		
	} while (opc != 0);
	

	

}
