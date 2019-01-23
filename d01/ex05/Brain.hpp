#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain {
    int             iq;
    int             weight;
    std::string     flavor;
    
    public:
    Brain();
    std::string     identify();
};

#endif