/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:43:44 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/06/10 19:28:24 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <limits.h>

class A_Animal
{
	protected:
		std::string	_type;

	public:
		
		// No Constructors or Copy Constructor or Assignment Operator
		//   as an Abstract class ought not be instantiable.
		virtual ~A_Animal(void) {}
	
		virtual void	makeSound(void) const = 0;
		std::string		getType() const;
};

#endif

// An abstract class is a class that contains at least one
// pure virtual function. A pure virtual function is a virtual
// function declared in the base class with no implementation,
// requiring derived classes to provide their own implementation.