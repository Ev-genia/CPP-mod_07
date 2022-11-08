/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TestClass.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:53:13 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/08 13:00:06 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTCLASS_HPP
# define TESTCLASS_HPP

# include <iostream>

class TestClass
{
private:
	int	nbr;
public:
	TestClass();
	TestClass	&operator=(const TestClass &);
	TestClass(const TestClass &);
	virtual ~TestClass();

	TestClass(int);
	int	getNbr() const;

	bool	operator==(const TestClass &) const;
	bool	operator!=(const TestClass &) const;
	bool	operator<(const TestClass &) const;
	bool	operator>(const TestClass &) const;
	bool	operator<=(const TestClass &) const;
	bool	operator>=(const TestClass &) const;
};

std::ostream	&operator<<(std::ostream &, const TestClass &);

#endif