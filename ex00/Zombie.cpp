#include "Zombie.hpp"

Zombie::Zombie(std::string str) {
	this->name = str;
}

Zombie::~Zombie(void) {
	std::cout << this->name << " is dead." << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}