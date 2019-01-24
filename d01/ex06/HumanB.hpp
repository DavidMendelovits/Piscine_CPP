/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:36:50 by dmendelo          #+#    #+#             */
/*   Updated: 2019/01/23 20:37:03 by dmendelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB {
    const Weapon*   weapon;
    std::string     name;

    public:
        HumanB();
        HumanB(std::string);
        ~HumanB();
        void            attack();
        void            setWeapon(Weapon&);

};

#endif
