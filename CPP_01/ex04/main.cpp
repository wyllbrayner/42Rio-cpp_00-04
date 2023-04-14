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

#include "replace.hpp"

int	main(int argc, char **argv)
{
	std::string		line;
	std::string		filename;
	std::string		to_search;
	std::string		replace_to;
	std::ifstream	ifs;
	std::ofstream	ofs;
	size_t			pos_to_find;
	size_t			len_to_search;
	size_t			len_replace_to;

	if (argc != 4)
	{
		std::cout \
		<< "Please enter valid parameters: ./replace file_name to_search replace_to" \
		<< std::endl;
	}
	else
	{
		filename = argv[1];
		to_search = argv[2];
		replace_to = argv[3];
		ifs.open(filename.c_str());
		if (ifs.is_open())
		{
			ofs.open(filename.append(".replace").c_str());
			if (ofs.is_open())
			{
				while (std::getline(ifs, line))
				{
					len_to_search = to_search.length();
					len_replace_to = replace_to.length();
					pos_to_find = 0;
					pos_to_find = line.find(to_search, pos_to_find);
					while (pos_to_find != std::string::npos)
					{
						line.erase(pos_to_find, len_to_search);
						line.insert(pos_to_find, replace_to);
						pos_to_find = \
						line.find(to_search, pos_to_find + len_replace_to);
					}
					ofs << line << std::endl;
				}
				ofs.close();
			}
			ifs.close();
		}
		else
		{
			std::cout << "Could not open the file " << filename << "." \
			<< std::endl;
		}
	}
	return (0);
}