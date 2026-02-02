//#include <iostream>
////Даден е лабиринт с M реда и N колони, където с 0 са означени проходимите клетки, а с 1 - блокираните.Да се изведе кой да е път от стартовата точка(sty, stx) до финалната(fny, fnx).
////
////Вход:
////
////На 1 - вия ред на стандартния вход се въвеждат M и N.Следват M реда с по N елемента - самия лабиринт.Следват 2 реда, съдържащи стартовата позиция(sty, stx) и финалната позиция(fny, fnx).
////
////Изход :
////
////	На 1 - вия ред от стандартния изход да се изведе дължината pathLen на намерения път.Следват pathLen на брой реда, съдържащи(в правилен ред) координатите на клетките от пътя.
////
////	Забележка : Не е необходимо да е най - късия път.
//
//unsigned WALL = 1; unsigned EMPTY = 0;
//
//bool findPath(char** lab, size_t rows, size_t cols, size_t currentRow, size_t currentCol,
//	size_t endingRow, size_t endingCol, unsigned& pathLen, size_t* pathRow, size_t* pathCol) {
//
//	if (currentRow == endingRow && currentCol == endingCol)
//	{
//		pathRow[pathLen + 1] = currentRow;
//		pathCol[pathLen + 1] = currentCol;
//		pathLen++;
//		return true;
//	}
//
//	if (lab[currentRow][currentCol] == '1')
//	{	
//		return false;
//	}
//
//	lab[currentRow][currentCol] = '1';
//
//	//up
//	if (currentRow > 0 && findPath(lab, rows, cols, currentRow - 1, currentCol, endingRow, endingCol, pathLen, pathRow, pathCol))
//	{
//		pathRow[pathLen] = currentRow;
//		pathCol[pathLen] = currentCol;
//		pathLen++;
//		return true;
//	}
//
//	//down
//	if (currentRow < rows - 1 && findPath(lab, rows, cols, currentRow + 1, currentCol, endingRow, endingCol, pathLen, pathRow, pathCol))
//	{
//		pathRow[pathLen] = currentRow;
//		pathCol[pathLen] = currentCol;
//		pathLen++;
//		return true;
//	}
//
//	//right
//	if (currentCol < cols - 1 && findPath(lab, rows, cols, currentRow, currentCol + 1, endingRow, endingCol, pathLen, pathRow, pathCol))
//	{
//		pathRow[pathLen] = currentRow;
//		pathCol[pathLen] = currentCol;
//		pathLen++;
//		return true;
//	}
//
//	//left
//	if (currentCol > 0 && findPath(lab, rows, cols, currentRow, currentCol - 1, endingRow, endingCol, pathLen, pathRow, pathCol))
//	{
//		pathRow[pathLen] = currentRow;
//		pathCol[pathLen] = currentCol;
//		pathLen++;
//		return true;
//	}
//
//	lab[currentRow][currentCol] = '0';
//
//	return false;
//}
//
//int main() {
//	int m, n;
//	std::cin >> m >> n;
//
//	unsigned pathLen = 0;
//
//	char** lab = new char* [m];
//	for (size_t i = 0; i < m; i++)
//	{
//		lab[i] = new char[n];
//		for (size_t j = 0; j < n; j++)
//		{
//			std::cin >> lab[i][j];
//		}
//	}
//
//	size_t startRow;
//	size_t startCol;
//	std::cin >> startRow;
//	std::cin >> startCol;
//
//	size_t endRow;
//	size_t endCol;
//	std::cin >> endRow;
//	std::cin >> endCol;
//
//	size_t* pathRow = new size_t[m * n];
//	size_t* pathCol = new size_t[m * n];
//
//	findPath(lab, m, n, startRow, startCol, endRow, endCol, pathLen, pathRow, pathCol);
//	std::cout << " ";
//	std::cout << pathLen << std::endl;
//
//	for (int i = pathLen - 2; i >= 0; i--)
//	{
//		std::cout << pathRow[i] << " " << pathCol[i] << std::endl;
//	}
//
//	for (size_t i = 0; i < m; i++)
//	{
//		delete[] lab[i];
//	}
//	delete[] lab;
//}