#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl	harl;

	if (ac != 2 ||
		(std::string(av[1]) != "DEBUG" && std::string(av[1]) != "INFO" && std::string(av[1]) != "WARNING" && std::string(av[1]) != "ERROR"))
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return 0;
	}
	harl.complain(av[1]);
    return 0;
}