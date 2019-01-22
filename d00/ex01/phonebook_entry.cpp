# include "phonebook_entry.hpp"

void            phonebook_entry::setFirstName(std::string name) {
    firstName = name;
}

void            phonebook_entry::setLastName(std::string name) {
    lastName = name;
}

void            phonebook_entry::setNickname(std::string name) {
    nickname = name;
}

void            phonebook_entry::setAddress(std::string addr) {
    address = addr;
}

void            phonebook_entry::setEmail(std::string addr) {
    email = addr;
}

void            phonebook_entry::setPhone(std::string number) {
    phoneNumber = number;
}

void            phonebook_entry::setBirthDate(std::string date) {
    birthDate = date;
}

void            phonebook_entry::setFavFood(std::string food) {
    favFood = food;
}

void            phonebook_entry::setUnderwearColor(std::string color) {
    underwearColor = color;
}

void            phonebook_entry::setDarkestSecret(std::string secret) {
    darkestSecret = secret;
}

void            phonebook_entry::setIndex(int i) {
    index = i;
}

void            phonebook_entry::printEntry(void) {
    std::cout<<"First name: "<<firstName<<"\n";
    std::cout<<"Last name: "<<lastName<<"\n";
    std::cout<<"Also Known as: "<<nickname<<"\n";
    std::cout<<"Postal Address: "<<address<<"\n";
    std::cout<<"Email address: "<<email<<"\n";
    std::cout<<"Phone number: "<<phoneNumber<<"\n";
    std::cout<<"Birthday date: "<<birthDate<<"\n";
    std::cout<<"Favorite food: "<<favFood<<"\n";
    std::cout<<"Underwear color: "<<underwearColor<<"\n";
    std::cout<<"Darkest secret: "<<darkestSecret<<"\n";
}

void            phonebook_entry::printShort(void) {
    std::cout<<std::setw(10)<<std::right<<index;
    std::cout<<"|";
    printColumn(firstName);
    std::cout<<"|";
    printColumn(lastName);
    std::cout<<"|";
    printColumn(nickname);
    std::cout<<"\n";
}