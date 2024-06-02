#include "Zombie.hpp"

void    secured_delete(Zombie *victim)
{
	if (victim != NULL)
		delete victim;
}

int main(void)
{
    Zombie soso = Zombie("Soso");
    soso.announce();
    Zombie *yamcha = newZombie("Djib");
    secured_delete(yamcha);
    randomChump("troisieme");
    return (0);
}