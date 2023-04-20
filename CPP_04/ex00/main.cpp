/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main( void )
{
	const Animal* meta = new Animal();
	Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* wcat = new WrongCat();
	std::cout << wcat->getType() << " " << std::endl;
	wcat->makeSound();
	
	delete meta;
	delete j;
	delete i;
	delete wcat;
/*
	Animal	a1;
	Animal	a2(a1);
//	std::cout << "Animal	a2(a1)" << std::endl;
	std::cout << "Type from a1 " << a1.getType() << " | Type from a2 " << a2.getType() << std::endl;
	a2 = a1;
//	std::cout << "a2 = a1" << std::endl;
	std::cout << "Type from a2 " << a2.getType() << std::endl;
	a1.makeSound();
	a2.makeSound();

	Dog	d1;
	Dog	d2;
	std::cout << "Type from d1 " << d1.getType() << " | Type from d2 " << d2.getType() << std::endl;

	d1 = d2; 
	std::cout << "Type from d1 " << d1.getType() << std::endl;
	d1.makeSound();
	d2.makeSound();

	Cat c1;
	Cat c2;
	std::cout << "Type from c1 " << c1.getType() << " | Type from c2 " << c2.getType() << std::endl;

	c2 = c1;
	c1.makeSound();
	c2.makeSound();
*/
	return (0);
}
