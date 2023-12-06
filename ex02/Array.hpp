/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:47:17 by aperrein          #+#    #+#             */
/*   Updated: 2023/11/02 09:47:19 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <class T>
class Array
{
	private:
		T *_array;
		int _size;

	public:
		Array();
		~Array();
		Array(unsigned int n);
		Array(Array const &copy);
        Array & operator=(Array const &rhs);

		T &     operator[](int n) const;
		unsigned int     size() const;

	class OutOfBounds: public std::exception
	{
		public:
				virtual const char *what() const throw();
	};
};

# include "Array.tpp"

#endif