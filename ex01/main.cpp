/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:19:06 by root              #+#    #+#             */
/*   Updated: 2025/02/12 13:05:42 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap    gate_keeper("Keeper");

    gate_keeper.attack("Player");
    gate_keeper.beRepaired(2);
    gate_keeper.takeDamage(1);

    gate_keeper.guardGate();

    return (0);
}