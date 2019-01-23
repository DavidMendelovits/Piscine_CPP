# include "Human.hpp"

Human::Human(void) {
    Brain brain;

    humanBrain = &brain;
}

Brain&          Human::getBrain(void) {
    Brain &br = const_cast<Brain&>(*humanBrain);

    return (br);
}

std::string     Human::identify(void) {
    Brain   br = getBrain();
    return (br.identify());
}