/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:04:06 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/06/10 19:18:29 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog() : A_Animal()	// Default Constructor
{
	std::cout << "Dog Default constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
	return ;
}

Dog::Dog(Dog const & src) : A_Animal()	// Copy Constructor
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
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
		this->_type = rhs._type;
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