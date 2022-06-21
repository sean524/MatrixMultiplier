#ifndef MATRICES_H
#define MATRICES_H

class Matrices {
private:
	int dimensions;
	double** matrix;
public:
	Matrices(int);

	class Proxy {
	public:
		Proxy(double* arr) : arr(arr) { }

		double operator[](int i) {
			return arr[i];
		}
	private:
		double* arr;
	};
	Proxy operator[](int i) {
		return Proxy(matrix[i]);
	}

	void build();
	void display();
	void multiplyMatricies(Matrices, Matrices);
};

#endif
