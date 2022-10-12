/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 08:26:08 by nali              #+#    #+#             */
/*   Updated: 2022/10/12 15:22:19 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() 
{
    Animal *arr[4];
    Brain *b;
    std::cout <<"-----------------Constructors------------------"<<std::endl;
    for (int n = 0; n < 4; n++)
    {
        // std::cout << n<<std::endl;
        if (n%2 == 0)
            arr[n] = new Dog();
        else
            arr[n] = new Cat();
    }
    std::cout <<std::endl;
    
    std::cout << arr[0]->getType() <<std::endl;
    std::cout << arr[1]->getType() <<std::endl;
    b = arr[0]->getBrain();
    //brain object can store upto 100 ideas
    b->setIdea("Hello there!");
    b->setIdea("Bye Bye");
    // every time getidea is called it will retrieve one idea stored at the index
    std::cout << b->getIdea(0) <<std::endl;
    std::cout << b->getIdea(1) <<std::endl;
    std::cout << b->getIdea(100) <<std::endl; // invalid index

    std::cout <<"-----------------copy assignment operator------------------"<<std::endl;
    *(arr[2]) = *(arr[0]); //calls assignment operator overload for DOg class since both are of dog class
    Brain *b1;
    b1 = arr[2]->getBrain(); //now obj0 brain has been copied to obj2
    std::cout << b1->getIdea(0) <<std::endl; //idea same as obj2
    b->setIdea("Bone!"); //change values to show they dont point to same address
    b1->setIdea("No Bone!");
    std::cout << b->getIdea(2) <<std::endl; // since both values are different
    std::cout << b1->getIdea(2) <<std::endl; //hence deep copy
    std::cout <<std::endl;
    
    std::cout <<"-----------------Destructors------------------"<<std::endl;
    for (int n = 0; n < 4; n++)
    {
        delete arr[n];
    }
    return 0; 
}