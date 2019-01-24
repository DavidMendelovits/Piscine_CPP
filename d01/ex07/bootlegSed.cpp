/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bootlegSed.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:37:28 by dmendelo          #+#    #+#             */
/*   Updated: 2019/01/23 20:37:30 by dmendelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <string>

void            replace(char *filename, char *s1, char *s2) {
    std::ofstream    newFile;
    std::ifstream    oldFile(filename);
    
    char            c;

    if (oldFile.is_open()) {
        std::string output;
        output += filename;
        output += ".replace";
        newFile.open(output);

        while (!oldFile.eof()) {
            oldFile.get(c);
            if (c == s1[0]) {
                int check = 1;
                std::string replace;
                replace += c;

                for (int i = 1; s1[i]; i++) {
                    oldFile.get(c);
                    if (c != s1[i]) {
                        check = 0;
                        replace += c;
                        break ;
                    }
                    replace += c;
                }

                if (check) {
                    newFile<<s2;
                    replace.clear();
                }
                
                else {
                    newFile<<replace;
                    replace.clear();
                }
            }
            else {
                newFile<<c;
            }
        }
        newFile.close();
        oldFile.close();
    }
    else {
        std::cout<<"File couldn't be opened"<<std::endl;
    }
}

int             main(int argc, char **argv) {
    if (argc == 4) {
        replace(argv[1], argv[2], argv[3]);
    }
    return (0);
}
