/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:03:59 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/07/14 11:46:12 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "A_Animal.hpp"
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
	// A_Animal		*animal_array[SIZE];
	
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
	// the_dog->getIdeas();
	
	Dog	*new_dog = new Dog(*the_dog);
	// new_dog->getIdeas();
	
	delete the_dog;

	new_dog->getIdeas(); // Shallow copy problem!!
	delete new_dog;
	Cat	*the_cat;
	the_cat = new Cat();
	the_cat->setIdeas("Hello, I'm a cat.");
	// the_cat->getIdeas();
	
	Cat	*new_cat = new Cat(*the_cat);
	delete the_cat;
	new_cat->getIdeas();
	
	delete new_cat;

	// std::cout << "\n--------------Instantiate Abstract Class Attempt--------------\n" << std::endl;
	// A_Animal	*animal;
	// animal = new A_Animal();
	
	return (0);
}
