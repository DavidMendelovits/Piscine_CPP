# include "pony.hpp"

void        ponyOnTheHeap() {
    pony        *newPony;
    std::string name;
    std::string power;
    std::string origin;

    newPony = new pony;
    std::cout<<"Congratulations!\nYou've just discovered a pony! What do you think it's name is?\n";
    std::cin >> name;
    power = "The ability to fart rainbows, and listen to all your bullshit while keeping a smile!";
    origin = "The planet Pony, located somewhere far away..";

    newPony->setName(name);
    newPony->setPower(power);
    newPony->setOrigin(origin);    

    std::cout<<"Upon inspecting the tag, you realize you are correct in your assumption!\n\n";
    std::cout<<"But wait! There's more:\n";
    newPony->printInfo();

    std::cout<<"Congratulations on finding your new best friend!\n";

    std::cout<<"OH NO!\n"<<name<<" is running away!\n";
    delete newPony;
}

void        ponyOnTheStack() {
    pony        newPony;

    std::string name;
    std::string power;
    std::string origin;

    std::cout<<"Congratulations!\nYou've just discovered a pony! What do you think it's name is?\n";
    std::cin>>name;
    power = "there is nothing special about this pony!\n";
    origin = "The planet Earth. Again, there is nothing special about this pony!\n";

    newPony.setName(name);
    newPony.setPower(power);
    newPony.setOrigin(origin);

    std::cout<<"Upon inspecting the tag, you realize you are correct in your assumption!\n\n";
    std::cout<<"But wait! There's more:\n";
    newPony.printInfo();

    std::cout<<"There's nothing special about this pony...\nLife goes on...\n";
}

int         main() {
    std::cout<<"Enter 1 to allocate a pony on the heap, 2 to allocate a pony on the stack\n";
    int     input;
    std::cin>>input;
    if (input == 1) {
      ponyOnTheHeap();
    }
    else if (input == 2) {
      ponyOnTheStack();
    }
    else {
        std::cout<<"INVALID INPUT\n";
        return (1);
    }
    return (0);
}