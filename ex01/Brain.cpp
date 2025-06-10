/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:04:06 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/06/10 19:04:04 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()						// Default Constructor
{
	std::cout << "Brain Default constructor called" << std::endl;
	_ideas = new std::string[100];
	return ;
}

Brain::Brain(Brain const & src)		// Copy Constructor
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called" << std::endl;
	delete[] _ideas;
	return ;
}

Brain &	Brain::operator=(Brain const & rhs)
{
	int	i;

	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		i = 0;
		while (i <= 99)
		{
			this->_ideas[i] = rhs._ideas[i];
			i++;
		}
	}
	return (*this);
}

void	Brain::setIdeas(std::string mono_idea)
{
	if (_ideas)
	{
		for(int i = 0; i < 100; i++)
			_ideas[i] = mono_idea;
	}
	return ;
}

void	Brain::getIdeas()
{
	if (_ideas)
	{
		for(int i = 0; i < 100; i++)
		{
			std::cout
				<< "Idea " << i << ": "
				<< _ideas[i] << std::endl;
		}
	}
	return ;
}
