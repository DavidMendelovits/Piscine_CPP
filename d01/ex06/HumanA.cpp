# include "HumanA.hpp"

HumanA::HumanA(void) {
    return ;
}

HumanA::HumanA(std::string name_, Weapon weapon_) {
    name = name_;
    weapon = &weapon_;
}

HumanA::~HumanA(void) {
    return ;
}

void            HumanA::attack(void) {
    std::string         type;

    type = weapon->getType();
    std::cout<<name<<" attacks with his "<<type<<std::endl;
}

