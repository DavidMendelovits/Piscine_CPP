# include "zombieEvent.hpp"
# include <cstdlib>
# include <ctime>

std::string gen_random() {
    srand(time(NULL));

    std::string     names[8] 
    = {"Doug", "Keith", "Kyle", "Wesley", "Travis", "Scott", "Sandy", "Fischel"};

    return (names[rand() % 8]);
}

void        randomChump() {
    std::cout<<"You stumbled across a random zombie!\n";


    std::string     name;
    name = gen_random(); 
    std::cout<<name<<std::endl;
    zombie  rando(name, GRUNT_ZOMBIE);
    rando.announce();
}

void            commenceFight(zombie* challenger, int type) {
    switch(type) {
        case GRUNT_ZOMBIE :
            std::cout<<challenger->zombieName()<<" goes down easily...\n";
            break ;
        case MID_LEVEL_MANAGEMENT_ZOMBIE :
            std::cout<<"Mid-Level Management Zombie";
            break ;
        case CORPORATE_HOTSHOT_ZOMBIE :
            std::cout<<"Corporate Hotshot Zombie";
            break ;
        case WISE_ZOMBIE :
            std::cout<<"Wise Zombie";
            break ;
        case BOSS_ZOMBIE :
            std::cout<<"BOSS ZOMBIE";
            break ;
    }

    delete challenger;
}

void            notSoRandomChump(void) {
    std::cout<<"Are you ready to fight some zombies?\n";
    std::cout<<"please enter a number between 0 and 4:\n";

    int    type;

    std::cin>>type;
    if (type >= 0 && type <= 4) {
        zombieEvent fight;
        fight.setZombieType(type);
        
        zombie*     challenger = fight.newZombie(gen_random());
        challenger->announce();
        commenceFight(challenger, type);
    }
    else {
        std::cout<<"Nice listening skills, fuckhead. Try again next time!"<<std::endl;
    }
}

void            zombify(void) {
    std::cout<<"Welcome to Zombozo Simulator 2k19!\n";

    std::cout<<"We have two modes: Random and Normal:\nPlease enter 1 or 2\n";

    int     mode;

    std::cin>>mode;
    if (mode == 1 || mode == 2) {
        (mode == 1) ?
        randomChump() :
        notSoRandomChump();
    }
    else {
        std::cout<<"Nice listening skills, fuckhead. Try again next time!"<<std::endl;
    }
}

int             main() {
    zombify();

    return (0);
}