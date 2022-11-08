/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:43:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/08 14:27:54 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "TestArray.hpp"

void	testFuncArr()
{
	TestArray	arrClass[4];
	arrClass[0].setVal(9);
	arrClass[1].setVal(8);
	arrClass[2].setVal(7);
	arrClass[3].setVal(6);
	std::cout << "Test print object of class" << std::endl;
	iter(arrClass, 4, print);
}

int	main( void ) 
{
	int	arrInt[5] = {1, 2, -3, +4, 5};
	std::cout << "Test print integer" << std::endl;
	iter(arrInt, 5, print);

	char	arrChar[3] = {'c', 'x', 'z'};
	std::cout << "Test print char" << std::endl;
	iter(arrChar, 3, print);

	std::string	arrStr[2];
	arrStr[0] = "I'm happy!";
	arrStr[1] = "tu-ru-tu-tu";
	std::cout << "Test print string" << std::endl;
	iter(arrStr, 2, print);

	float	arrFloat[4] = {1.f, 2.4567f, -3.f, +4.f};
	std::cout << "Test print float" << std::endl;
	iter(arrFloat, 4, print);

	double	arrDouble[6] = {1000000000000000001, 1000000000000000000, 15, 0.47484935721, -1000000000000000001, -1000000000000000000};
	std::cout << "Test print double" << std::endl;
	iter(arrDouble, 6, print);

	testFuncArr();

	return 0;
}
