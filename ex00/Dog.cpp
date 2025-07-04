/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:04:06 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/06/10 17:59:34 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog() : Animal()	// Default Constructor
{
	std::cout << "Dog Default constructor called" << std::endl;
	_type = "Dog";
	return ;
}

Dog::Dog(Dog const & src) : Animal()	// Copy Constructor
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
	return ;
}

Dog &	Dog::operator=(Dog const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout
		<< "Dog barks!"
		<< std::endl;
}
