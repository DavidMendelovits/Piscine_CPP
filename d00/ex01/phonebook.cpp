# include "phonebook_entry.hpp"

void            printColumn(std::string str) {
    if (str.length() > 10) {
        for (int i = 0; i < 9; i++) {
            std::cout<<str[i];
        }
        std::cout<<".";
    }
    else
        std::cout<<std::setw(10)<<std::setprecision(10)<<std::right<<str;
}

void            getInfo(phonebook_entry phonebook[], int& i) {
    std::string     firstName,
                    lastName,
                    nickname,
                    address,
                    email, 
                    phone,
                    birthDate,
                    favFood,
                    underwearColor,
                    darkestSecret;

    if (i == 8) {
        std::cout<<"PHONEBOOK IS FULL!\n";
        return ;   
    }
    std::cout<<"What's your first name?\n";
    getline(std::cin, firstName);
    phonebook[i].setFirstName(firstName);

    std::cout<<"What's your last name?\n";
    getline(std::cin, lastName);
    phonebook[i].setLastName(lastName);

    std::cout<<"What's your nickname?\n";
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
    
    phonebook[i].setIndex(i);

    i += 1;
 }

int             isNumber(std::string input) {
    for (std::string::size_type i = 0; i < input.length(); i++) {
        if (!isdigit(input[i])) {
            return (0);
        }
    }
    return (1);
}

void            searchPhonebook(phonebook_entry phonebook[], int numEntries) {
    for (int p = 0; p < numEntries; p++) {
        phonebook[p].printShort();
    }
    std::cout<<"Please enter the index of the contact you would like to view:\n";

    std::string input;

    getline(std::cin, input);

    if (isNumber(input) && (input.length() < 2 && input[0] - '0' < numEntries)) {
        phonebook[input[0] - '0'].printEntry();       
    }
    else {
        std::cout<<"INVALID INPUT. Next time, enter a number between 0 and "<<numEntries - 1<<"\n";
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
    else if(!input.compare("SEARCH")) {
        searchPhonebook(phonebook, index);
    }
    return (1);
}

int             main() {
    while (phonebook()) {
    }
    return (0);
}