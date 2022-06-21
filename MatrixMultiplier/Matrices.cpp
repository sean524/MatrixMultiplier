#include <iostream>
#include "Matrices.h"

using namespace std;

Matrices::Matrices(int d) {
	dimensions = d;

	matrix = new double* [d];
	for (int i = 0; i < d; i++)
		matrix[i] = new double[d];
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++)
			matrix[i][j] = 0;
	}
}
void Matrices::build() {
	double weight;
	for (int i = 0; i < dimensions; i++) {
		for (int j = 0; j < dimensions; j++) {
			cout << "[" << i + 1 << "][" << j + 1 << "]: ";		//"[i][j]: "
			cin >> weight;
			matrix[i][j] = weight;
		}
	}
}
void Matrices::display() {
	for (int i = 0; i < dimensions; i++) {
		for (int j = 0; j < dimensions; j++) {
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}
void Matrices::multiplyMatricies(Matrices M1, Matrices M2) {
	for (int i = 0; i < dimensions; i++) {
		for (int j = 0; j < dimensions; j++) {
			for (int k = 0; k < dimensions; k++) {
				matrix[i][j] += M1[i][k] * M2[k][j];
			}
		}
	}
}