#include "ClapTrap.hpp"

int main ()
{
    ClapTrap x("oussama");

    // std::cout << "->"<< x.getClapTrap_name() << std::endl;
    x.takeDamage(11);
    x.beRepaired(5);
    x.attack("pppp");

    std::cout << "->"<< x.getClapTrap_health() << std::endl;
    std::cout << "->"<< x.getClapTrap_energy() << std::endl;
}