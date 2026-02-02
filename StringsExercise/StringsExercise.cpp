//
//#include <iostream>
//#include <cstring>
//#include <cassert>
//
//const size_t SIZE = 100;
//const size_t HISTOGRAM_SIZE = 26;
//const size_t MAX_ASCI = 256;
//
//unsigned int copyOfStrlen(char* str) {
//	unsigned int length = 0;
//	while (str[length] != '\0') {
//		length++;
//	}
//	return length;
//}
//
//char* copyOfStrcopy(char* dest, char* src) {
//	if (dest == nullptr)
//	{
//		return nullptr;
//	}
//
//	char* ptr = dest;
//
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//
//	*dest = '\0';
//
//	return ptr;
//}
//
//char* copyOfStrcat(char* dest, char* src) {
//	char* ptr = dest;
//
//	while (*ptr != '\0') {
//		ptr++;
//	}
//
//	while (*src != '\0') {
//		*ptr = *src;
//		src++;
//		ptr++;
//	}
//
//	*ptr = '\0';
//	return dest;
//}
//
//int copyOfStrcmp(char* str1, char* str2) {
//	while (*str1) {
//		if (*str1 != *str2) {
//			break;
//		}
//
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//const char* CopyOfStrStr(const char* haystack, const char* needle) {
//	if (*needle == '\0')
//	{
//		return haystack; //// Празен needle се намира винаги в началото
//	}
//
//	for ( unsigned i = 0; haystack[i] != '\0'; ++i)
//	{
//		unsigned j = 0;
//		while (needle[j] != '\0' && haystack[i + j] == needle[j]) {
//			j++;
//		}
//
//		if (needle[j] == '\0') {
//			return &haystack[i];
//		}
//	}
//
//	return nullptr;
//}
//
//int copyOfAtoi(const char* str) {
//	int res = 0;
//	int sign = 1;
//	int i = 0;
//
//	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
//		i++;
//	}
//
//	if (str[i] == '-' || str[i] == '+')
//	{
//		if (str[i] == '-')
//		{
//			sign = -1;
//		}
//		i++;
//	}
//
//	while (str[i] >= '0' && str[i] <= '9')
//	{
//		res = res * 10 + (str[i] - '0');
//		i++;
//	}
//
//	return res * sign;
//}
//
//double copyOfAtof(const char* str) {
//	double fraction = 0.0;
//	double divisor = 1.0;
//	double res = 0.0;
//	double sign = 1.0;
//	int i = 0;
//
//	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
//		i++;
//	}
//
//	if (str[i] == '-' || str[i] == '+')
//	{
//		if (str[i] == '-')
//		{
//			sign = -1.0;
//		}
//		i++;
//	}
//
//	while (str[i] >= '0' && str[i] <= '9')
//	{
//		res = res * 10.0 + (str[i] - '0');
//		i++;
//	}
//
//	if (str[i] == '.') {
//		i++;
//		while (str[i] >= '0' && str[i] <= '9')
//		{
//			fraction = fraction * 10.0 + (str[i] - '0');
//			divisor = divisor * 10.0;
//			i++;
//		}
//	}
//
//	return (res + fraction/divisor) * sign;
//}
//
//int main()
//{
//	//char str[100] = "";
//	/*std::cout << "Enter your text here: ";
//	std::cin.getline(str, 100);*/
//	//std::cout << copyOfStrlen(str);
//	char destination[100];
//	//std::cout << copyOfStrcopy(destination, str);
//
//	char str1[] = "Hello";
//	char str2[] = "Helloo";
//	int ret = copyOfStrcmp(str1, str2);
//	if (ret > 0)
//	{
//		std::cout << str1 << "is greater than " << str2 << std::endl;
//	}
//	else if (ret < 0) {
//		std::cout << str1 << "is less than " << str2 << std::endl;
//	}
//	else {
//		std::cout << str1 << "is equal to " << str2 << std::endl;
//	}
//
//
//	//Хистограма за дълъг символен низ
//	char str[SIZE] = "";
//	size_t histogram[HISTOGRAM_SIZE] = { 0 };
//	std::cin.getline(str, SIZE);
//	char* temp = str;
//	while (*temp) {
//		assert(*temp >= 'a' && *temp <= 'z');
//		histogram[*temp - 'a']++;
//		temp++;
//	}
//
//	for (unsigned i = 0; i < HISTOGRAM_SIZE; ++i)
//	{
//		if (histogram[i] != 0)
//		{
//			std::cout << char(i + 'a') << "--" << histogram[i] << std::endl;
//		}
//	}
//
//	//Хистограма за изречение - до !
//	int symbols[MAX_ASCI] = { 0 };
//	char ch;
//
//	do {
//		std::cin.get(ch);
//		symbols[(int)ch]++; //(int)ch показва номера на съответния символ в ASCI таблицата - например за А 
//	} while (ch != '!');
//
//	for (int i = 0; i < MAX_ASCI; i++)
//	{
//		if (symbols[i] != 0)
//		{
//			std::cout << (char)i << " -- " << symbols[i] << std::endl;
//		}
//	}
//
//
//	//Strcat
//	//char dest[50] = "GeeksforGeeks is an";
//	//char src[50] = " Online Learning Platform";
//	//std::cout << copyOfStrcat(dest, src);
//
//	//StrStr
//	//const char* haystack = "This is a simple example";
//	//const char* needle = "simple";
//	//const char* result = CopyOfStrStr(haystack, needle);
//	//if (result) {
//	//	std::cout << "str str found substring starting at: " << result << std::endl;
//	//}
//	//else {
//	//	std::cout << "str str not found." << std::endl;
//	//}
//
//	//Тест atoi
//	//const char* numStr = "   a-12345 abc";
//	//std::cout << "atoi ('   a-12345 abc') = " << copyOfAtoi(numStr) << std::endl;
//
//
//	// 6. Тест atof
//	const char* numStr = "   -123.45 abc";
//	std::cout << "atoi ('   -123.45 abc') = " << copyOfAtof(numStr) << std::endl;
//}