/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TestClass.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:54:15 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/08 13:00:13 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TestClass.hpp"

TestClass::TestClass(): nbr(0)
{
}

TestClass	&TestClass::operator=(const TestClass &rhs)
{
	if (this != &rhs)
		nbr = rhs.nbr;
	return (*this);
}

TestClass::TestClass(const TestClass &src)
{
	*this = src;
}

TestClass::~TestClass()
{
}

TestClass::TestClass(int enterNbr): nbr(enterNbr)
{
}

int	TestClass::getNbr() const
{
	return (nbr);
}

bool	TestClass::operator==(const TestClass &rhs) const
{
	if (nbr == rhs.nbr)
		return (true);
	return (false);
}

bool	TestClass::operator!=(const TestClass &rhs) const
{
	if (nbr != rhs.nbr)
		return (true);
	return (false);
}

bool	TestClass::operator<(const TestClass &rhs) const
{
	if (nbr < rhs.nbr)
		return (true);
	return (false);
}

bool	TestClass::operator<=(const TestClass &rhs) const
{
	if (nbr <= rhs.nbr)
		return (true);
	return (false);
}

bool	TestClass::operator>(const TestClass &rhs) const
{
	if (nbr > rhs.nbr)
		return (true);
	return (false);
}

bool	TestClass::operator>=(const TestClass &rhs) const
{
	if (nbr >= rhs.nbr)
		return (true);
	return (false);
}

std::ostream	&operator<<(std::ostream &out, const TestClass &src)
{
	out << src.getNbr();
	return (out);
}

