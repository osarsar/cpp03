#pragma once
#include <iostream>

class ClapTrap
{
    private:
        std::string name;
        int Health_point;
        int Energy_point;
        int Attack_damage;

    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        std::string getClapTrap_name();
        int getClapTrap_health();
        int getClapTrap_energy();
        void setClapTrap(std::string name);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};