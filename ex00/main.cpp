/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:19:06 by root              #+#    #+#             */
/*   Updated: 2025/02/11 11:26:12 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap1("Clap1");
    ClapTrap clap2(clap1);
    clap2 = clap1;

    clap1.attack("Clap2");
    clap2.takeDamage(1);
    clap2.beRepaired(1);
    clap2.takeDamage(1);

    return 0;
}