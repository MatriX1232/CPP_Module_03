/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:19:06 by root              #+#    #+#             */
/*   Updated: 2025/02/12 13:14:32 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap fragTrap("FR4G-TP");

    fragTrap.attack("target");
    fragTrap.takeDamage(10);
    fragTrap.beRepaired(5);
    fragTrap.highFivesGuys();

    return (0);
}