# include "zombieHorde.hpp"

std::string gen_random() {
    srand(time(NULL));

    std::string     names[8] 
    = {"Doug", "Keith", "Kyle", "Wesley", "Travis", "Scott", "Sandy", "Fischel"};

    return (names[rand() % 8]);
}

int         main(void) {
    int         n;

    std::cout<<"Enter a number:\n";
    std::cin>>n;
    
    zombieHorde     horde(n);
    horde.announce();
    return (0);
}