/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:14:05 by nali              #+#    #+#             */
/*   Updated: 2022/11/13 08:52:44 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib> //rand()

Base *createA(void)
{
    Base *obj = new A;
    return (obj);
}

Base *createB(void)
{
    Base *obj = new B;
    return (obj);
}

Base *createC(void)
{
    Base *obj = new C;
    return (obj);
}

Base *generate(void)
{
    Base *(*pfnClass[3])(void); //pointer to function array
    pfnClass[0] = &createA;
    pfnClass[1] = &createB;
    pfnClass[2] = &createC;
    //randomly instantiate any of the 3 objects
    return(pfnClass[rand()%2 + rand()%2]()); //rand()%2 will be either 1 or 0
                                     // so addition provides values 0, 1, 2
}

/*  dynamic_cast < new-type > ( expression )	
    If the cast fails and new-type is a pointer type, 
    it returns a null pointer of that type. */
void identify(Base* p)
{
    if (dynamic_cast<A* >(p))
		std::cout << "Type of the object pointed to by p: " << "A" << std::endl;
	else if (dynamic_cast<B* >(p))
		std::cout << "Type of the object pointed to by p: " << "B" << std::endl;
	else if (dynamic_cast<C* >(p))
		std::cout << "Type of the object pointed to by p: " << "C" << std::endl;
}

/* dynamic_cast < new-type > ( expression )	
    If the cast fails and new-type is a reference type, it throws an
    exception that matches a handler of type std::bad_cast.*/
void identify(Base& p)
{
    Base	ptr;

	try
	{
		ptr = dynamic_cast<A&>(p);
		std::cout << "Type of the object pointed to by p: " << "A" << std::endl;
	}
	catch(std::exception& e) {}
	try
	{
		ptr = dynamic_cast<B&>(p);
		std::cout << "Type of the object pointed to by p: " << "B" << std::endl;
	}
	catch(std::exception& e) {}
	try
	{
		ptr = dynamic_cast<C&>(p);
		std::cout << "Type of the object pointed to by p: " << "C" << std::endl;
	}
	catch(std::exception& e) {}
    
}

int main(void)
{
    Base *obj;
    std::srand(time(0)); // to reset rand() function
    for (int i = 0; i < 6; i++)
    {
        obj = generate();
        identify(obj);
        delete obj;
    } 
    std::cout  << std::endl;
    for (int i = 0; i < 6; i++)
    {
        obj = generate();
        identify(*obj);
        delete obj;
    }
    return (0);
}
