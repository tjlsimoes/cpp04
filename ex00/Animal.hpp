/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:43:44 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/06/10 17:56:58 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <limits.h>

class Animal
{
	protected:
		std::string	_type;

	public:
		
		Animal();								// Canonical: Default Constructor
		Animal(Animal const & src);				// Canonical: Copy Constructor
		virtual ~Animal(void);					// Canonical: Destructor
	
		Animal &	operator=(Animal const & rhs);	// Canonical: Copy Assignement Operator
		virtual void	makeSound(void) const;
		std::string		getType() const;
};

#endif