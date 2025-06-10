/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:43:44 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/06/10 19:18:32 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "A_Animal.hpp"
# include "Brain.hpp"

class Dog : public A_Animal
{
	private:
		Brain	*_brain;

	public:
		Dog();							// Canonical: Default Constructor
		Dog(Dog const & src);				// Canonical: Copy Constructor
		~Dog(void);							// Canonical: Destructor
		
		Dog & operator=(Dog const & rhs);	// Canonical: Copy Assignement Operator
		void			makeSound() const;
		void			setIdeas(std::string mono_idea);
		void			getIdeas();
};

#endif