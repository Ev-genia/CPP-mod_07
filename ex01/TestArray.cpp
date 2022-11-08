/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TestArray.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:00:55 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/08 14:29:42 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TestArray.hpp"

TestArray::TestArray(): val(42)
{
}

TestArray	&TestArray::operator=(const TestArray &rhs)
{
	if (this != &rhs)
		val = rhs.val;
	return (*this);
}

TestArray::TestArray(const TestArray &src)
{
	*this = src;
}

TestArray::~TestArray()
{
	// std::cout << "TestArray destructor" << std::endl;
}

TestArray::TestArray(int enterVal): val(enterVal)
{
}

void	TestArray::setVal(int enterVal)
{
	val = enterVal;
}

int		TestArray::getVal() const
{
	return (val);
}

std::ostream	&operator<<(std::ostream &out, const TestArray &src)
{
	out << src.getVal();
	return (out);
}
