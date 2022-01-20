// exer 3 das funcoes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int convertSeg(int hora, int min, int seg) {
    int soma = 0;

    hora = 60 * 60 * hora;
    min = 60 * min;
    soma = hora + min + seg;

    return soma;
}

int intervalo(int saida, int entrada) {
    int intervaloo = saida - entrada;
    return intervaloo;
}

int main()
{
    int he, me, se, hs, ms, ss, a, b, c;
    std::cout << "digite a hora de entrada\n ";
    std::cout << "digite a hora \n ";
    cin >> he;
    std::cout << "digite os minutos de entrada\n ";
    cin >> me; 
    std::cout << "digite os segundos de entrada\n ";
    cin >> se;

    std::cout << "digite a hora de saida\n ";
    std::cout << "digite a hora \n ";
    cin >> hs;
    std::cout << "digite os minutos de saida\n ";
    cin >> ms;
    std::cout << "digite os segundos de saida\n ";
    cin >> ss;


    int totalE = convertSeg(he, he, se);
    int totalS = convertSeg(hs, ms, ss);

    cout << " a hora de entrada em segundos é de " << totalE << endl;
    cout << " a hora de saida em segundos é de " << totalS << endl;

    int interv = intervalo(totalS, totalE);

  
}

