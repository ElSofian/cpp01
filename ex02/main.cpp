#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;	
	std::string &stringREF = str;

	std::cout << "Address of the string in memory: " << &str << std::endl;
	std::cout << "Address of the string stocked in stringPTR: " << &stringPTR << std::endl;
	std::cout << "Address of the string stocked stringREF: " << &stringREF << std::endl;

    return (0);
}