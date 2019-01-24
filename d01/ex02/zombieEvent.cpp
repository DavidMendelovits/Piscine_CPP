/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:34:06 by dmendelo          #+#    #+#             */
/*   Updated: 2019/01/23 20:34:07 by dmendelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "zombieEvent.hpp"

void                zombieEvent::setZombieType(int type) {
    zombieType  = type;
}

zombie*             zombieEvent::newZombie(std::string name) {
    zombie*     newZombozo;

    newZombozo = new zombie(name, zombieType);
    return (newZombozo);
}
