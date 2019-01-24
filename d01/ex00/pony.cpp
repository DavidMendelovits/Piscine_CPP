/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:32:16 by dmendelo          #+#    #+#             */
/*   Updated: 2019/01/23 20:32:18 by dmendelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "pony.hpp"

void        pony::setName(std::string name_) {
    name = name_;
}

void        pony::setPower(std::string power_) {
    specialPower = power_;
}

void        pony::setOrigin(std::string origin_) {
    origin = origin_;
}

void        pony::printInfo() {
    std::cout<<"name: "<<name<<std::endl;
    std::cout<<"power: "<<specialPower<<std::endl;
    std::cout<<"place of origin: "<<origin<<std::endl;
}
