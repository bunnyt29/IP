//
//#include <iostream>
//#include <cstring>
//#include <cassert>
//
//const int MAX_SIZE = 1024;
//
//void swapChars(char& ch1, char& ch2) {
//	char temp = ch1;
//	ch1 = ch2;
//	ch2 = temp;
//}
//
//void sortChars(char* str) {
//	unsigned int wordSize = std::strlen(str);
//
//	for (size_t i = 0; i < wordSize - 1; i++)
//	{
//		for (size_t j = 0; j < wordSize - 1 - i; j++)
//		{
//			if (str[j] > str[j+1])
//			{
//				swapChars(str[j], str[j + 1]);
//				/*char temp = str[j];
//				str[j] = str[j + 1];
//				str[j + 1] = temp;*/
//			}
//		}
//	}
//}
//
//int main()
//{
//	char word[MAX_SIZE];
//	char wordSorted[MAX_SIZE];
//	int wordCount = 0;
//	char c;
//
//	while (std::cin.get(c))
//	{
//		if (c == '\n')
//		{
//			break;
//		}
//		if (isalpha(c)) {
//			word[wordCount++] = c;
//		}
//	}
//
//	word[wordCount++] = '\0';
//
//	sortChars(word);
//	
//	for (size_t i = 0; i < wordCount; i++)
//	{
//		std::cout << word[i];
//	}
//}