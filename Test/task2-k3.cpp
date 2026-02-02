//#include <iostream>
//
//char* readWord() {
//	int capacity = 8;
//	int length = 0;
//	char* word = new char[capacity];
//
//	char c;
//	std::cin.get(c);
//
//	do
//	{
//		if ( length+1 > capacity)
//		{
//			capacity *= 2;
//			char* bigger = new char[capacity];
//			for (size_t i = 0; i < length; i++)
//			{
//				bigger[i] = word[i];
//			}
//			delete[] word;
//			word = bigger;
//		}
//		word[length++] = c;
//	} while (std::cin.get(c) && !isspace(c));
//
//	word[length] = '\0';
//	return word;
//}
//
//int main() {
//	int n;
//	std::cin >> n;
//	int m;
//	std::cin >> m;
//	char*** wordMatrix = new char** [n];
//	for (size_t i = 0; i < n; i++)
//	{
//		wordMatrix[i] = new char*[m];
//	}
//
//	for (size_t i = 0; i < n; i++)
//	{
//		for (size_t j = 0; j < m; j++)
//		{
//			wordMatrix[i][j] = readWord();
//		}
//	}
//
//	for (int i = n-1; i >= 0; i--)
//	{
//		for (int j = m-1; j >= 0; j--)
//		{
//			std::cout << wordMatrix[i][j];
//			if (j > 0)
//			{
//				std::cout << ' ';
//			}
//		}
//		std::cout << std::endl;
//	}
//
//
//	//free memory
//	for (size_t i = 0; i < n; i++)
//	{
//		for (size_t j = 0; j < m; j++)
//		{
//			delete[] wordMatrix[i][j];
//		}
//		delete[] wordMatrix[i];
//	}
//	delete[] wordMatrix;
//}