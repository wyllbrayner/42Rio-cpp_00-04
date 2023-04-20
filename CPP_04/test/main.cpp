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

#include "Character.hpp"
#include "Warrior.hpp"
#include "Cat.hpp"

int	main( void )
{
	std::string	s1;
	s1 = "studentes";
	Warrior		*a = new Warrior();
	Character	*b = new Warrior();
//	Warrior	*b = new Warrior();

	a->sayHello(s1);
	b->sayHello(s1);

	delete a;
	delete b;

/*
	Warrior		a;
	Character	b;

	a.sayHello(s1);
	b.sayHello(s1);
*/
	return (0);
}
