# include "zombieHorde.hpp"

zombieHorde::zombieHorde(int N) {
    hordeCount = N;
    horde = new zombie[N]();
    for (int i = 0; i < N; i++) {
       horde[i].setName(gen_random());
       horde[i].setType_powers(0); 
    }
}

zombieHorde::~zombieHorde(void) {
    delete[] horde;
}

void        zombieHorde::announce(void) {
    for (int i = 0; i < hordeCount; i++) {
        horde[i].announce();
    }
}