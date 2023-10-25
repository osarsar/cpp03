#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        std::string name;
        int Health_point;
        int Energy_point;
        int Attack_damage;

    public:
        //canonical form
        ScavTrap(std::string name);
        ~ScavTrap();
        void guardGate();
};