/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:36:18 by dmendelo          #+#    #+#             */
/*   Updated: 2019/01/23 20:36:20 by dmendelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

# include "Brain.hpp"

class Human {
    const Brain    humanBrain;

    public:
    Human();
    ~Human();
    std::string         identify();
    Brain const         &getBrain() const;
};

#endif
