#include "HumanB.h"

HumanB::HumanB(std::string name): weapon()
{
    this->name = name;
    return ;
}

void    HumanB::setWeapon(Weapon &weapon){
    
    std::cout << &weapon << " " << this->weapon << std::endl;
    this->weapon = &weapon;
}

void    HumanB::attack(void)
{
    std::cout << name << " attacks with theire " << weapon->getType() << std::endl;
}
