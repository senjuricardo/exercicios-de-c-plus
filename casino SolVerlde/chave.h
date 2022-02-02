#pragma once
#include<iostream> 

#include<string> 

using namespace std;



class Chave {

public:

	static void gerarChaveAleatoria(int* ch, int vecsize);

	static void lerChave(int* ch, int vecsize);

	static void imprimirChave(int* ch, int vecsize);
	static void ordenaChave(int* ch, int vecsize);



	static int verifPremio(int* ch1, int* ch2, int vecsize);

};