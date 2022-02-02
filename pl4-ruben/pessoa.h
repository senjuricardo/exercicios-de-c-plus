#pragma once
#include<iostream> 

#include<string> 
using namespace std;

class Pessoa {
private: string nome;
	   int idade;
	   double altura;

public:
	Pessoa(string n, int i, double alt);
	Pessoa();

	Pessoa(const Pessoa& p);


	void setNome(string n);
	string getNome();

	bool setIdade(int i);
	int getIdade();
	

	void setAltura(double alt);
	double getAltura();

	string toString();



};