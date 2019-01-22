# include <iostream>
# include <cstdlib>
# include <string>
# include <cstring>

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
        void    printEntry(void);
} entry;
