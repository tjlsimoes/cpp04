/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:04:06 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/06/10 17:50:36 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal() : _type("Animal")	// Default Constructor
{
	std::cout << "Default Animal constructor called" << std::endl;
	// _type = "Animal";
	return ;
}

Animal::Animal(Animal const & src)	// Copy Constructor
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called" << std::endl;
	return ;
}

Animal &	Animal::operator=(Animal const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout <<
	"Animal produces animal sounds!"
	<< std::endl;
}

std::string	Animal::getType() const
{
	return (this->_type);
}