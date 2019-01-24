/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:35:11 by dmendelo          #+#    #+#             */
/*   Updated: 2019/01/23 20:35:12 by dmendelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "zombieHorde.hpp"

zombieHorde::zombieHorde(int N) {
    hordeCount = N;
    horde = new zombie[N]();
    for (int i = 0; i < N; i++) {
       horde[i].setName(gen_random());
       horde[i].setType_powers(0); 
    }
}

zombieHorde::~zombieHorde(void) {
    delete[] horde;
}

void        zombieHorde::announce(void) {
    for (int i = 0; i < hordeCount; i++) {
        horde[i].announce();
    }
}
