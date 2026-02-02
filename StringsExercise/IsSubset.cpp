//
//#include <iostream>
//#include <cstring>
//#include <cassert>
//#include <cctype>
//#include <string>
//
//const int MAX_SIZE = 1024;
//
//bool isSubsequence(char* word, char* sub) {
//	int size1 = strlen(word);
//	int size2 = strlen(sub);
//	int j = 0;
//
//	for (size_t i = 0; i < size1; i++)
//	{
//		if (word[i] == sub[j])
//		{
//			j++;
//		}
//	}
//
//	return (size2 == j);
//}
//
//int main()
//{
//	char src[] = "apple", pattern[] = "apl";
//	std::cout << std::boolalpha << isSubsequence(src, pattern) << "\n";
//	char src1[] = "CGTTCGGCTATCGTACGTTCTATTCTATGATTTCTAA", pattern1[] = "CGTTCGGCTATGCZTTCTACTTATTCTA";
//	std::cout << std::boolalpha << isSubsequence(src1, pattern1) << "\n";
//}