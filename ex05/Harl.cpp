#include "Harl.hpp"

void Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
	void (Harl::*fnptr[4])();
    fnptr[0] = &Harl::debug;
    fnptr[1] = &Harl::info;
    fnptr[2] = &Harl::warning;
    fnptr[3] = &Harl::error;

    std::string type[4] = {"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; i++)
	{
		if (type[i] == level)
		{
			(this->*fnptr[i])();
			return ;
		}
	}
	std::cout << "Invalid level of complaint." << std::endl;
}