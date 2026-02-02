//
//#include <iostream>
//#include <cstring>
//#include <cassert>
//#include <cctype>
//
//const int MAX_SIZE = 1024;
//const char punct[] = { ',', '.', ' ', '-', '?', '!', '\0' };
//
//bool isPunctoation(char c)
//{
//	for (size_t i = 0; i < strlen(punct); i++)
//	{
//		if (punct[i] == c)
//		{
//			return true;
//		}
//	}
//	return false;
//}
//
//void toUpperCaseToLowerCase(char words[][MAX_SIZE], int wordCount) {
//	for (size_t i = 0; i < wordCount; i++)
//	{
//		unsigned wordSize = strlen(words[i]);
//		for (size_t j = 0; j < wordSize; j++)
//		{
//			if (j == 0)
//			{
//				words[i][j] = std::toupper((unsigned char)words[i][j]);
//			}
//			else {
//				words[i][j] = std::tolower((unsigned char)words[i][j]);
//			}
//		}
//	}
//}
//
//int main()
//{
//	char words[MAX_SIZE / 2][MAX_SIZE];
//	int wordCount = 0;
//	int index = 0;
//	bool prevWasPunctioation = false;
//	char c;
//
//	while (std::cin.get(c))
//	{
//		if (c == '\n')
//		{
//			break;
//		}
//		if (isPunctoation(c))
//		{
//			if (!prevWasPunctioation)
//			{
//				words[wordCount][index++] = c;
//				words[wordCount][index++] = '\0';
//				wordCount++;
//				index = 0;
//				prevWasPunctioation = true;
//			}
//		}
//		else {
//			words[wordCount][index++] = c;
//			prevWasPunctioation = false;
//		}
//	}
//
//	toUpperCaseToLowerCase(words, wordCount);
//
//	for (size_t i = 0; i < wordCount; i++)
//	{
//		if (i) std::cout << ' ';
//		std::cout << words[i];
//	}
//}