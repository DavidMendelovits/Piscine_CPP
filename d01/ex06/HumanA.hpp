/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:36:39 by dmendelo          #+#    #+#             */
/*   Updated: 2019/01/23 20:36:40 by dmendelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA {
    const Weapon*   weapon;
    std::string     name;

    public:
        HumanA();
        HumanA(std::string, Weapon&);
        ~HumanA();
        void        attack();
};

#endif
