//// Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
////
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//const int MAX_NUMBER = 10;
//const int BASE = 31;
//
//void inputShipment(char*& shipment) {
//	int n;
//	std::cin >> n;
//
//	shipment = new char[n + 1 + MAX_NUMBER + 1];
//	std::cin.ignore();
//	std::cin.getline(shipment, n + 1);
//}
//
//int generateCode(const char* shipment) {
//	int code = 0;
//	int current = 0;
//	int counter = 0;
//	int size = strlen(shipment) + 1;
//
//	while (size--) {
//		if (*shipment == ' ' || !*shipment)
//		{
//			code = code + current * pow(BASE, counter);
//			current = 0;
//			counter++;
//		}
//		else {
//			current += *shipment;
//		}
//		shipment++;
//	}
//	return code;
//}
//
//int reverse(int n) {
//	int reverse = 0;
//	while (n) {
//		reverse = reverse*10 + n % 10;
//		n /= 10;
//	}
//	return reverse;
//}
//
//void packingShipment(char* shipment) {
//	int code = generateCode(shipment);
//	code = reverse(code);
//	int shipmentIndex = strlen(shipment);
//	shipment[shipmentIndex++] = ' ';
//
//	if (code == 0)
//	{
//		shipment[shipmentIndex++] = '0';
//	}
//	else {
//		while (code) {
//			shipment[shipmentIndex++] = code % 10 + '0';
//			code /= 10;
//		}
//	}
//	shipment[shipmentIndex] = '\0';
//}
//
//int stoi(char* start) {
//	int result = 0;
//	while (isdigit(*start))
//	{
//		result = result * 10 + (*start - '0');
//		start++;
//	}
//
//	return result;
//}
//
//bool inspectShipment(const char*shipment) {
//	int size = strlen(shipment);
//	char* copy = new char[size + 1];
//	strcpy(copy, shipment);
//
//	char* end = copy + size - 1;
//	while (isdigit(*end)) {
//		end--;
//	}
//
//	*end = '\0';
//	int code = generateCode(copy);
//	*end = ' ';
//
//	int expected = stoi(end+1);
//
//	delete[] copy;
//	return code == expected;
//}
//
//int main() {
//	char* shipment = nullptr;
//	inputShipment(shipment);
//	packingShipment(shipment);
//	std::cout << std::boolalpha << inspectShipment(shipment);
//}
