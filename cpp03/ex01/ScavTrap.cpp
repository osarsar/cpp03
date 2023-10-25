#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "-----call constructor-----\n";
    this->name = name;
    this->Health_point = 100;
    this->Energy_point = 50;
    this->Attack_damage = 20;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode\n";
}

ScavTrap::~ScavTrap()
{
    std::cout<< "-----call Destructor-----\n";
}