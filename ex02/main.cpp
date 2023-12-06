/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:47:34 by aperrein          #+#    #+#             */
/*   Updated: 2023/11/02 09:47:37 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	int		a;
	Array<int> arrayA(4);
	Array<int> arrayB(2);
    int i = 0;

	while (i < 5)
	{
		try
		{
			a = arrayA[i];
			std::cout << "arrayA[" << i << "] = " << a << std::endl;

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
        i++;
	}
    
	std::cout << std::endl;
	std::cout << "fill array value" << std::endl;
    i = 0;
	while (i < 4)
    {
		arrayA[i] = i;
        i++;
    }
	std::cout << "arrayA size = " << arrayA.size() << std::endl;
	std::cout << "arrayB size = " << arrayB.size() << std::endl;
	arrayB = arrayA;
	std::cout << "arrayB = arrayA" << std::endl;
	std::cout << "arrayA size = " << arrayA.size() << std::endl;
	std::cout << "arrayB size = " << arrayB.size() << std::endl;


    std::cout << "arrayB modified" << std::endl;
    i = 0;
    try
    {
        while(1)
            arrayB[i++] = 2;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "check copy modification" << std::endl;
    i = 0;
    try
    {
        while(i < 4)
        {
            std::cout << "arrayA[" << i << "] = " << arrayA[i] << std::endl;
            std::cout << "arrayB[" << i << "] = " << arrayB[i] << std::endl;
            i++;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
