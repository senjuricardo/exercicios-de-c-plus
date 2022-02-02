#pragma once
#include<iostream> 
#include "pessoa.h"

#include<string> 

using namespace std;

class Agenda {

   Pessoa Povo[10];

private: 

    int inc = 0;

public:



    void armazenaPessoa(string nome, int idade, float altura);

    int buscaPessoa(string nome); // informa em que posição da agenda está a pessoa 

    void imprimePovo(); // imprime todos os dados de todas as pessoas da agenda 

    void imprimePessoa(int i); // imprime os dados da pessoa que está na posição 'i' da agenda 

};
