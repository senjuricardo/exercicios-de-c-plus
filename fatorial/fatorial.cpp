#include <iostream>
#include <Windows.h>
#include <tchar.h>
#include<string>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <vector>
using namespace std;



int contabilizNegat(int n) {
	int mult = 1;
	for (int i = n; i >= 2; i--) {
		mult = mult * i;
	}
	return mult;
}



int main(void) {
	int n;

	cout << "digite um numero" << endl;
	cin >> n;


	int resultfact = contabilizNegat(n);
	cout << "o fatorial e: " << resultfact;


	return 0;
}