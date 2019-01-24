/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:34:13 by dmendelo          #+#    #+#             */
/*   Updated: 2019/01/23 20:34:14 by dmendelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include "zombie.hpp"

class zombieEvent {
    int         zombieType;

    public:
    void    setZombieType(int);
    zombie* newZombie(std::string);
};

#endif
