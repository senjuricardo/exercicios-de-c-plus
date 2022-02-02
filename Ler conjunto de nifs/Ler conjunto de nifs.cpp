// Ler conjunto de nifs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int verifica(int* vec, int *n, int* nif) {
    int pos = 0;


    for (int i = 0; i < *n; i++) {
        if (*nif == vec[i]) {
            pos = i;
            break;
        }
        else {
            pos = -1;
        }
    }

    return pos;
}

int main()
{
    int n, nif;
    std::cout << "Indique o numero de pessoas a ler \n";
    cin >> n;

    int* vec = new int[n];

    for (int i = 0; i < n;i++){
        cout << "digite o nif da pessoa " << i+1 << endl;
        cin >> vec[i];
    }

    cout << "indique o nif pretendido:" << endl;
    cin >> nif;

    int posicao = verifica(vec, &n, &nif);

    cout << "o nif que deseja esta na posiçao " << posicao << endl;

}

