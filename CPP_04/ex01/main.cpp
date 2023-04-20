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
//#include "WrongCat.hpp"

int	j = 10;

int	main( void )
{
	int	i;
/*
	const Animal	*Animal[j];
	std:: cout << "*************** ==== || ==== ***************" << std::endl;
	i = -1;
	while (++i < j)
	{
		if (i < (j / 2))
			Animal[i] = new Cat;
		else
			Animal[i] = new Dog;
	}
	i = -1;
	while (++i < j)
	{
		std::cout << "in array Animal[" << i << "], this is a " \
			<< Animal[i]->getType() << " that makes " << std::endl;
		Animal[i]->makeSound();
	}
	i = -1;
	while (++i < j)
		delete Animal[i];
*/
	std:: cout << std::endl;
	std:: cout << "*************** ==== || ==== ***************" << std::endl;
	Dog	*d1 = new Dog();
//	Cat	*d1 = new Cat();
	i = 0;
	while (i < 100)
	{
		d1->setIdea(i, "blá, blá, blá");
		i++;
	}
	d1->getIdeas();
	Dog	*d2 = new Dog(*d1);
//	Cat	*d2 = new Cat(*d1);
	delete d1;
	d2->getIdeas();
	delete d2;
	return (0);
}
