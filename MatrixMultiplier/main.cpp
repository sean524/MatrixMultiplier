#include <iostream>
#include "Matrices.h"

using namespace std;

int main() {
	int dimensions;

	cout << "This program will multiply two matricies of dimensions 2^n for you."
		<< "\nExamples: 1, 2, 4, 8, 16, etc...\nDimensions: ";
	cin >> dimensions;

	Matrices M1(dimensions), M2(dimensions), M3(dimensions);
	cout << "Matrix 1: \n";
	M1.build();
	cout << endl;
	M1.display();
	cout << "\nMatrix 2: \n";
	M2.build();
	cout << endl;
	M2.display();
	cout << endl;

	cout << "Matrix 1 * Matrix 2: \n\n";
	M3.multiplyMatricies(M1, M2);
	M3.display();
	cout << endl;

	system("PAUSE");
	return 0;
}