/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:23:57 by nali              #+#    #+#             */
/*   Updated: 2022/11/13 09:40:12 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "iter.hpp"
#include "Test.hpp"

std::ostream &	operator<<( std::ostream & out, const Test & t)
{
	out << t.getName();
	return (out);
}

int main( void ) 
{
    //printing integer array
    std::cout << " ---INTEGER ARRAY--- " <<std::endl;
    int a[6]= {1,9,3,8,5,7};
    iter<int>(a, 6, &print_value);
    
    //printing character array
    std::cout << " ---CHARACTER ARRAY--- " <<std::endl;
    char b[9]= {'t','e','s','t','o','n','l','y'};
    iter<char>(b, 9, &print_value);

    //printing class array
    std::cout << " ---CLASS ARRAY--- " <<std::endl;
    Test arr[3];
    arr[0].setName("matt");
    arr[1].setName("rob");
    arr[2].setName("tom");
    iter<Test>(arr,3,&print_value);
    
    return 0; 
}