//#include <iostream>
//#include <cstdlib>
//
//void input(int** matrix, int n, int m) {
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			std::cin >> matrix[i][j];
//		}
//	}
//}
//
//void print(int** matrix, int n, int m) {
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			std::cout << matrix[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//}
//
//void spiralOrder(int** matrix, int row, int col) {
//	int count = 0;
//	int total = row * col;
//
//	int startingRow = 0;
//	int startingCol = 0;
//	int endingRow = row - 1;
//	int endingCol = col - 1;
//
//
//	while (count < total) {
//	
//		//printing first row
//		for (int i = startingCol; count<total&&i <=endingCol; i++)
//		{
//			std::cout << matrix[startingRow][i];
//			count++;
//		}
//		startingRow++;
//
//		//printing ending col
//		for (int i = startingRow; count < total && i <= endingRow; i++)
//		{
//			std::cout << matrix[i][endingCol];
//			count++;
//		}
//		endingCol--;
//
//		//printing ending row
//		for (int i = endingCol; count < total && i >= startingCol; i--)
//		{
//			std::cout << matrix[endingRow][i];
//			count++;
//		}
//		endingRow--;
//
//		//printing starting col
//		for (int i = endingRow;count < total && i >= startingRow; i--)
//		{
//			std::cout << matrix[i][startingCol];
//			count++;
//		}
//		startingCol++;
//	}
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
//	for (int i = 0; i < n; i++)
//	{
//		matrix1[i] = new int[m];
//	}
//	std::cout << "Enter els of m1: ";
//	input(matrix1, n, m);
//
//	spiralOrder(matrix1, n, m);
//
//	for (int i = 0; i < n; i++)
//	{
//		delete[] matrix1[i];
//	}
//	delete[] matrix1;
//}