/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:31:01 by nali              #+#    #+#             */
/*   Updated: 2022/10/03 18:36:01 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    //ShrubberyCreationForm default values --> sign grade = 145, execute grade = 137
    try
    {
        //when form is not signed
        Bureaucrat B("Jack", 2);
        ShrubberyCreationForm SF("home");
        B.executeForm(SF);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout<<"-------------------------------"<<std::endl;
    try
    {
        //when grade high enough to sign but low to execute
        Bureaucrat B("Jack", 140);
        ShrubberyCreationForm SF("home");
        B.signForm(SF);
        B.executeForm(SF);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout<<"-------------------------------"<<std::endl;
    try
    {
        //when grade high enough to sign and execute
        Bureaucrat B("Jack", 130);
        ShrubberyCreationForm SF("home");
        B.signForm(SF);
        B.executeForm(SF);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout<<"-------------------------------"<<std::endl;
    //RobotomyRequestForm default values --> sign grade = 72, execute grade = 45
    try
    {
        //when form is not signed
        Bureaucrat B("Matt", 2);
        RobotomyRequestForm RF("Vaccum");
        B.executeForm(RF);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout<<"-------------------------------"<<std::endl;
    try
    {
        //when grade high enough to sign but low to execute
        Bureaucrat B("Matt", 50);
        RobotomyRequestForm RF("Vaccum");
        B.signForm(RF);
        B.executeForm(RF);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout<<"-------------------------------"<<std::endl;
    try
    {
        //when grade high enough to sign and execute
        Bureaucrat B("Matt", 40);
        RobotomyRequestForm RF("Vaccum");
        B.signForm(RF);
        for(int i = 0; i < 6; i++)
        {
            B.executeForm(RF);
            std::cout << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout<<"-------------------------------"<<std::endl;
    // PresidentialPardonForm default values --> sign grade = 25, execute grade = 5
    try
    {
        //when form is not signed
        Bureaucrat B("Jack", 10);
        PresidentialPardonForm PF("Prisoner");
        B.executeForm(PF);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout<<"-------------------------------"<<std::endl;
    try
    {
        //when grade high enough to sign but low to execute
        Bureaucrat B("Jack", 10);
        PresidentialPardonForm PF("Prisoner");
        B.signForm(PF);
        B.executeForm(PF);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout<<"-------------------------------"<<std::endl;
    try
    {
        //when grade high enough to sign and execute
        Bureaucrat B("Jack", 3);
        PresidentialPardonForm PF("Prisoner");
        B.signForm(PF);
        B.executeForm(PF);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}