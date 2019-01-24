#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class fixed {
    public:
        fixed();
        ~fixed();
        fixed(const fixed&);
        void        operator=(const fixed&);

    int                 fixedPointValue;
    static const int    fractionalBits; 
}

#endif