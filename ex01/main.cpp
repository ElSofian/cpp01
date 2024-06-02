#include "Zombie.hpp"

void delete_horde(Zombie *horde)
{
    delete [] horde;
}

int main(void)
{
    Zombie *horde = zombieHorde(10, "Soso");
    for (int i = 0; i < 10; i++)
        horde[i].announce();
    delete_horde(horde);
    return 0;
}