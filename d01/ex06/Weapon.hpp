#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>

class Weapon {
    std::string type;

    public:
            Weapon(std::string);
            Weapon();
            ~Weapon();
    void                   setType(std::string);
    const std::string&     getType() const {return type;}
};

#endif