#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA {
    const Weapon*   weapon;
    std::string     name;

    public:
        HumanA();
        HumanA(std::string, Weapon);
        ~HumanA();
        void        attack();
};

#endif