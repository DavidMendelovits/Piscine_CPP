/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:37:06 by dmendelo          #+#    #+#             */
/*   Updated: 2019/01/23 20:37:07 by dmendelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon() {
    return ;
}

Weapon::Weapon(std::string weaponType) {
    setType(weaponType);
}

Weapon::~Weapon(void) {
    return ;
}

void                Weapon::setType(std::string weaponType) {
    type = weaponType;
}

const std::string&          Weapon::getType(void) const {
    return (type);
}
