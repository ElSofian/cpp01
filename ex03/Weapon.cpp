#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->type = type;
}

Weapon::~Weapon(void) {
}

const std::string &Weapon::getType() {
	const std::string &typeREF = type;
    return typeREF;
}

void Weapon::setType(std::string type) {
	this->type = type;
}