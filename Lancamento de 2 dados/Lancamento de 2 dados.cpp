// Lancamento de 2 dados.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
using namespace std;

void dados(int n, int* vec, int* vec2) {
    
    int cont = 0;
    int cont1 = 0;

    // Random func
    time_t t1;
    srand((unsigned)time(&t1));

    // Dado 1
    for (int i = 0; i < n; i++) {
        vec[i] = (rand() % 6) + 1;
    }

    //Dado 2
    for (int i = 0; i < n; i++) {
        vec2[i] = (rand() % 6) + 1;
    }

    for (int i = 1; i < 7; i++) {
        for (int j = 0; j < n; j++) {
            if (i == vec[j]) {
                cont++;
            }
            if (i == vec2[j]) {
                cont++;
            }
        }
        if (cont > cont1) {
            cont1 = cont;
        }
        cont = 0;
    }

    int flag = 0;
    for (int i = 1; i < 7; i++) {
        for (int j = 0; j < n; j++) {
            if (i == vec[j]) {
                cont++;
            }
            if (i == vec2[j]) {
                cont++;
            }
        }
        if (cont == cont1) {
            if (flag == 0) {
                cout << "os valores mais comuns sao: ";
                flag++;
            }
            cout << "[" << i << "]";
        }
        cont = 0;
    }
    cout << "\n";
}

int main(void) {

    setlocale(LC_ALL, ("portuguese"));

    int n = 0;

    cout << "Quantos lancamentos quer fazer?" << "\n";
    cin >> n;

    int* vec = new int[n];
    int* vec2 = new int[n];
    dados(n, vec, vec2);

    for (int i = 0; i < n; i++) {

        cout << "lancamento " << i + 1 << " [" << vec[i] << "]" << "[" << vec2[i] << "]" << "\n";
    }

}