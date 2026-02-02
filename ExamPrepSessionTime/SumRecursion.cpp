//#include <iostream>
//
//bool isPrime(int n) {
//	if (n < 2)
//	{
//		return false;
//	}
//	else {
//		for (size_t i = 2; i*i <= n; i++)
//		{
//			if (n%i == 0)
//			{
//				return false;
//			}
//
//		}
//		return true;
//	}
//}
//
//int recursiveSum(int* seq, int size, int replacement) {
//	if (size == 0)
//	{
//		return 0;
//	}
//
//	if (isPrime(seq[size - 1]))
//	{
//		return seq[size - 1] + recursiveSum(seq, size - 1, replacement);
//	}
//	else {
//		return replacement + recursiveSum(seq, size - 1, replacement);
//
//	}
//}
//
//int main() {
//	int sequence[] = { 12, 7, 5, 8, 4, 20, 10 };
//	int size = sizeof(sequence)/sizeof(sequence[1]);
//	int replacement = 1;
//
//	std::cout << recursiveSum(sequence, size, replacement);
//
//	return 0;
//}