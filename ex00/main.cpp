#include "Zombie.hpp"

void    secured_delete(Zombie *zombie)
{
	if (zombie != NULL)
		delete zombie;
}

int main(void)
{
    Zombie soso = Zombie("Soso");
    soso.announce();
    Zombie *djib = newZombie("Djib");
    secured_delete(djib);
    randomChump("troisieme");
    return (0);
}