/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 08:26:08 by nali              #+#    #+#             */
/*   Updated: 2022/10/12 15:46:06 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main() 
{
    Animal *arr[10];
    Brain *b;
    std::cout <<"-----------------Constructors------------------"<<std::endl;
    for (int n = 0; n < 4; n++)
    {
        if (n%2 == 0)
            arr[n] = new Dog();
        else
            arr[n] = new Cat();
    }
    std::cout <<std::endl;
    
    
    std::cout << arr[0]->getType() <<std::endl;
    std::cout << arr[1]->getType() <<std::endl;
    b = arr[0]->getBrain();
    b->setIdea("Hello there!");
    b->setIdea("Bye Bye");
    std::cout << b->getIdea(0) <<std::endl;
    std::cout << b->getIdea(1) <<std::endl;
    std::cout <<std::endl;
    

    std::cout <<"-----------------copy assignment operator------------------"<<std::endl;
    *(arr[2]) = *(arr[0]);
    Brain *b1;
    b1 = arr[2]->getBrain();
    std::cout << b1->getIdea(0) <<std::endl;
    b->setIdea("Bone!");
    b1->setIdea("No Bone!");
    std::cout << b->getIdea(2) <<std::endl;
    std::cout << b1->getIdea(2) <<std::endl;
    std::cout <<std::endl;
    
    std::cout <<"-----------------Destructors------------------"<<std::endl;
    for (int n = 0; n < 4; n++)
    {
        delete arr[n];
    }
    // // delete j;//should not create a leak 
    // // delete i;
    return 0; 
}