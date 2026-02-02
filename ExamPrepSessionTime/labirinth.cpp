//#include <iostream>
//
//char EMPTY = '.'; char WALL = '-';
//
//bool findPath(char** labyrinth, size_t rows, size_t cols,
//	size_t currentRow, size_t currentCol, size_t endingRow, size_t endingCol) {
//	if (currentRow == endingRow && currentCol == endingCol) {
//		return true;
//	}
//
//	if (labyrinth[currentRow][currentCol] == WALL)
//	{
//		return false;
//	}
//
//	labyrinth[currentRow][currentCol] = WALL;
//
//	//up
//	if (currentRow>1 && findPath(labyrinth, rows, cols, currentRow - 1, currentCol, endingRow, endingCol))
//	{
//		return true;
//	}
//
//	//down
//	if (currentRow < rows - 1 && findPath(labyrinth, rows, cols, currentRow + 1, currentCol, endingRow, endingCol))
//	{
//		return true;
//	}
//
//	//left
//	if (currentCol > 0 && findPath(labyrinth, rows, cols, currentRow, currentCol - 1, endingRow, endingCol))
//	{
//		return true;
//	}
//
//	//right
//	if (currentCol < cols - 1 && findPath(labyrinth, rows, cols, currentRow, currentCol + 1, endingRow, endingCol))
//	{
//		return true;
//	}
//
//	labyrinth[currentRow][currentCol] = EMPTY;
//	return false;
//}
//
//int main() {
//	int n, m;
//	std::cin >> n >> m;
//
//	char** lab = new char* [n];
//	for (size_t i = 0; i < n; i++)
//	{
//		lab[i] = new char[m];
//		for (size_t j = 0; j < m; j++)
//		{
//			std::cin >> lab[i][j];
//		}
//	}
//
//	std::cout << (findPath(lab, n, m, 0, 0, n - 1, m - 1) ? "Yes" : "No") << std::endl;
//
//	for (size_t i = 0; i < n; i++)
//	{
//		delete[] lab[i];
//	}
//	delete[] lab;
//
//	return 0;
//}