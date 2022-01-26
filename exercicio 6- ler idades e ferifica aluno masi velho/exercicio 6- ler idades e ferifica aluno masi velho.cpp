// exercicio 6- ler idades e ferifica aluno masi velho.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

int calcAlunoVelho(int n, int* vec) {
    int maisVelho = vec[0];

for (int i = 0; i < n; i++) {
    cout << "diga a idade do aluno " << i + 1 << endl;
        cin >> vec[i];
    }

    for (int i = 0; i < n; i++)
        if (vec[i] > maisVelho) {
            maisVelho = vec[i];
        }

    return maisVelho;
}


int main(void) {
    setlocale(LC_ALL, ("portuguese"));
    int n;

    cout << "digite o numero de alunos: " << endl;
    cin >> n;

    int* vec = new int[n];

    int maisVelho = calcAlunoVelho(n, vec);

    cout << "o aluno mais velho é: " << maisVelho<< endl;
    return 0;
}