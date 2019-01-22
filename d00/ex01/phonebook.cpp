# include "phonebook.hpp"

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

void            phonebook_entry::printEntry(void) {
    std::cout<<firstName<<" "<<lastName<<"\n";
    std::cout<<"AKA -> "<<nickname<<"\n";
    std::cout<<address<<"\n";
    std::cout<<email<<"\n";
    std::cout<<phoneNumber<<"\n";
    std::cout<<birthDate<<"\n";
    std::cout<<favFood<<"\n";
    std::cout<<underwearColor<<"\n";
    std::cout<<darkestSecret<<"\n";
}

void            getInfo(phonebook_entry phonebook[], int& i) {
    std::string     firstName;
    std::string     lastName;
    std::string     nickname,
                    address,
                    email, 
                    phone,
                    birthDate,
                    favFood,
                    underwearColor,
                    darkestSecret;

    std::cout<<"Enter your <firstName>\n";
    getline(std::cin, firstName);
    phonebook[i].setFirstName(firstName);

    std::cout<<"Enter your <lastName>\n";
    getline(std::cin, lastName);
    phonebook[i].setLastName(lastName);

    std::cout<<"Enter your nickName\n";
    getline(std::cin, nickname);
    phonebook[i].setNickname(nickname);

    std::cout<<"What's your postal address?\n";
    getline(std::cin, address);
    phonebook[i].setAddress(address);

    std::cout<<"What's your email address\n";
    getline(std::cin, email);
    phonebook[i].setEmail(email);

    std::cout<<"What's your phone number?\n";
    getline(std::cin, phone);
    phonebook[i].setPhone(phone);

    std::cout<<"When is your birthday?\n";
    getline(std::cin, birthDate);
    phonebook[i].setBirthDate(birthDate);

    std::cout<<"What's your favorite food?\n";
    getline(std::cin, favFood);
    phonebook[i].setFavFood(favFood);

    std::cout<<"What color is your underwear?\n";
    getline(std::cin, underwearColor);
    phonebook[i].setUnderwearColor(underwearColor);

    std::cout<<"What's your deepest, darkest secret that you won't tell anyone?\n";
    getline(std::cin, darkestSecret);
    phonebook[i].setDarkestSecret(darkestSecret);

    phonebook[i].printEntry();

    if (i++ == 8) {
        std::cout<<"Phonebook is full!\n";
    }

}

int             phonebook(void) {
    static phonebook_entry phonebook[8];
    static int index = 0;
    
    std::string input;
    std::cout<<"Enter a command:\n";
    getline(std::cin, input);
    if (!input.compare("EXIT")) {
        return (0);
    }
    else if (!input.compare("ADD")) {
        getInfo(phonebook, index);
    }
    return (1);
}

int             main() {
    while (phonebook()) {
        std::cout<<"using phonebook...\n";
    }
    return (0);
}