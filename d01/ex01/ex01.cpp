/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:32:32 by dmendelo          #+#    #+#             */
/*   Updated: 2019/01/23 20:32:49 by dmendelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

void memoryLeak()
{
	std::string* panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;

	delete panthere;
	panthere = NULL;
}

int         main() {
    memoryLeak();
    return (0);
}
