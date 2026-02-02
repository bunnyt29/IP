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
//void copyArray(int* arr1, int* arr2, int m) {
//	for (size_t i = 0; i < m; i++)
//	{
//		arr1[i] = arr2[i];
//	}
//}
//
//void deleteRow(int** matrix, unsigned int n, unsigned int m, unsigned int k) {
//	for (size_t i = k; i < n - 1; i++)
//	{
//		copyArray(matrix[i], matrix[i + 1], m);
//	}
//	delete[] matrix[n - 1];
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
//int main() {
//	int n;
//	do {
//		std::cin >> n;
//	} while (n > 16 || n < 0);
//
//	int m;
//	do {
//		std::cin >> m;
//	} while (m > 32 || m < 0);
//	int** matrix = new int* [n];
//
//	for (size_t i = 0; i < n; i++)
//	{
//		matrix[i] = new int[m];
//	}
//	input(matrix, n, m);
//
//	unsigned int k;
//	do {
//		std::cin >> k;
//	} while (k > n);
//
//	deleteRow(matrix, n, m, k-1);
//
//	print(matrix, n-1, m);
//
//	for (size_t i = 0; i < n-1; i++)
//	{
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
