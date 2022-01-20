// igyhig.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <tchar.h>
#include <string>
#include <chrono>
#include <thread>



using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
using std::chrono::system_clock;



int main()
{
	setlocale(LC_ALL, ("portuguese"));



	int n;
	int maior = 0, menor = 0;



	cout << "Digite Numero de posicoes: " << endl;
	cin >> n;



	int* vec = new int[n];



	for (int i = 0; i < n; i++) {



		cout << "Digite numero! " << endl;
		cin >> vec[i];



		if (vec[i] <= 0) {
			cout << "Insira apenas numeros positivos!";
		}
		sleep_for(10ns);
		sleep_until(system_clock::now() + 3s);



		system("cls");
	}



	for (int j = 0; j < n; j++) {



		maior = vec[j];
		cout << "O maior é: " << vec[j] << endl;
	}
	return 0;
}