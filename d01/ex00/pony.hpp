#ifndef PONY_H
# define PONY_H

# include <iostream>


class   pony {
    std::string name;
    std::string specialPower;
    std::string origin;

    public:
    void    setName(std::string);
    void    setPower(std::string);
    void    setOrigin(std::string);
    void    printInfo();
};

void        ponyOnTheHeap(); 
#endif