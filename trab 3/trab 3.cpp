// trab 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

	cout << "Seja bem-vindo " << vecPess[idLogin - 1] << endl;
	sleep_for(10ns);
	sleep_until(system_clock::now() + 4s);
	system("cls");

	return idLogin;
}

double checkout(string* vecNomes, int* vecStock, double* vecPreco, int matQuantPess[][5], int idPessoa);
//void menu();
void venda(string* vecNomes, int* vecStock, double* vecPreco, int matQuantPess[][5], int idPessoa, int matVendas[5][3], int* vecID, string* vecPess) {
	setlocale(LC_ALL, ("portuguese"));
	int selectedProd =0;
	int buttonMenu = 0;
	cout << "Pode efetuar um total de 10 compras \n" <<  "Esta é a compra numero: " << matVendas[idPessoa - 1][2] +1  << endl;
	cout << "Você comprou um total  de : " << matVendas[idPessoa - 1][1] <<  " produtos, nesta loja." << endl;
	
	cout << "                 " << endl;
	
	if (matVendas[idPessoa - 1][2] >= 10) {
		cout << "nao pode fazer mais compras " << endl;
		sleep_for(10ns);
		sleep_until(system_clock::now() + 4s);
		system("CLS");
		return;

	}

	do {
		cout << "ID produto   ||    quantidade    ||         preço  ||               Produtos        " << endl;
		for (int i = 0; i < sizeof(*vecNomes) / sizeof(vecNomes) /*em caso de erro aqui trocar para 5*/; i++) {
			cout << i + 1 << "                  " << vecStock[i] << "                        " << vecPreco[i] * 1.23 << "                     " << vecNomes[i] << endl;
		}

		do
		{
			cout << "indique o produto que deseja comprar ou digite [9] para sair" << endl;
				cin >> selectedProd;
		} while (selectedProd <0 || selectedProd >5 && selectedProd <9 || selectedProd >9);
		



		if (selectedProd == 9) {
			system("CLS");
			break;
		}
		int quant;
		cout << " qual é a quantidade do produto " << vecNomes[selectedProd - 1] << endl;
		cin >> quant;
		while (quant > vecStock[selectedProd - 1] || quant < 1) {
			cout << "Insira um valor correto" << endl;
			cin >> quant;

		}
		matQuantPess[idPessoa - 1][selectedProd - 1] = matQuantPess[idPessoa - 1][selectedProd - 1] + quant;
		vecStock[selectedProd - 1] = vecStock[selectedProd - 1] - quant;
		cout << quant << "  " << vecNomes[selectedProd - 1] << " foram adicionados à lista de " << vecPess[idPessoa - 1] << endl;

		sleep_for(10ns);
		sleep_until(system_clock::now() + 2s);
		system("CLS");

	} while (selectedProd != 9);

	// CHECKOUT 
	double valoCheckout = checkout(vecNomes, vecStock, vecPreco, matQuantPess, idPessoa);
	cout << " <<<<<<<<<< Checkout >>>>>>>>>>>" << endl;
	cout << " O valor total a pagar é de : " << valoCheckout << endl;

	// TALAO DE COMPRA

	double precoDado, troco;
	do {

		cout << " Diga o valor a dar para o pagamento" << endl;
		cin >> precoDado;
		troco = precoDado - valoCheckout;

		if (precoDado < valoCheckout) {
			cout << "valor insuficiente" << endl;
		}

	} while (precoDado < valoCheckout);

	

	system("CLS");

	cout << "##############################################" << endl;
	cout << "---------------Talao de Compra----------------" << endl;
	cout << "         Numero do Cliente: " << idPessoa << endl;
	cout << "         Nome do Cliente: " << vecPess[idPessoa - 1] << endl;
	cout << "     --------------------------------"  << endl;

	for (int i = 0; i < 5; i++) {
		if (matQuantPess[idPessoa - 1][i] > 0) {
			cout << "         Numero de linha: " << vecID[i] << endl;
			cout << "         Nome do produto: " << vecNomes[i] << endl;
			cout << "         Quantidade: " << matQuantPess[idPessoa - 1][i] << endl;
			cout << "         Preço s/IVA: " << (vecPreco[i]) << endl;
			cout << "         IVA: " << vecPreco[i] * 0.23 << endl;
			cout << "         Total C/iva: " << vecPreco[i] * 1.23 << endl;
			cout << "     --------------------------------" << endl;
			matVendas[idPessoa - 1][1] = matVendas[idPessoa - 1][1] + matQuantPess[idPessoa - 1][i];
			matQuantPess[idPessoa - 1][i] = 0;
		}
	}
	cout << "         Valor entregue: " << precoDado << endl;
	cout << "         Troco: " << troco << endl;
	cout << "----------------------------------------------" << endl;
	cout << "##############################################" << endl;
	cout << "                                               " << endl;

	matVendas[idPessoa - 1][2] ++;
	
	cout << "para voltar ao menu inicial prima 1" << endl;
	cin >> buttonMenu;
	system("cls");
	//if (buttonMenu == 1) {
		//menu();
	//}

}

