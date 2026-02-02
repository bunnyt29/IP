//#include <iostream>
//
//const int MAX_SIZE = 512;
//
//int main() {
//	char words[MAX_SIZE / 2][MAX_SIZE];
//	int wordCount = 0;
//	int index = 0;
//	char ch;
//
//	while (std::cin.get(ch))
//	{
//		if (ch == '\n')
//		{
//			break;
//		}
//
//		if (!isalpha(ch))
//		{
//			words[wordCount][index] = '\0';
//			wordCount++;
//			index = 0;
//		}
//		else {
//			words[wordCount][index] = ch;
//			index++;
//		}
//	}
//
//	if (index > 0)
//	{
//		words[wordCount][index] = '\0';
//		wordCount++;
//		index = 0;
//	}
//
//	for (size_t i = 0; i < wordCount; i++)
//	{
//		std::cout << words[i] << std::endl;
//	}
//	std::cout << wordCount;
//	return 0;
//}