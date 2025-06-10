/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:43:44 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/06/10 19:06:54 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <limits.h>

class Brain
{
	private:
		std::string	*_ideas;

	public:
		
		Brain();								// Canonical: Default Constructor
		Brain(Brain const & src);				// Canonical: Copy Constructor
		virtual ~Brain(void);					// Canonical: Destructor
	
		Brain &	operator=(Brain const & rhs);	// Canonical: Copy Assignement Operator
		void	setIdeas(std::string mono_idea);
		void	getIdeas();

};

#endif