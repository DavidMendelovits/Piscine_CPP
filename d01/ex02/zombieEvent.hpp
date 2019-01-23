#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include "zombie.hpp"

class zombieEvent {
    int         zombieType;

    public:
    void    setZombieType(int);
    zombie* newZombie(std::string);
};

#endif