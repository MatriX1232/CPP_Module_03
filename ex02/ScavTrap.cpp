/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:44:03 by msolinsk          #+#    #+#             */
/*   Updated: 2025/02/12 13:11:30 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->_hitpoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    this->_name = other._name;
    this->_hitpoints = other._hitpoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap &other)
{
    if (this == &other)
        return (*this);
    this->_name = other._name;
    this->_hitpoints = other._hitpoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " has entered in Gate keeper mode" << std::endl;
}

void    ScavTrap::attack(std::string const & target)
{
    if (this->_energyPoints > 0 && this->_hitpoints > 0)
    {
        this->_energyPoints--;
        std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->_name << " is out of energy points or hitpoints!" << std::endl;
}