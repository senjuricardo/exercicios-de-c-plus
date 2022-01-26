// soma de matrizes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main()
{

	int mat[3][3]{ 1,2,3,4,5,6,7,8,9 };
	int mat2[3][3]{ 1,2,3,4,5,6,7,8,9 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			mat2[i][j] = mat[i][j] + mat2[i][j];
			cout <<  " "<< mat2[i][j]<< " " ;
		}cout << endl;
		
	}
	cout << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			mat2[i][j] = mat[i][j] * mat2[i][j];
			cout << " " << mat2[i][j] << " ";
		}cout << endl;

	}

}
