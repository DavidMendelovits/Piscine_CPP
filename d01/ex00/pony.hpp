/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:32:23 by dmendelo          #+#    #+#             */
/*   Updated: 2019/01/23 20:32:24 by dmendelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

# include <iostream>


class   pony {
    std::string name;
    std::string specialPower;
    std::string origin;

    public:
    void    setName(std::string);
    void    setPower(std::string);
    void    setOrigin(std::string);
    void    printInfo();
};

void        ponyOnTheHeap(); 
#endif
