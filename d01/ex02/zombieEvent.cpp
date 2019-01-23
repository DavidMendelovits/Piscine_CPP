# include "zombieEvent.hpp"

void                zombieEvent::setZombieType(int type) {
    zombieType  = type;
}

zombie*             zombieEvent::newZombie(std::string name) {
    zombie*     newZombozo;

    newZombozo = new zombie(name, zombieType);
    return (newZombozo);
}