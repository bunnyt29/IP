//#include <iostream>
//#include <cstdlib>
//
//void input(int** matrix, int n, int m) {
//	for (size_t i = 0; i < n; i++)
//	{
//		for (size_t j = 0; j < m; j++)
//		{
//			std::cin >> matrix[i][j];
//		}
//	}
//}
//
//void print(int** matrix, int n, int m) {
//	for (size_t i = 0; i < n; i++)
//	{
//		for (size_t j = 0; j < m; j++)
//		{
//			std::cout << matrix[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//}
//
//
//void multiplyMatrices(int** matrix1, int r1, int c1, int** matrix2, int r2, int c2) {
//	int** resultMatrix = new int*[r1];
//	for (size_t i = 0; i < r1; i++)
//	{
//		resultMatrix[i] = new int[c2];
//	}
//
//	std::cout << "Multiplication of given two matrices is:\n";
//	for (size_t i = 0; i < r1; i++)
//	{
//		for (size_t j = 0; j < c2; j++)
//		{
//			resultMatrix[i][j] = 0;
//			for (size_t k = 0; k < r2; k++)
//			{
//				resultMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
//			}
//
//		}
//	}
//
//	print(resultMatrix, r1, c2);
//
//	for (size_t i = 0; i < r1; i++)
//	{
//		delete[] resultMatrix[i];
//	}
//	delete[] resultMatrix;
//}
//
//int main() {
//	std::cout << "Enter number of rows for m1: ";
//	int n;
//	std::cin >> n;
//
//	std::cout << "Enter number of cols for m1: ";
//	int m;
//	std::cin >> m;
//
//	int** matrix1 = new int* [n];
//
//	for (size_t i = 0; i < n; i++)
//	{
//		matrix1[i] = new int[m];
//	}
//	std::cout << "Enter els of m1: ";
//	input(matrix1, n, m);
//
//
//	std::cout << "Enter number of rows for m2: ";
//	int k;
//	do
//	{
//		std::cin >> k;
//		if (k != m)
//		{
//			std::cout << "The number of columns in Matrix1 must "
//				"be equal to the number of rows in "
//				"Matrix2"
//				<< std::endl;
//		}
//	} while (k!=m);
//
//	std::cout << "Enter number of cols for m2: ";
//	int l;
//	std::cin >> l;
//
//	int** matrix2 = new int* [k];
//
//	for (size_t i = 0; i < k; i++)
//	{
//		matrix2[i] = new int[l];
//	}
//	std::cout << "Enter els of m2: ";
//	input(matrix2, k, l);
//
//	multiplyMatrices(matrix1, n, m, matrix2, k, l);
//
//
//	for (size_t i = 0; i < n; i++)
//	{
//		delete[] matrix1[i];
//	}
//	delete[] matrix1;
//
//	for (size_t i = 0; i < k; i++)
//	{
//		delete[] matrix1[i];
//	}
//	delete[] matrix2;
//}
