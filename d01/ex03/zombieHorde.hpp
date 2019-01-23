#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

# include "zombie.hpp"

class zombieHorde {
    zombie*     horde;
    int         hordeCount;

    public:
            zombieHorde(int);
            ~zombieHorde();
    void    announce();
};

#endif