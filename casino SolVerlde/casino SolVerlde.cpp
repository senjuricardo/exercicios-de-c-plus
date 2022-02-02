// casino SolVerlde.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Chave.h"

#define chaveSistemaSize 5
#define chaveUtilizadorSize 6 


int main() {
	int* chAle = new int[chaveSistemaSize];

 Chave::gerarChaveAleatoria(chAle, chaveSistemaSize);

	int* chUs = new int[chaveUtilizadorSize];
	Chave::lerChave(chUs, chaveUtilizadorSize);

	Chave::ordenaChave(chAle, chaveSistemaSize);
	
	Chave::ordenaChave(chUs, chaveUtilizadorSize);
	
	Chave::imprimirChave(chAle, chaveSistemaSize);
	Chave::imprimirChave(chUs, chaveUtilizadorSize);

	int resultado = Chave::verifPremio(chAle, chUs, chaveUtilizadorSize);

    cout << endl;
    switch (resultado)
    {
    case 0:
        cout << "Boa sorte para a proxima!" << endl;
        break;
    case 1:
        cout << "Primeiro prémio" << endl;
        break;
    case 2:
        cout << "Segundo prémio" << endl;
        break;
    case 3:
        cout << "Terceiro prémio" << endl;
        break;

    }

	

		return 0;

}