# include <iostream>

void memoryLeak()
{
std::string* panthere = new std::string("String panthere");

std::cout << *panthere << std::endl;

delete panthere;
panthere = NULL;
}

int         main() {
    memoryLeak();
    return (0);
}