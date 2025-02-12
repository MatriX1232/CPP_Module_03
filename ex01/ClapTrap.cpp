/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:01:37 by msolinsk          #+#    #+#             */
/*   Updated: 2025/02/11 15:43:28 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " has been created!" << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " has been destroyed!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	this->_name = other._name;
	this->_hitpoints = other._hitpoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	std::cout << "ClapTrap " << _name << " has been assigned!" << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string &other)
{
	if (this->_hitpoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is dead and cannot attack!" << std::endl;
		return ;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " attacks " << other << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_hitpoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int damage)
{
	if ((int)damage <= this->_hitpoints)
		this->_hitpoints -= damage;
	else
	{
		std::cout << "ClapTrap " << _name << "si already dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " has taken " << this->_hitpoints << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitpoints == 10)
	{
		std::cout << "ClapTrap " << _name << " is already at full health!" << std::endl;
		return ;
	}
	else
	{
		this->_hitpoints += amount;
		if (this->_hitpoints > 10)
			this->_hitpoints = 10;
	}
	std::cout << "ClapTrap " << _name << " has been repaired for " << amount << " points!" << std::endl;
}

