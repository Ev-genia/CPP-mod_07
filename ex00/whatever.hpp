/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:45:47 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/08 11:15:43 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

namespace ftd
{
	template <typename T>
	void	swap(T &a, T &b)
	{
		T	temp;

		temp = a;
		a = b;
		b = temp;
	}

	template <typename T>
	T	min(T &a, T &b)
	{
		if (a < b)
			return (a);
		return (b);
	}

	template <typename T>
	T	max(T &a, T &b)
	{
		if (a > b)
			return (a);
		return (b);
	}
}
#endif