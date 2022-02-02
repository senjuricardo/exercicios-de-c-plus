#include "Vectores.h"

int main() {
	int n = 10;
	int* vec = new int[n];
	Vectores::lerVector(n, vec);
	cout << Vectores::mediaVector(n, vec) << endl;
	Vectores::mostrarVector(n, vec);
	return 0;
}
