// lernotas oral e escrito.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    double notaO, notaE;
    setlocale(LC_ALL, ("portuguese"));
    std::cout << "digite a nota oral!\n";
    cin >> notaO;
    std::cout << "digite a nota escrita!\n";
    cin >> notaE;

    if (notaO * 0.3 + notaE * 0.7 >= 10) {
        cout << " esta aprovado";
    }else {
cout << "reprovado";
}
}


