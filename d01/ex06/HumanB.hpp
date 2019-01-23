#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB {
    const Weapon*   weapon;
    std::string     name;

    public:
        HumanB();
        HumanB(std::string);
        ~HumanB();
        void            attack();
        void            setWeapon(Weapon&);

};

#endif