/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:26:49 by aperrein          #+#    #+#             */
/*   Updated: 2023/11/02 10:27:01 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template <class T>
Array<T>::Array()
{
	this->_array = new T[0];
	this->_size = 0;
}

template <class T>
Array<T>::Array(unsigned int n)
{
    unsigned int i = 0;
	this->_array = new T[n];
	while (i < n)
		this->_array[i++] = 0;
	this->_size = n;
}

template <class T>
Array<T>::~Array()
{
	delete[] _array;
}

template <class T>
Array<T>::Array(Array<T> const &copy)
{
	*this = copy;
}

template <class T>
Array<T> &      Array<T>::operator=(Array<T> const &rhs)
{
    int i = 0;
	delete [] this->_array;
	this->_array = new T[rhs._size];
	this->_size = rhs._size;
	while (i < rhs._size)
    {
		this->_array[i] = rhs._array[i];
        i++;
    }
	return *this;
}


template <class T>
T &             Array<T>::operator[](int n) const
{
	if (n > this->_size - 1)
		throw Array::OutOfBounds();
	return this->_array[n];
}


template <class T>
unsigned int             Array<T>::size() const
{
	return this->_size;
}

template <class T>
const char *Array<T>::OutOfBounds::what() const throw()
{
	return ("indice is out of bounds!");
}

#endif

