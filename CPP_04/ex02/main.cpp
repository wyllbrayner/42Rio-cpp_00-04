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

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main( void )
{
//	const AAnimal A1;  //Erro: It is not possible to instantiate an abstract class.
//	const AAnimal *A1; //Curiosity:: It is possible to instantiate a pointer to an abstract class.
	int	i;
	Cat	c1;
	Dog	d1;

	std::cout << "This is a " << c1.getType() << " that makes " << std::endl;
	c1.makeSound();
	std::cout << "This is a " << d1.getType() << " that makes " << std::endl;
	d1.makeSound();
	i = 0;
	while (i < 100)
	{
		c1.setIdea(i, "cblá, cblá, cblá");
		d1.setIdea(i, "dblá, dblá, dblá");
		i++;
	}
	c1.getIdeas();
	d1.getIdeas();
	return (0);
}
