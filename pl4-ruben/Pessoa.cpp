#include "pessoa.h"
#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;

Pessoa::Pessoa(string n, int i, double alt){
	this->nome = n; 
	if (!setIdade(i))
		this->idade = 21;

	this->altura = alt;
	}

Pessoa::Pessoa(){
	this->nome = "NN"; this->idade = 18;
}

Pessoa::Pessoa(const Pessoa &  p ) {
	this->nome = p.nome;
	this->idade = p.idade;
	this->altura = p.altura;

}


void Pessoa::setNome(string n) {
	this->nome = n;
}

string Pessoa::getNome() {
	return nome;
}


int Pessoa::getIdade() {
	return idade;
}

bool Pessoa::setIdade(int i) {
	if (i > 0 && i < 150) {
		this->idade = i;
		return true;
	}
	return false;

}

void Pessoa::setAltura(double alt) {
	this->altura = alt;
}

double Pessoa::getAltura() {
	return altura;
}

string Pessoa::toString() {
	return "O / a " + this->nome + " tem  " +
		to_string(this->idade) + " anos, e a altura de " + to_string(this->altura);
}





