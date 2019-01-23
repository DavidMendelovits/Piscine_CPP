# include "HumanB.hpp"

HumanB::HumanB(void) {
    return ;
}

HumanB::HumanB(std::string name_) {
    name = name_;
}

HumanB::~HumanB(void) {
    return ;
}

void                HumanB::setWeapon(Weapon& weapon_) {
    weapon = &weapon_;
}

void                HumanB::attack(void) {
    std::string      type;

    type = weapon->getType();
    
    std::cout<<name<<" attacks with his "<<type<<std::endl;

}