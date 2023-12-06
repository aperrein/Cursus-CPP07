/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:45:45 by aperrein          #+#    #+#             */
/*   Updated: 2023/11/01 09:45:47 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

template <typename T> void swap(T &a, T &b)
{
	T	tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T a, T b)
{
	return (a < b) ? a : b;
}

template <typename T>
T max(T a, T b)
{
	return (a > b) ? a : b;
}

#endif
