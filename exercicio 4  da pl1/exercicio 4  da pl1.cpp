#include <iostream>
#include <Windows.h>
#include <tchar.h>
#include<string>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <vector>
#include <math.h>
using namespace std;


    void calcFR(int a, int b, int c, float* x1, float* x2)
    {
        if  (a == 0 || pow(b, 2) - 4 * a * c < 0) {
            *x1 = 0;
            *x1 = 0;
        }
        else {
            *x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
            *x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
        }
    }




    int main()
    {
        setlocale(LC_ALL, ("portuguese"));
        int a, b, c;
        float raiz1, raiz2, x1, x2;

        cout << "Qual é A?"<< endl;
        cin >> a;

        cout << "Qual é B?" << endl;
        cin >> b;

        cout << "Qual é C?" << endl;
        cin >> c;
       

        calcFR(a, b, c, &raiz1, &raiz2);

        cout << "X1: " << raiz1 << endl;
        cout << "X2: " << raiz2 << endl;
       ;
        return 0;
    }
