/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:35:49 by dmendelo          #+#    #+#             */
/*   Updated: 2019/01/23 20:35:50 by dmendelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int         main(void) {
    std::string     brain = "HI THIS IS BRAIN";

    std::string *   ptr = &brain;

    std::string &   ref = brain;   

    std::cout<<*ptr<<std::endl;
    std::cout<<ref<<std::endl;
    return (0);
}
