/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:42:53 by aperrein          #+#    #+#             */
/*   Updated: 2023/11/02 09:42:55 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template <typename T>
void	fct_test(T & i)
{
	i += 2;
}

template <typename T>
void	print(T & i)
{
	std::cout << i;
	return;
}

int	main()
{
	int array[] = {1,2,3,4,5,6,7,8};
	char s[] = "Tester";

	iter(array, 8, print<int>);
	std::cout << std::endl;
	iter(array, 8, fct_test<int>);
	std::cout << "fct on array" << std::endl;
	iter(array, 8, print<int>);
	std::cout << std::endl;
	iter(s, 8, print<char>);
	std::cout << std::endl;
	iter(s, 8, fct_test<char>);
    std::cout << "fct on s" << std::endl;
	iter(s, 8, print<char>);
	std::cout << std::endl;
	return (0);
}
