//#include <iostream>
//
//
//void genWordsFixedLen(char* alphabet, int k, char* word, int pos, int n) {
//	if (pos == n)
//	{
//		word[n] = '\0';
//		std::cout << word << '\n';
//		return;
//	}
//	for (size_t i = 0; i < k; i++)
//	{
//		word[pos] = alphabet[i];
//		genWordsFixedLen(alphabet, k, word, pos + 1, n);
//	}
//}
//
//int main() {
//	char alphabet[] = { 'a', 'b', 'c' };
//	int k = sizeof(alphabet) / sizeof(alphabet[0]);
//
//	int m;
//	std::cin >> m;
//
//	for (size_t i = 1; i < m; i++)
//	{
//		char* word = new char[i + 1];
//		genWordsFixedLen(alphabet, k, word, 0, i);
//		delete[] word;
//	}
//
//	return 0;
//}