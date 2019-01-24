/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:36:01 by dmendelo          #+#    #+#             */
/*   Updated: 2019/01/23 20:36:02 by dmendelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"
# include <sstream>

Brain::Brain(void) {
    iq = 120;
    weight = 1400;
    flavor = "cinnamon";
}

Brain::~Brain(void) {
    return ;
}

const std::string     Brain::identify(void) const {
    std::ostringstream addr;

    addr<<this;

    return (addr.str());
}
