// apresentar numeros pares entre 2 valors.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    setlocale(LC_ALL, ("portuguese"));

    int n, y;
    std::cout << "Digite o numero inicial !\n";
    cin >> n;

    cout << "digite o numero final! \n";
    cin >> y;



    int* vec = new  int[y];

   
    for (int i = n; i < y; i++) {
       
        if (i % 2 == 0) {
            cout << i <<"| ";
        }

        
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
