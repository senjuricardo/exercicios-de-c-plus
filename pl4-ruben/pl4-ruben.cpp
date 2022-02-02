// pl4-ruben.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 

#include "pessoa.h" 





int main() {

    char linha[] = "------------------------------------------------\n";

    Pessoa p0;
    p0.setIdade(18);
    p0.setAltura(1.55);
    cout << p0.toString() << endl;
    p0.setNome("Maria");
    cout << p0.toString() << endl;




    

    cout << linha;

    string nome = "Manuel";
    int idade = 30;
    double altura = 1.75;
    Pessoa p1(nome, idade, altura);
    cout << p1.toString();


    cout << linha;

    
   nome = "Manuel";
    idade = 300;
    altura = 1.80;
    Pessoa p2(nome, idade, altura);
    cout << p2.toString();



    return 0;

}