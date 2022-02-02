// converter negativos para 0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int verifica(int* vec, int* n) {
    int pos = 0;
    int cont = 0;

    for (int i = 0; i < *n; i++) {
        if (vec[i] < 0) {
            vec[i] = 0;
            cont++;
        }
    }

    for (int i = 0; i < *n; i++) {
        cout << vec[i] << endl;
    }
return cont;
    }
    


int main()
{
    setlocale(LC_ALL, ("portuguese"));
    int n, nif;
    std::cout << "Indique o numero de pessoas a ler \n";
    cin >> n;

    int* vec = new int[n];

    for (int i = 0; i < n;i++) {
        cout << "digite o numero da pessoa " << i + 1 << endl;
        cin >> vec[i];
    }

 

    int posicao = verifica(vec, &n);

    cout << "o numero de posiçoes alteradas foi de:  " << posicao << endl;

}