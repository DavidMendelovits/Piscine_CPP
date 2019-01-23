# include "zombie.hpp"

zombie::zombie(std::string name_, int type_) {
    name = name_;
    type = type_;
    switch (type) {
        case GRUNT_ZOMBIE :
            specialPower = "Has no special powers. This zombie has a pretty dull personality as well...";
            break ;
        case MID_LEVEL_MANAGEMENT_ZOMBIE :
            specialPower = "Has the ability to tell you what to do, but still kinda hates his life. Don't worry! He's moving up soon or he's leaving!";
            break ;
        case CORPORATE_HOTSHOT_ZOMBIE :
            specialPower = "Has the ability to spend stacks at the club. He also rides around in a brand new Mustang!";
            break ;
        case WISE_ZOMBIE :
            specialPower = "He's pretty wise...";
            break ;
        case BOSS_ZOMBIE :
            specialPower = "You did not prepare well enough for this...";
            break ;
        default :
            specialPower = "Oh no! He's simple!";
            break ;
    }
}

void        zombie::announce(void) {
    std::cout<<"Please Welcome <"<<name<<"> to the arena!\n";
    std::cout<<"He's a ";
    switch(type) {
        case GRUNT_ZOMBIE :
            std::cout<<"Grunt Zombie";
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
    std::cout<<" and "<<specialPower<<std::endl;
}

std::string zombie::zombieName(void) {
    return (name);
}

void        zombie::setName(std::string name_) {
    name = name_;
}

zombie::zombie(void) {

}

void        zombie::setType_powers(int type_) {
    type = type_;

    switch (type) {
        case GRUNT_ZOMBIE :
            specialPower = "Has no special powers. This zombie has a pretty dull personality as well...";
            break ;
        case MID_LEVEL_MANAGEMENT_ZOMBIE :
            specialPower = "Has the ability to tell you what to do, but still kinda hates his life. Don't worry! He's moving up soon or he's leaving!";
            break ;
        case CORPORATE_HOTSHOT_ZOMBIE :
            specialPower = "Has the ability to spend stacks at the club. He also rides around in a brand new Mustang!";
            break ;
        case WISE_ZOMBIE :
            specialPower = "He's pretty wise...";
            break ;
        case BOSS_ZOMBIE :
            specialPower = "You did not prepare well enough for this...";
            break ;
        default :
            specialPower = "Oh no! He's simple!";
            break ;
    }
}