# include "fixed.hpp"

const int fractionalBits = 8;

using std::cout;
using std::endl;

fixed::fixed(void) {
    fixedPointValue = 0;

    cout << "Default constructor called" << endl;
}

fixed::~fixed(void) {
    cout << "Destructor called" << endl;
}

fixed::fixed(const fixed& other) {
    fixedPointValue = other.fixedPointValue;
    cout << "Copy constructor called" << endl;
}

void        fixed::operator=(const fixed& other) {


    cout << "Assignation operator called" << endl;
}