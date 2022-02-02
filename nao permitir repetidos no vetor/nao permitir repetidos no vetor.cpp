// nao permitir repetidos no vetor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void alter(int* vec, int* n) {
   

    for (int i = 0; i <* n;i++) {
        for (int j = 1; j < *n; j++){
            do {
                cout << "digite o numero da pessoa " << i + 1 << endl;
                    cin >> vec[i];
            } while (vec[i] == vec[j]);
        }
    }   
}



int main()
{
    setlocale(LC_ALL, ("portuguese"));
    int n, nif;
    std::cout << "Indique o numero de pessoas a ler \n";
    cin >> n;

    int* vec = new int[n];

    alter(vec, &n);

}