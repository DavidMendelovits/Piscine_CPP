# include "Brain.hpp"
# include <sstream>

Brain::Brain(void) {
    iq = 120;
    weight = 1400;
    flavor = "cinnamon";
}

std::string     Brain::identify(void) {
    std::ostringstream addr;

    addr<<this;

    return (addr.str());
}