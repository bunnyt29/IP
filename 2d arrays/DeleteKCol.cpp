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
//void removeElement(int *&arr, int n, int m, int k) {
//	int* newArr = new int[m - 1];
//	for (size_t i = 0; i < k; i++)
//	{
//		newArr[i] = arr[i];
//	}
//	for (size_t i = k; i < m - 1; i++)
//	{
//		newArr[i] = arr[i + 1];
//	}
//	delete[] arr;
//	arr = newArr;
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
//void deleteCol(int** matrix,int n, int &m, int k) {
//	for (size_t i = 0; i < n; i++)
//	{
//		removeElement(matrix[i], n, m, k);
//	}
//	m--;
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
//	} while (k > m);
//
//	deleteCol(matrix, n, m, k);
//	print(matrix, n, m);
//
//	for (size_t i = 0; i < n - 1; i++)
//	{
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
