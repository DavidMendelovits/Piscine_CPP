# include "Weapon.hpp"

Weapon::Weapon() {
    return ;
}

Weapon::Weapon(std::string weaponType) {
    setType(weaponType);
}

Weapon::~Weapon(void) {
    return ;
}

void                Weapon::setType(std::string weaponType) {
    type = weaponType;
}