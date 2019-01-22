#ifndef PHONEBOOK_ENTRY_H
# define PHONEBOOK_ENTRY_H

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <string>
# include <cstring>
# include <cctype>

class phonebook_entry {
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string address;
    std::string email;
    std::string phoneNumber;
    std::string birthDate;
    std::string favFood;
    std::string underwearColor;
    std::string darkestSecret;
    int         index;

    public:
        void    setFirstName(std::string);
        void    setLastName(std::string);
        void    setNickname(std::string);
        void    setAddress(std::string);
        void    setEmail(std::string);
        void    setPhone(std::string);
        void    setBirthDate(std::string);
        void    setFavFood(std::string);
        void    setUnderwearColor(std::string);
        void    setDarkestSecret(std::string);
        void    setIndex(int);
        void    printEntry(void);
        void    printShort(void);
};

void            printColumn(std::string str); 
#endif