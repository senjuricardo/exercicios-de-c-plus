// funcao que ve tamanhos entre 1.75 e 1.85.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void calcAlunoVelho(double* vec, int n, int* cont) {


    for (int i = 0; i < n; i++) {
        cout << "diga a alturaa do aluno  " << i + 1 << endl;
        cin >> vec[i];
    }

    for (int i = 0; i < n; i++) {
        if (vec[i] > 1.50 && vec[i] < 1.75) {
            *cont = *cont + 1;
        }
    }
}


int main(void) {
    setlocale(LC_ALL, ("portuguese"));
    int n;
    int cont = 0;
    cout << "digite o numero de pessoas: " << endl;
    cin >> n;

    double * vec = new double[n];

    calcAlunoVelho(vec, n, &cont);

   cout << " existem " << cont << "alunos, entre essas alturas " << endl;
    return 0;
}