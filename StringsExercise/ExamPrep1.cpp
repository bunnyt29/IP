//
//#include <iostream>
//#include <cstring>
//#include <cassert>
//#include <cctype>
//#include <string>
//#define _CRT_SECURE_NO_WARNINGS
//
//const int MAX_SIZE = 256;
//
//unsigned int removeVowels(char* word, char* newArr) {
//	char temp[MAX_SIZE];
//	char* start = temp;
//	unsigned int coins = 0;
//
//	while (*word!='\0')
//	{
//		if (*word == 'a' || *word == 'o') {
//			coins++;
//		}
//		else {
//			*start++ = *word;
//		}
//		word++;
//	}
//
//	*start++ = ' ';
//	*start = '\0';
//
//	strcat_s(newArr, MAX_SIZE, temp);
//	return coins;
//}
//
//unsigned int removeNums(char* word, char* newArr) {
//	unsigned int coins = 0;
//
//	while (*word != '\0') {
//		if (isdigit(*word))
//		{
//			while (isdigit(*word)) {
//				coins += (*word - '0');
//				word++;
//			}
//
//			size_t lenght = strlen(newArr);
//			newArr[lenght] = 'X';
//			newArr[lenght + 1] = '\0';
//		}
//		else {
//			size_t lenght = strlen(newArr);
//			newArr[lenght] = *word;
//			newArr[lenght + 1] = '\0';
//			word++;
//		}
//	}
//
//	return coins;
//}
//
//int encriptWord(char* word, char* newArr) {
//	unsigned int coins = 0;
//
//	while (*word != '\0') {
//		if (*word == 'a' || *word == 'o') {
//			coins++;
//			word++;
//			continue;
//		}
//
//		if (isdigit(*word))
//		{
//			while (isdigit(*word)) {
//				coins += (*word - '0');
//				word++;
//			}
//
//			size_t lenght = strlen(newArr);
//			newArr[lenght] = 'X';
//			newArr[lenght + 1] = '\0';
//		}
//		else {
//			size_t lenght = strlen(newArr);
//			newArr[lenght] = *word;
//			newArr[lenght + 1] = '\0';
//			word++;
//		}
//	}
//
//	size_t len = strlen(newArr);
//	newArr[len] = ' ';
//	newArr[len + 1] = '\0';
//
//	return coins;
//}
//int main()
//{
//	char words[MAX_SIZE / 2][MAX_SIZE];
//	char newArr[MAX_SIZE];
//	newArr[0] = '\0';
//	unsigned int wordCount = 0;
//	unsigned int index = 0;
//	char ch = 0;
//
//	while (std::cin.get(ch)) {
//		if (ch == '\n') {
//			break;
//		}
//
//		if (!isalpha(ch) && !isdigit(ch))
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
//	if (index > 0) {
//		words[wordCount][index] = '\0';
//		wordCount++;
//	}
//
//	unsigned int coins = 0;
//	for (size_t i = 0; i < wordCount; i++)
//	{
//		coins += encriptWord(words[i], newArr);
//	}
//
//	std::cout << newArr << "\n";
//	std::cout << coins << "\n";
//}