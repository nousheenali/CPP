/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 08:26:08 by nali              #+#    #+#             */
/*   Updated: 2022/10/12 10:39:35 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void) 
{
    const Animal* meta = new Animal(); 
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;
    
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << std::endl;
    
    delete meta;
    delete j;
    delete i;
    
    std::cout << "----------------------------------" << std::endl;
    
    const WrongAnimal* meta2 = new WrongAnimal(); 
    const WrongAnimal* k = new WrongCat();
    std::cout << std::endl;
    std::cout << meta2->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    k->makeSound();
    meta2->makeSound();
    std::cout << std::endl;
    delete meta2;
    delete k;
    return(0);
}