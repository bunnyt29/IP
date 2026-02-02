//#include <iostream>
//#include <cstdlib>
//
//bool contains(int n, int k) {
//    if (k < 0 || k > 9) return false;
//    n = std::abs(n);
//
//    if (n == 0) return k == 0;
//
//    while (n > 0) {
//        if (n % 10 == k) return true;
//        n /= 10;
//    }
//    return false;
//}
//
//long long product(int** matrix, int n) {
//    long long prod = 1;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (contains(matrix[i][j], 1) && i > n - 1 - j) {
//                prod *= matrix[i][j];
//            }
//        }
//    }
//    return prod;
//}
//
//int main() {
//    int n;
//    std::cin >> n;
//
//    int** matrix = new int* [n];
//    for (int i = 0; i < n; i++) matrix[i] = new int[n];
//
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            std::cin >> matrix[i][j];
//
//    std::cout << product(matrix, n);
//
//    for (int i = 0; i < n; i++) delete[] matrix[i];
//    delete[] matrix;
//}
