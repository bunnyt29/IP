//#include <iostream>
//
//int main()
//{
//	unsigned x;
//	std::cin >> x;
//
//	unsigned y;
//	std::cin >> y;
//	for (int i = 0; i < y; i++) {
//
//		for (int j = 0; j < x; j++) {
//			std::cout << '*' << ' ';
//		}
//
//		std::cout << '\n';
//	}
//}



//frame

//#include <iostream>
//
//int main()
//{
//	unsigned x;
//	std::cin >> x;
//
//	unsigned y;
//	std::cin >> y;
//	for (int i = 0; i < y; i++) {
//
//		if (i == 0 || i == y - 1)
//		{
//			for (int j = 0; j < x; j++) {
//				std::cout << '*';
//			}
//
//		}
//		else {
//			for (int j = 0; j < x; j++) {
//				if (j == 0 || j == x - 1) {
//					std::cout << '*';
//				}
//				else {
//					std::cout << ' ';
//				}
//			}
//		}
//		std::cout << '\n';
//	}
//}