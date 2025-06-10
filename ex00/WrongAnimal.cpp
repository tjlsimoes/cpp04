/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:04:06 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/06/10 18:18:28 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")	// Default Constructor
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
	// _type = "WrongAnimal";
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)	// Copy Constructor
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = src;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
	return ;
}

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout <<
	"WrongAnimal produces WrongAnimal sounds!"
	<< std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}