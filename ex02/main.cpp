/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:43:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/09 13:29:48 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main( void )
{
	Array<int>	arr(MAX_SIZE);
	int			*arrCopy = new int[MAX_SIZE];
	
	srand(time(0));
	for (int i = 0; i < MAX_SIZE; i++)
	{
		const int	val = rand();
		arr[i] = val;
		arrCopy[i] = val;
	}

	Array<int>	temp = arr;
	Array<int>	test(temp);

	arr.display();
	temp.display();
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
			std::cerr << "test didn't save the same value" << std::endl;
			return (2);
	}

	try
	{
		arr[-1] = 5;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		arr[MAX_SIZE] = 4;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	delete[] arrCopy;
	return 0;
}
