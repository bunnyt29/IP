//
//#include <iostream>
//#include <cstring>
//#include <cassert>
//#include <cctype>
//
//const int MAX_SIZE = 1024;
//const int MAX_ASCI = 256;
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
//int input(char sentance[][MAX_SIZE]) {
//	int wordCount = 0;
//	int index = 0;
//	bool prevWasPunctioation = false;
//	char c;
//
//	while (std::cin.get(c)) {
//		if (c == '\n')
//		{
//			break;
//		}
//		if (isPunctoation(c))
//		{
//			if (!prevWasPunctioation)
//			{
//				//sentance[wordCount][index++] = c; //чупи сравнението на думи с еднакви повторения
//				sentance[wordCount][index++] = '\0';
//				wordCount++;
//				index = 0;
//				prevWasPunctioation = true;
//			}
//		}
//		else {
//			sentance[wordCount][index++] = c;
//			prevWasPunctioation = false;
//		}
//	}
//
//	if (!prevWasPunctioation) { 
//		sentance[wordCount][index] = '\0';
//		wordCount++;
//	}
//
//	return  wordCount;
//}
//
//unsigned int findMaxRepetedLettersInWord(const char* word) {
//	int symbols[MAX_ASCI] = { 0 };
//	int best = 0;
//	int repetedLeters = 0;
//	for (size_t i = 0; word[i] != '\0'; i++)
//	{
//		unsigned char ch = (unsigned int)word[i];
//		//ch = (unsigned char)std::tolower(ch);
//
//		if (ch) {
//			symbols[ch]++;
//			if (symbols[ch] > best) {
//				best = symbols[ch];
//			}
//		}
//	}
//
//	int countRepeatedTypes = 0;
//	for (int i = 0; i < MAX_ASCI; i++) {
//		if (symbols[i] >= 2) {
//			countRepeatedTypes++;
//		}
//	}
//
//	return countRepeatedTypes;
//}
//
//int main()
//{
//	char words[MAX_SIZE / 2][MAX_SIZE];
//	int wordCount = input(words);
//
//	int bestWordIndex = -1;
//	int bestRepeat = 0;
//
//	for (size_t i = 0; i < wordCount; i++)
//	{
//		int r = findMaxRepetedLettersInWord(words[i]);
//		if (r >= bestRepeat)
//		{
//			bestRepeat = r;
//			bestWordIndex = i;
//		}
//	}
//
//	if (bestWordIndex != -1)
//	{
//		std::cout << words[bestWordIndex];
//	}
//}