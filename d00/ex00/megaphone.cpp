# include <iostream>
# include <cstdlib>
# include <string>

char        *toUpper(char *s) {
    std::string str = s;

    for (std::string::size_type i = 0; i < str.length(); i++) {
        s[i] = std::toupper(s[i]);
    }
    return (s);
}

int         main(int argc, char **argv) {
    if (argc < 2) {
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    }
    else {
        for (int i = 1; i < argc; i++) {
            std::cout<<toUpper(argv[i]);
        }
    std::cout<<"\n";
    }

    return (0);
}