/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:34:02 by dmendelo          #+#    #+#             */
/*   Updated: 2019/01/23 20:34:03 by dmendelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

# define GRUNT_ZOMBIE 0
# define MID_LEVEL_MANAGEMENT_ZOMBIE 1
# define CORPORATE_HOTSHOT_ZOMBIE 2
# define WISE_ZOMBIE 3
# define BOSS_ZOMBIE 4

class zombie {
    std::string     name;
    int             type;
    std::string     specialPower;

    public:
    zombie(std::string, int);
    void            announce();
    std::string     zombieName();
};

#endif
