/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:06:21 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/08 13:37:44 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	print(const T &elem)
{
	std::cout << elem << std::endl;
}

template<typename T>
void	iter(T *arr, int size, void f(const T &elem))
{
	for (int i = 0; i < size; i++)
	{
		f(arr[i]);
	}
}

#endif