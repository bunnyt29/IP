//// ExamPrepSessionTime.cpp : This file contains the 'main' function. Program execution begins and ends there.
////
//
//#include <iostream>
//
//
////Задача 2. (1.25 т.) Да се напише функция, която приема низ с максимална дължина 64 символа и връща
////дължината и указател към най - дългия палиндром, съдържащ се в него.Ако има два палиндрома с еднаква
////дължина, да се върне указател към първия.Ако такъв не съществува, функцията връща nullptr.
////* Палиндром е низ, който се чете еднакво от ляво надясно и от дясно наляво.
//
//const char* longestPalindrome(const char* str, int& len) {
//
//	int maxLen = 0;
//	int n = strlen(str);
//	const char* result = nullptr;
//
//	//за нечетен палиндром
//	for (int center = 0; center < n; center++)
//	{
//		int left = center;
//		int right = center;
//
//		while (left >=0 && right<n && str[left]==str[right])
//		{
//			len = right - left + 1;
//			if (len > maxLen)
//			{
//				maxLen = len;
//				result = str + left;
//			}
//			left--;
//			right++;
//		}
//	}
//
//	//за четни
//	for (int center = 0; center < n - 1; center++)
//	{
//		int left = center;
//		int right = center + 1;
//
//		while (left >= 0 && right < n && str[left] == str[right])
//		{
//			len = right - left + 1;
//			if (len > maxLen)
//			{
//				maxLen = len;
//				result = str + left;
//			}
//			left--;
//			right++;
//		}
//	}
//
//	if (maxLen < 2)
//	{
//		return nullptr;
//	}
//
//	len = maxLen;
//	return result;
//}
//int main()
//{
//	const char* str = "gbabad";
//	int len = 0;
//
//	const char* p = longestPalindrome(str, len);
//	if (p)
//	{
//		for (size_t i = 0; i < len; i++)
//		{
//			std::cout << p[i];
//		}
//		std::cout << ",lenght " << len << std::endl;
//	}
//}
//
