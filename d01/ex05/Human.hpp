#ifndef HUMAN_H
# define HUMAN_H

# include "Brain.hpp"

class Human {
    const Brain*    humanBrain;

    public:
    Human();
    std::string     identify();
    Brain&          getBrain();
};

#endif