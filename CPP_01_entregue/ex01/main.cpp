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

#include "Zombie.hpp"

int	main(void)
{
	int		i;
	int		N;
	Zombie	bie0;
	Zombie*	bie1;

	bie0.set_name("WYLL");
	bie0.announce();
	N = 10;
	bie1 = zombieHorde( N, "Foo" );
	i = 0;
	while (i < N)
	{
		std::cout << "zombie: [ " << i << " ]" << std::endl;
		bie1[i].announce();
		i++;
	}
	delete[] bie1;
	return (0);
}
