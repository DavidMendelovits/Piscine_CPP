/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:36:07 by dmendelo          #+#    #+#             */
/*   Updated: 2019/01/23 20:36:08 by dmendelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain {
    int             iq;
    int             weight;
    std::string     flavor;
    
    public:
    Brain();
    ~Brain();
    const std::string     identify() const;
};

#endif
