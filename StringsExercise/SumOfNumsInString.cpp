
#include <iostream>
#include <cstring>
#include <cassert>
#include <cctype>
#include <string>

const int MAX_SIZE = 1024;

int findNumsAndSum(const char* sentance) {
	int length = strlen(sentance);
	int sum = 0;

	for (size_t i = 0; i < length; i++)
	{
		unsigned int tempIndex = 0;
		char tempStr[10];

		while (i < length && std::isdigit((unsigned char)sentance[i])) {
			if (tempIndex < 9) {                
				tempStr[tempIndex++] = sentance[i];
			}
			i++;
		}

		tempStr[tempIndex] = '\0';
		sum += std::stoi(tempStr);
		i--;
	}

	return sum;
}

int main()
{
	std::cout << "Original string: 91, ABC Street.-> Sum of the numbers: " << findNumsAndSum("91, ABC Street.") << std::endl;
	std::cout << "Original string: w3resource from 2008->  Sum of the numbers: " << findNumsAndSum("w3resource from 2008") << std::endl;
	std::cout << "Original string: C++ Versiuon 14aa11bb23->  Sum of the numbers: " << findNumsAndSum("C++ Versiuon 14aa11bb23") << std::endl;
	std::cout << "Original string: \"Good 4 U\" is a song recorded by American singer - songwriter Olivia Rodrigo, released on May 14, 2021.->  Sum of the numbers: " << findNumsAndSum("\"Good 4 U\" is a song recorded by American singer - songwriter Olivia Rodrigo, released on May 14, 2021.") << std::endl;
}