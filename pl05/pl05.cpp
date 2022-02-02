// pl05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "circulo.h"
#include <stdio.h>
#include <iostream>
#include<math.h>
#include<cstdlib>

using namespace std;

int main()
{
    double  raio1, raio2, x1, x2, y1, y2;
    std::cout << "digite o raio de um circulo\n";
    cin >> raio1;
        std::cout << "digite o raio de um circulo\n";
        cin >> raio2;

        cout << "indique o ponto 1 de x " << endl;
        cin >> x1;
        cout << "indique o ponto 2 de x " << endl;
        cin >> x2;
        cout << "indique o ponto 1 de y " << endl;
        cin >> y1;
        cout << "indique o ponto 2 de y " << endl;
        cin >> y2;
    
        //area maior
        cout << Circulo::areaMaior(raio1, raio2) << endl;
        
        // soma de 2 ciruclos de raio 5
        double soma = Circulo::somaCircun();
        cout << " a soma de 2 circulos de raio 5 e de: " << soma << endl;
        
        //Imprimir distancia entre dois pontos 

        cout << Circulo::imprimirDistac(x2, x1, y2, y1) << endl;
}

