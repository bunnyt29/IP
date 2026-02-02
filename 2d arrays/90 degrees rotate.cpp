#include <iostream>
#include <cstdlib>

void input(int** matrix, int n, int m) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
}

void print(int** matrix, int n, int m) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void transpose(int** matrix, int n, int m) {
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = i+1; j < m; j++)
		{
			int temp = matrix[j][i];
			matrix[j][i] = matrix[i][j];
			matrix[i][j] = temp;
		}
	}
}

void reflect(int** matrix, int n, int m) {
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m/2; j++)
		{
			int temp = matrix[i][j];
			matrix[i][j] = matrix[i][m - 1 - j];
			matrix[i][m - 1 - j] = temp;
		}
	}
}

void rotate(int** matrix, int n, int m) {
	transpose(matrix, n, m);
	reflect(matrix, n, m);
}

int main() {
	std::cout << "Enter number of rows for m1: ";
	int n;
	std::cin >> n;

	std::cout << "Enter number of cols for m1: ";
	int m;
	std::cin >> m;

	int** matrix1 = new int* [n];

	for (int i = 0; i < n; i++)
	{
		matrix1[i] = new int[m];
	}
	std::cout << "Enter els of m1: ";
	input(matrix1, n, m);

	rotate(matrix1, n, m);

	print(matrix1, n, m);

	for (int i = 0; i < n; i++)
	{
		delete[] matrix1[i];
	}
	delete[] matrix1;
}