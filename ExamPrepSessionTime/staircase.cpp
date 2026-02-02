//#include <iostream>
////Ванката има S стълбища в своя дом, които обича да изкачва през 1, 2 или 3 стъпала.
//// Понеже е много любознателен и не обича да му е скучно, той се чуди по колко различни начина 
//// може да изкачи всяко стълбище.Да се напише програма, кояго пресмята възможните начини.
////На първия ред от стандартния вход се задава S - броя стълбища.Всеки от следващите S реда съдържа число N - броя стълби на всяко стълбище.
//
//
//int staircase(int numberOfStaris) {
//	if (numberOfStaris == 0)
//	{
//		return 1;
//	}
//
//	if (numberOfStaris < 0)
//	{
//		return 0;
//	}
//
//	return staircase(numberOfStaris - 1) + staircase(numberOfStaris - 2) + staircase(numberOfStaris - 3);
//}
//int main() {
//	int s;
//	std::cin >> s;
//
//	for (size_t i = 1; i <= s; i++)
//	{
//		int numberOfStairs;
//		std::cin >> numberOfStairs;
//		std::cout << (staircase(numberOfStairs)) << std::endl;
//	}
//}