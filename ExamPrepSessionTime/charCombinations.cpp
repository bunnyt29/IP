//#include <iostream>
//#include <cstring>
//
//const unsigned int MAX_SIZE = 10;
//
//bool hasDuplicates(const char* str) {
//    int len = strlen(str);
//    for (int i = 0; i < len; i++)
//        for (int j = i + 1; j < len; j++)
//            if (str[i] == str[j]) return true;
//    return false;
//}
//
//void genCombinations(const char* str, int n, char* comb, int pos, int k, int startIndex) {
//    if (pos == k) {
//        comb[k] = '\0';
//        std::cout << comb << "\n";
//        return;
//    }
//
//    for (int i = startIndex; i <= n - (k - pos); i++) {
//        comb[pos] = str[i];
//        genCombinations(str, n, comb, pos + 1, k, i + 1);
//    }
//}
//
//int main() {
//    char* str = new char[MAX_SIZE + 1];
//
//    do {
//        std::cout << "Enter string (max 10 chars, no duplicates): ";
//        std::cin.getline(str, MAX_SIZE + 1);
//
//        if (hasDuplicates(str)) {
//            std::cout << "Error: duplicate characters detected. Try again.\n";
//        }
//    } while (hasDuplicates(str));
//
//    int n = strlen(str);
//
//    int k;
//    std::cin >> k;
//
//    if (k < 0 || k > n) {
//        std::cout << "Invalid k\n";
//        delete[] str;
//        return 0;
//    }
//
//    char* comb = new char[k + 1];
//    genCombinations(str, n, comb, 0, k, 0);
//
//    delete[] comb;
//    delete[] str;
//    return 0;
//}
