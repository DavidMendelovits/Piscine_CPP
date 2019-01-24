/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:36:13 by dmendelo          #+#    #+#             */
/*   Updated: 2019/01/23 20:36:15 by dmendelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Human.hpp"

Human::Human(void) {
    return ;
}

Human::~Human(void) {
    return ;
}

Brain const&         Human::getBrain(void) const {
    return (humanBrain);
}

std::string         Human::identify(void) {
    return (getBrain().identify());
}
