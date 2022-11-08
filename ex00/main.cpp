/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:43:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/08 13:04:01 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include "TestClass.hpp"

void	testFunc()
{
	TestClass	small(5), big(10);

	ftd::swap(small, big);
	std::cout << "small: " << small << ", big: " << big << std::endl;
	std::cout << "min(small, big): " << ftd::min(small, big) << std::endl;
	std::cout << "max(small, big): " << ftd::max(small, big) << std::endl;
}

int main( void ) {
	
	int a = 2;
	int b = 3;

	ftd::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ftd::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ftd::max( a, b ) << std::endl;

	std::string c1 = "chaine1";
	std::string c2 = "chaine2";

	ftd::swap(c1, c2);
	std::cout << "c1 = " << c1 << ", c2 = " << c2 << std::endl;
	std::cout << "min( c1, c2 ) = " << ftd::min( c1, c2 ) << std::endl;
	std::cout << "max( c1, c2 ) = " << ftd::max( c1, c2 ) << std::endl;

	std::cout << "Compare test with class" << std::endl;

	testFunc();
	
	return 0;
}