double checkout(string* vecNomes, int* vecStock, double* vecPreco, int matQuantPess[][5], int idPessoa) {
	double precoTotal = 0;
	for (int i = 0; i < 5; i++) {
		
		precoTotal = precoTotal + matQuantPess[idPessoa - 1][i] * vecPreco[i];
		
	}

	return (precoTotal * 1.23);
}

/*void menu() {

	cout << "|------------------------------------|" << endl;
	cout << "|	  ####STORE####              |" << endl;
	cout << "|			  	     |" << endl;
	cout << "|       Efetuar uma venda [1]        |" << endl;
	cout << "|Relatorio de compra para stock [2]  |" << endl;
	cout << "| Criar relat�rios Stock Total[3]	  |" << endl;
	cout << "| Criar relat�rios Stock Produto [4  |" << endl;
	cout << "|			             |" << endl;
	cout << "|------------------------------------|" << endl;



}*/
void compraStock(string* vecNomes, int* vecStock) {
	int falta;
	for (int i = 0; i < 5; i++) {
		if (vecStock[i] < 5) {
			falta = 5 - vecStock[i];
			vecStock[i] = vecStock[i] + falta;
			cout << "foram adicionados  " << falta << " " << vecNomes[i] << " ao stock " << endl;
		}
	}
	cout << "            " << endl;
	int buttonMenu;
	cout << "para voltar ao menu inicial prima 1" << endl;
	cin >> buttonMenu;
	/*if (buttonMenu == 1) {
		menu();
	}*/
	system("cls");
}

void stockTotal(int* vecStock) {
	int totalStock = 0;

	for (int i = 0; i < 5; i++) {
		totalStock = totalStock + vecStock[i];
	}
	cout << "-------STOCK TOTAL-------" << endl;
	cout << "     o stock total de produtos é : " << totalStock << endl;

	cout << "            " << endl;
	int buttonMenu;
	cout << "para voltar ao menu inicial prima 1" << endl;
	cin >> buttonMenu;
	/*if (buttonMenu == 1) {
		menu();
	}*/
	system("cls");
}

void stockTotalProd(int* vecStock, string* vecNomes) {

	cout << "-------STOCK Produto-------" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "     o stock de " << vecNomes[i] << " é de: " << vecStock[i] << endl;
	}
	cout << "            " << endl;
	int buttonMenu;
	cout << "para voltar ao menu inicial prima 1" << endl;
	cin >> buttonMenu;
	/*if (buttonMenu == 1) {
		menu();
	}*/
	system("cls");
}

int main()
{
	setlocale(LC_ALL, ("portuguese"));


	int vecStock[] = { 5,5,5,5,5 };
	string vecNomes[] = { "COMPUTADOR", "TELEMOVEL", "RATO", "FONES", "TECLADO" };
	double vecPreco[] = { 100.00 , 60.00, 20.00, 15.00, 10.00 };
	int vecID[] = { 1, 2, 3, 4, 5 };
	string vecPess[] = { "Ricardo",	"Ana", "Goncalo", "Sandra", "Joana" };

	int matQuantPess[][5] = { {0, 0 ,0 ,0 ,0} , {0, 0 ,0 ,0 ,0}, {0, 0 ,0 ,0 ,0}, {0, 0 ,0 ,0 ,0}, {0, 0 ,0 ,0 ,0} };

	int matVendas[5][3] = { { 0, 0 ,9 } , { 1, 0 ,0 } ,{ 2, 0 ,0 } ,{ 3, 0 ,0 } ,{ 4, 0 ,0 } };


	int idPessoa = intro(vecID, vecPess);

	// menu();
	int opc;

	do {
		cout << "|------------------------------------|" << endl;
		cout << "|	  ####STORE####              |" << endl;
		cout << "|			  	     |" << endl;
		cout << "|       Efetuar uma venda [1]        |" << endl;
		cout << "|Relatorio e compra de  stock [2]    |" << endl;
		cout << "| Criar relatórios Stock Total[3]    |" << endl;
		cout << "| Criar relatórios Stock Produto [4] |" << endl;
		cout << "| Entrar com outro Login [5]         |" << endl;
		cout << "|			             |" << endl;
		cout << "|------------------------------------|" << endl;
		cin >> opc;
		if (opc == 1) {
			system("CLS");
			venda(vecNomes, vecStock, vecPreco, matQuantPess, idPessoa, matVendas, vecID, vecPess);
		}
		if (opc == 2) {
			system("CLS");
			compraStock(vecNomes, vecStock);
		}
		if (opc == 3) {
			system("CLS");
			stockTotal(vecStock);
		}
		if (opc == 4) {
			system("CLS");
			stockTotalProd(vecStock, vecNomes);
		}
		if (opc == 5) {
			system("CLS");
			idPessoa = intro(vecID, vecPess);
		}

		system("cls");
	} while (opc != 0);




}