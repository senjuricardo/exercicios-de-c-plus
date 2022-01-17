// Exercicio valor a pagar com iva.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    double saldo;
    std::cout << "digite  seu saldo medio\n";
    cin >> saldo;
    double credito;
    if (saldo < 200) {
        cout << " o saldo médio é de " << saldo << "e nao tem nenhum credito";
    }
    else 
        if (saldo >=200 && saldo < 400) {
            credito = saldo * 0.20;
        cout << " o saldo médio é de " << saldo << "e tem de credito " << credito <<endl ;
    }
    else
        if (saldo >= 401 && saldo < 600) {
            credito = saldo * 0.30;
            cout << " o saldo médio é de " << saldo << "e tem de credito " << credito << endl;
            }
        else {
            credito = saldo * 0.40;
            cout << " o saldo médio é de " << saldo << "e tem de credito " << credito << endl;
        }
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
