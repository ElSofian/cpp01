#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;	
	std::string &stringREF = str;

	std::cout << "Addresses : \n";
    std::cout << &str << std::endl;
    std::cout << &stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << "\nValues : \n";
    std::cout << str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << stringREF << std::endl;

    return (0);
}