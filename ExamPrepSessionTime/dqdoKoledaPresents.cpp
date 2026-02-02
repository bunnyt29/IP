#include <iostream>
#include <cstring>
#include <string>


//const int MAX_SIZE = 10;
//
//bool containsNumber(const char* code, const char* subseq) {
//    return std::strstr(code, subseq) != nullptr;
//}
//
//bool checkIfGirl(const char* code) {
//    int num = std::stoi(code);
//    if (num%2 == 0)
//    {
//        return true;
//    }
//
//    return false;
//}
//
int main() {
//    int girlsCount = 0;
//    int boysCount = 0;
//
//    int n;
//    std::cout << "How many numbers: ";
//    std::cin >> n;
//
//    int b;
//    std::cout << "How many boy presents: ";
//    std::cin >> b;
//
//    int g;
//    std::cout << "How many girl presents: ";
//    std::cin >> g;
//
//    char** codes = new char* [n];
//    std::cin.ignore(1024, '\n'); 
//
//    for (int i = 0; i < n; i++) {
//        codes[i] = new char[5];
//        std::cin >> codes[i];
//    }
//
//    const char* sub1 = "42";
//    const char* sub2 = "81";
//
//    char** goodKids = new char* [n];
//    unsigned goodKidsCounter = 0;
//
//    char** normalKids = new char* [n];
//    unsigned normalKidsCounter = 0;
//
//    for (int i = 0; i < n; i++) {
//        if (containsNumber(codes[i], sub1)) {
//            goodKids[goodKidsCounter++] = codes[i];
//        }
//        else if (containsNumber(codes[i], sub2)) {
//            continue;
//        }
//        else {
//            normalKids[normalKidsCounter++] = codes[i];
//        }
//    }
//
//    for (unsigned i = 0; i < goodKidsCounter; i++) {
//        if (checkIfGirl(goodKids[i]))
//        {
//            std::cout << "Giving one present to a good girl " << goodKids[i] << '\n';
//            girlsCount++;
//        }
//        else {
//            std::cout << "Giving one present to a good boy " << goodKids[i] << '\n';
//            boysCount++;
//        }
//    }
//
//    int girlsPresentsLeft = g - girlsCount;
//    int boysPresentsLeft = b - boysCount;
//
//    do
//    {
//        for (unsigned i = 0; i < normalKidsCounter; i++) {
//            if (checkIfGirl(normalKids[i]))
//            {
//                std::cout << "Giving one present to a normal girl " << normalKids[i] << '\n';
//                girlsPresentsLeft--;
//            }
//        }
//    } while (girlsPresentsLeft > 0);
//
//    while (boysPresentsLeft > 0)
//    {
//        for (unsigned i = 0; i < normalKidsCounter; i++) {
//            if (!checkIfGirl(normalKids[i]))
//            {
//                std::cout << "Giving one present to a normal boy " << normalKids[i] << '\n';
//                girlsPresentsLeft--;
//            }
//        }
//    }
//
//    std::cout << "Present given to girls: " << (g - girlsPresentsLeft) << '\n';
//    std::cout << "Present given to boys: " << (b - boysPresentsLeft);
//
//
	int* a = new int[10];
	++a;
	delete[] a;

	return 0;
}
