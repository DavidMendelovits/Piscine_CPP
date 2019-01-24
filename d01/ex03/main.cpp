/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:34:23 by dmendelo          #+#    #+#             */
/*   Updated: 2019/01/23 20:34:24 by dmendelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "zombieHorde.hpp"

std::string gen_random() {
    srand(time(NULL));

    std::string     names[8] 
    = {"Doug", "Keith", "Kyle", "Wesley", "Travis", "Scott", "Sandy", "Fischel"};

    return (names[rand() % 8]);
}

int         main(void) {
    int         n;

    std::cout<<"Enter a number:\n";
    std::cin>>n;
    
    zombieHorde     horde(n);
    horde.announce();
    return (0);
}
