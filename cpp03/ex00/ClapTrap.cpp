#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "-----call constructor-----\n";
    this->name = name;
    this->Health_point = 10;
    this->Energy_point = 10;
    this->Attack_damage = 0;
}

std::string ClapTrap::getClapTrap_name()
{
    return (this->name);
}

int ClapTrap::getClapTrap_health()
{
    return (this->Health_point);
}

int ClapTrap::getClapTrap_energy()
{
    return (this->Energy_point);
}
void ClapTrap::setClapTrap(std::string name)
{
    this->name = name;
}

void ClapTrap::attack(const std::string& target)
{
    ClapTrap enemy(target);
    int damage;
    if (this->Health_point == 0 || this->Energy_point == 0)
    {
        std::cout << "ClapTrap can't make an attack\n";
        return;
    }
    damage = enemy.Health_point;
    enemy.Health_point -= this->Attack_damage;
    this->Energy_point -= 1;
    damage = damage - enemy.Health_point;
    std::cout << "ClapTrap " << this->name << " attacks " << target << " , causing " << damage << " points of damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Health_point <= 0 || this->Energy_point <= 0)
    {
        std::cout << "ClapTrap " << this->name << " can't be repaired\n";
        return;
    }
    this->Health_point += amount;
    this->Energy_point -= 1;
    std::cout << "ClapTrap " << this->name << " has been repaired with " << amount << " points\n";

}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->Health_point <= 0)
    {
        std::cout << "ClapTrap " << this->name << " is already dead\n";
        return;
    }
    this->Health_point -= amount;
    if (this->Health_point <= 0)
    {
        std::cout << "ClapTrap " << this->name << " is dead\n";
        return;
    }
    std::cout << "ClapTrap " << this->name << " taked damage with " << amount << " points\n";
}

ClapTrap::~ClapTrap()
{
    std::cout<< "-----call Destructor-----\n";
}