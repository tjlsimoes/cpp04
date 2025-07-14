/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:04:06 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/07/14 10:49:22 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat() : Animal()		// Default Constructor
{
	std::cout << "Cat Default constructor called" << std::endl;
	_type = "Cat";
	_brain = new(Brain);
	return ;
}

Cat::Cat(Cat const & src) : Animal()	// Copy Constructor
{
	std::cout << "Copy constructor called" << std::endl;
	this->_type = src._type;
	this->_brain = new Brain(*src._brain);
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
	delete _brain;
	return ;
}

Cat &	Cat::operator=(Cat const & rhs)
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

void	Cat::makeSound() const
{
	std::cout
		<< "Cat meows!"
		<< std::endl;
}

void	Cat::setIdeas(std::string mono_idea)
{
	this->_brain->setIdeas(mono_idea);
}

void	Cat::getIdeas()
{
	this->_brain->getIdeas();
}
