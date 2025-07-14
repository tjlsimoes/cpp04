/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:04:06 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/07/14 10:45:29 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog() : Animal()	// Default Constructor
{
	std::cout << "Dog Default constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
	return ;
}

Dog::Dog(Dog const & src) : Animal()	// Copy Constructor
{
	std::cout << "Copy constructor called" << std::endl;
	this->_type = src._type;
	this->_brain = new Brain(*src._brain);
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
	delete _brain;
	return ;
}

Dog &	Dog::operator=(Dog const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout
		<< "Dog barks!"
		<< std::endl;
}

void	Dog::setIdeas(std::string mono_idea)
{
	this->_brain->setIdeas(mono_idea);
}

void	Dog::getIdeas()
{
	this->_brain->getIdeas();
}