// exercicio de somar, media e dividir.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <tchar.h>
#include<string>


using namespace std;

int main()
{
    setlocale(LC_ALL, ("portuguese"));

    int a, b,c;
    std::cout << "Digite o numero a !\n";
    cin >> a;
    cout << "digite o numero b! \n";
    cin >> b;
    cout << "digite o numero c! \n";
    cin >> c;
    cout << " a soma de a + b é de " << a + b << endl;
    cout << " a média é  de " << (a + b + c) / 3 << endl; 
    cout << " a divisaoo de a por b é de " << a / b<< endl;
    



}