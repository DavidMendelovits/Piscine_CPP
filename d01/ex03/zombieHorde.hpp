/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:35:16 by dmendelo          #+#    #+#             */
/*   Updated: 2019/01/23 20:35:17 by dmendelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

# include "zombie.hpp"

class zombieHorde {
    zombie*     horde;
    int         hordeCount;

    public:
            zombieHorde(int);
            ~zombieHorde();
    void    announce();
};

#endif
