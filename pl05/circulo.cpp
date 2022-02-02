#include "circulo.h"
#include <stdio.h>
#include <iostream>
#include<math.h>
#include<cstdlib>

using namespace std;

double Circulo::calcArea(double raio) {

	double area = 3.14159 * raio * raio;

	return area;
}

double Circulo::calcDist(double x2, double x1, double y2, double y1) {
	int catx = 0;
	int caty = 0;
	double h = 0;

	catx = abs(x2 - x1);
	caty = abs(y2 - y1);

	h = double(sqrt(pow(catx, 2) + pow(caty, 2)));
	return h;
}

double Circulo::calcCircun() {
	double circunf = 2 *3.14159 * 5;

	return circunf;	
}

//publicos

string Circulo::imprimirDistac(double x2, double x1, double y2, double y1) {

	double valor = Circulo::calcDist(x2, x1, y2, y1);

		return " a distancia entre os 2 pontos e de: " + to_string(valor);
}

double Circulo::somaCircun() {
	double soma = 0;

	soma = calcCircun() + calcCircun();
	
	return soma;
}

string Circulo::areaMaior(double raio1, double raio2) {
	
	Circulo::calcArea(raio1);
	Circulo::calcArea(raio2);
	int result;
	if (Circulo::calcArea(raio1) > Circulo::calcArea(raio2)) {
		result= 1;
	}
	else {
		result=  2;
	}


	return "a maior area e a do circulo: " + to_string(result);

}