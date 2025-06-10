/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:03:59 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/06/10 18:21:54 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"
# include "Dog.hpp"
# include "Cat.hpp"

int	main(void)
{
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();


	std::cout << "\n--------------Extra tests--------------\n" << std::endl;
	std::cout << "\n--------------Object Slicing--------------\n" << std::endl;
	// Object slicing: 
	const Animal	k = *i;
	std::cout << "Cat's Assignment operator test" << std::endl;
	std::cout << k.getType() << std::endl;
	k.makeSound();

	const Animal	l = *j;
	std::cout << "Dog's Assignment operator test" << std::endl;
	std::cout << l.getType() << std::endl;
	l.makeSound();
	
	std::cout << "\n--------------Non-Object Slicing--------------\n" << std::endl;
	// Non Object Slicing: use of references
	const Animal &m = *i;
	std::cout << "Cat's Assignment operator test" << std::endl;
	std::cout << m.getType() << std::endl;
	m.makeSound();

	const Animal &n = *j;
	std::cout << "Cat's Assignment operator test" << std::endl;
	std::cout << n.getType() << std::endl;
	n.makeSound();

	std::cout << "\n--------------Subject tests--------------\n" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << "\n--------------WrongCat tests--------------\n" << std::endl;
	const WrongAnimal	*wrong_cat = new WrongCat();
	std::cout << wrong_cat->getType() << " " << std::endl;
	wrong_cat->makeSound();

	delete j;
	delete i;
	delete meta;
	return (0);
}

// Object slicing occurs when a derived class object is assigned
// to a base class object by value.

// const Animal k = *i; copies only the Animal portion of the Cat
// object pointed to by i.
// The resulting k is an Animal object, not a Cat object, so
// k.makeSound() calls Animal::makeSound() instead of Cat::makeSound().
// The same applies to l with the Dog object.