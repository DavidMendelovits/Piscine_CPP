#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

# define GRUNT_ZOMBIE 0
# define MID_LEVEL_MANAGEMENT_ZOMBIE 1
# define CORPORATE_HOTSHOT_ZOMBIE 2
# define WISE_ZOMBIE 3
# define BOSS_ZOMBIE 4

class zombie {
    std::string     name;
    int             type;
    std::string     specialPower;

    public:
    zombie();
    zombie(std::string, int);
    void            announce();
    std::string     zombieName();
    void            setName(std::string);
    void            setType_powers(int);
};

std::string gen_random();

#endif