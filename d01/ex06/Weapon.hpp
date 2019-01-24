/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:37:10 by dmendelo          #+#    #+#             */
/*   Updated: 2019/01/23 20:37:11 by dmendelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>

class Weapon {
    std::string type;

    public:
            Weapon(std::string);
            Weapon();
            ~Weapon();
    void                   setType(std::string);
    const std::string&     getType() const ;
};

#endif
