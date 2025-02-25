/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:43:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/10 00:05:32 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main( void )
{
	Array<int>	mass;

	mass.display();
	std::cout << "===============" << std::endl;
	
	Array<int>	arr(MAX_SIZE);
	int			*arrCopy = new int[MAX_SIZE];
	
	srand(time(0));
	for (int i = 0; i < MAX_SIZE; i++)
	{
		const int	val = rand();
		arr[i] = val;
		arrCopy[i] = val;
	}
	std::cout << "arr" << std::endl;
	arr.display();
	std::cout << "arrCopy" << std::endl;
	for (int i = 0; i < MAX_SIZE; i++)
	{
		std::cout << arrCopy[i] << "; ";
	}
	std::cout << "\n===============" << std::endl;

	std::cout << "temp" << std::endl;
	Array<int>	temp = Array<int>(arr);
	temp.display();
	std::cout << "test" << std::endl;
	Array<int>	test(temp);
	test.display();

	for (int i = 0; i < MAX_SIZE; i++)
	{
		if (arr[i] != arrCopy[i])
		{
			std::cerr << "copy didn't save the same value" << std::endl;
			return (1);
		}
	}

	for (int i = 0; i < MAX_SIZE; i++)
	{
		if (temp[i] != test[i])
		{
			std::cerr << "test didn't save the same value" << std::endl;
			return (2);
		}
	}
	
	try
	{
		std::cout << "arr[-1]" << std::endl;
		arr[-1] = 5;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "===============" << std::endl;
	try
	{
		std::cout << "arr[MAX_SIZE]" << std::endl;
		arr[MAX_SIZE] = 4;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	delete[] arrCopy;
	return 0;
}
