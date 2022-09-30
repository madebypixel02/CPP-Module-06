/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:47:58 by aperez-b          #+#    #+#             */
/*   Updated: 2022/09/30 15:23:19 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static char const	&convertChar(std::string const &value)
{
	(void)value;
}

static int const	&convertInt(std::string const &value)
{
	(void)value;
}

static float const	&convertFloat(std::string const &value)
{
	(void)value;
}

static double	&convertDouble(std::string const &value)
{
	(void)value;
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "usage: ./convert <value>" << std::endl;
		return (1);
	}
	std::cout << "char: " << convertChar(argv[1]);
	std::cout << "int: " << convertInt(argv[1]);
	std::cout << "float: " << convertFloat(argv[1]);
	std::cout << "double: " << convertDouble(argv[1]);
	return (0);
}
