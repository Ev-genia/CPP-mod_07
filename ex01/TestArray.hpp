/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TestArray.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:01:13 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/08 14:09:37 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTARRAY_HPP
# define TESTARRAY_HPP

# include <iostream>

class TestArray
{
private:
	int	val;
public:
	TestArray();
	TestArray	&operator=(const TestArray &);
	TestArray(const TestArray &);
	virtual ~TestArray();

	TestArray(int);
	void	setVal(int);
	int		getVal() const;
};

std::ostream	&operator<<(std::ostream &, const TestArray &);

#endif