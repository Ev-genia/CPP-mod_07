/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:36:31 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/09 13:26:55 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# define MAX_SIZE 5

# include <iostream>

template <class T>
class Array
{
private:
	T				*arr;
	unsigned int	size;
public:
	Array();
	Array	&operator=(const Array &);
	Array(const Array &);
	virtual ~Array();

	Array(unsigned int);
	unsigned int	getSize() const;
	T	&operator[](const unsigned int);
	// void	display(unsigned int) const;
	void	display() const;
};

# include "Array.tpp"

#endif