/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:43:44 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/06/10 19:07:01 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*_brain;
	public:
		Cat();								// Canonical: Default Constructor
		Cat(Cat const & src);				// Canonical: Copy Constructor
		~Cat(void);							// Canonical: Destructor
	
		Cat & operator=(Cat const & rhs);	// Canonical: Copy Assignement Operator
		void	makeSound() const;
		void	setIdeas(std::string mono_idea);
		void	getIdeas();
};

#endif