//#include <iostream>
//#include <cstdlib>
//
//void input(int** matrix, int n) {
//	for (size_t i = 0; i < n; i++)
//	{
//		for (size_t j = 0; j < n; j++)
//		{
//			std::cin >> matrix[i][j];
//		}
//	}
//}
//
//int maxRow(int** matrix, int n) {
//	int max = INT_MIN;
//	int sum = 0;
//	int maxRowIndex = 0;
//
//	for (size_t i = 0; i < n; i++)
//	{
//		for (size_t j = 0; j < n; j++)
//		{
//			sum += matrix[i][j];
//		}
//		if (sum > max)
//		{
//			max = sum;
//			maxRowIndex = i;
//		}
//	}
//
//	return maxRowIndex;
//}
//
//int maxCol(int** matrix, int n) {
//	int max = INT_MIN;
//	int sum = 0;
//	int maxColIndex = 0;
//
//	for (size_t i = 0; i < n; i++)
//	{
//		for (size_t j = 0; j < n; j++)
//		{
//			sum += matrix[j][i];
//		}
//		if (sum > max)
//		{
//			max = sum;
//			maxColIndex = i;
//		}
//	}
//
//	return maxColIndex;
//}
//
//int main() {
//	int n;
//	std::cin >> n;
//	int** matrix = new int* [n];
//	int maxRowIndex = 0;
//	int maxColIndex = 0;
//
//	for (size_t i = 0; i < n; i++)
//	{
//		matrix[i] = new int[n];
//	}
//
//	input(matrix, n);
//	maxRowIndex = maxRow(matrix, n);
//	maxColIndex = maxCol(matrix, n);
//
//	std::cout << maxRowIndex << std::endl;
//	std::cout << maxColIndex << std::endl;
//
//	for (size_t i = 0; i < n; i++)
//	{
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
