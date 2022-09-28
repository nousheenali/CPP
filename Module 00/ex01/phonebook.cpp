/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 09:51:40 by nali              #+#    #+#             */
/*   Updated: 2022/09/28 09:51:42 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

//Default constructor
//to set values index value to 0
PhoneBook::PhoneBook()
{
    i = 0;
}

//to create phonebook entry
void PhoneBook::create_entry(std::string fname, std::string lname,
                             std::string nname, std::string phone, std::string secret)
{
    //reset index to 0 once eight enties are made
    if (i >= 8)
        i = 0;
    contacts[i].create_contact(fname, lname, nname, phone, secret);
    i++;
}

void PhoneBook::
print_value(std::string str)
{
    
    std::cout << std::setw(10) << std::right << str << "|";
}

void PhoneBook::display_table_header()
{
    std::cout << std::endl << "============================================"<< std::endl;
    print_value("Index");
    print_value("First Name");
    print_value("Last Name");
    print_value("Nick Name");
    std::cout << std::endl;
    std::cout << "============================================"<< std::endl;
}

void PhoneBook::display_contents()
{
    for (int j = 0; j < 8; j++)
    {
        if (!contacts[j].get_firstname().empty())
        {
            print_value(std::to_string(j + 1));
            if (contacts[j].get_firstname().length() > 10)
                print_value(contacts[j].get_firstname().substr(0,9).append("."));
            else
                print_value(contacts[j].get_firstname());
            if (contacts[j].get_lastname().length() > 10)
                print_value(contacts[j].get_lastname().substr(0,9).append("."));
            else
                print_value(contacts[j].get_lastname());
            if (contacts[j].get_nickname().length() > 10)
                print_value(contacts[j].get_nickname().substr(0,9).append("."));
            else
                print_value(contacts[j].get_nickname());
            std::cout << std::endl;
        }
    }
    std::cout << std::right << "============================================"<< std::endl;
}

int PhoneBook::display_entries()
{
    int index;
    
    //check if phonebook is empty
    if (contacts[0].get_firstname().empty())
    {
        std::cout << "Phonebook is empty. Please add entries." << std::endl;
        return (0);
    }
    display_table_header();
    display_contents();
    while(1)
    {
        std::cout << std::endl << "Enter index : ";
        std::cin >> index;
        //Ctrl + D
        if(std::cin.eof())
            return (1);
        //detect invalid entries other than integer
        if(std::cin.fail())
        {
            std::cout << "Invalid Entry. Please try Again!" << std::endl;
            std::cin.clear(); // reset failbit
            std::cin.ignore(200, '\n');
        }
        else
        {
            //array index is dispalyed index - 1
            index--;
            if (index >= 8 or index < 0)
                std::cout << "Invalid index. Please try Again!" << std::endl;
            else
            {
                //prevents printing empty columns
                if (!contacts[index].get_firstname().empty())
                {
                    std::cout << "First Name : " << contacts[index].get_firstname() << std::endl;
                    std::cout << "Last Name : " << contacts[index].get_lastname()<< std::endl;
                    std::cout << "Nick Name : " << contacts[index].get_nickname() << std::endl;
                    std::cout << "Phone Number : " << contacts[index].get_phonenumber() << std::endl;
                    break;
                }
                //prevents empty column printing
                else
                    std::cout << "Invalid index. Please try Again!" << std::endl;
            }
        }
    }
    return (0);
}        
