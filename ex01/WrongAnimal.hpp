/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:43:44 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/06/10 18:18:36 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP
# include <iostream>
# include <limits.h>

class WrongAnimal
{
	protected:
		std::string	_type;

	public:
		
		WrongAnimal();								// Canonical: Default Constructor
		WrongAnimal(WrongAnimal const & src);				// Canonical: Copy Constructor
		virtual ~WrongAnimal(void);					// Canonical: Destructor
	
		WrongAnimal &	operator=(WrongAnimal const & rhs);	// Canonical: Copy Assignement Operator
		void	makeSound(void) const;
		std::string		getType() const;
};

#endif