/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:36:45 by dmendelo          #+#    #+#             */
/*   Updated: 2019/01/23 20:36:47 by dmendelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(void) {
    return ;
}

HumanB::HumanB(std::string name_) {
    name = name_;
}

HumanB::~HumanB(void) {
    return ;
}

void                HumanB::setWeapon(Weapon& weapon_) {
    weapon = &weapon_;
}

void                HumanB::attack(void) {
    std::string      type;

    type = weapon->getType();
    
    std::cout<<name<<" attacks with his "<<type<<std::endl;

}
