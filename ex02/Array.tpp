/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:10:58 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/09 17:32:11 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef ARRAY_HPP

template <typename T>
Array<T>::Array(): arr(0), size(0)
{
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array<T> &rhs)
{
	size = rhs.size;
	arr = new T[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rhs.arr[i];
	}
	return (*this);
}

template <typename T>
Array<T>::Array(const Array<T> &src)
{
	*this = src;
}

template <typename T>
Array<T>::~Array()
{
	if (arr)
		delete [] arr;
}

template <typename T>
Array<T>::Array(unsigned int enterSize): size(enterSize)
{
	arr = new T[size];
}

template <typename T>
unsigned int	Array<T>::getSize()const
{
	return (size);
}

template <typename T>
T	&Array<T>::operator[](const unsigned int index)
{
	if (index < 0 || index >= size)
		throw std::out_of_range("out of range of array");
	else
		return (arr[index]);
}

// template <typename T>
// void	Array<T>::display(unsigned int index) const
// {
// 	T	&temp = operator[](index);
// 	std::cout << "array[" << index << "] = " << temp << std::endl;
// }

template <typename T>
void	Array<T>::display() const
{
	if (!size)
	{
		std::cout << "empty array" << std::endl;
		return ;
	}
	for (unsigned int i = 0; i < size; i++)
	{
		// std::cout << display(i) << std::endl;
		std::cout << arr[i] << "; ";
	}
	std::cout << "\n===============" << std::endl;
}

#endif