#pragma once
#include<iostream> 
#include<math.h>
#include<string> 
#include <stdio.h>

using namespace std;


class Circulo{
private: 
	static double calcArea(double raio);
	static double calcDist(double x2, double x1, double y2, double y1);
	static double calcCircun();

public:

	static string imprimirDistac(double x2, double x1, double y2, double y1);

	static double somaCircun();
	
	static string areaMaior(double raio1,double raio2);
};
