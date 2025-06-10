/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:03:59 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/06/10 19:09:50 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "Brain.hpp"

int	main(void)
{
	// std::cout << "\n--------------Brain tests--------------\n" << std::endl;
	// Brain	*brain = new Brain();
	// delete brain;

	// std::cout << "\n--------------Animal tests--------------\n" << std::endl;
	// Dog	*dog = new Dog();
	// Cat	*cat = new Cat();

	// delete dog;
	// delete cat;

	// std::cout << "\n--------------Mandatory tests: array--------------\n" << std::endl;
	// const int	SIZE = 100;
	// Animal		*animal_array[SIZE];
	
	// for (int i = 0; i < SIZE/2; i++)
	// 	animal_array[i] = new Dog();

	// for (int i = SIZE / 2; i < SIZE; i++)
	// 	animal_array[i] = new Dog();
	
	// for (int i = 0; i < SIZE; i++)
	// 	delete animal_array[i];

	std::cout << "\n--------------Mandatory tests: deep copy--------------\n" << std::endl;
	Dog	*the_dog;
	the_dog = new Dog();
	the_dog->setIdeas("Hello, I'm a dog");
	the_dog->getIdeas();
	
	Dog	*new_dog(the_dog);
	new_dog->getIdeas();
	
	delete the_dog;


	Cat	*the_cat;
	the_cat = new Cat();
	the_cat->setIdeas("Hello, I'm a cat.");
	the_cat->getIdeas();
	
	Cat	*new_cat(the_cat);
	new_cat->getIdeas();
	
	delete the_cat;
	return (0);
}

// Object slicing occurs when a derived class object is assigned
// to a base class object by value.

// const Animal k = *i; copies only the Animal portion of the Cat
// object pointed to by i.
// The resulting k is an Animal object, not a Cat object, so
// k.makeSound() calls Animal::makeSound() instead of Cat::makeSound().
// The same applies to l with the Dog object.