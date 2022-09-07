/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:09:29 by nali              #+#    #+#             */
/*   Updated: 2022/09/07 21:21:46 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "contact.hpp"
#include "phonebook.hpp"
 
int main(void)
{
    std::string command;
    std::string fname;
    std::string lname;
    std::string nname;
    std::string phone;
    std::string secret;
    //creates an instance of phonebook
    PhoneBook phonebook;
    int stop;

    stop = 0;
    while(!stop)
    {
        std::cout << std::endl << "======== ENTER COMMAND (ADD / SEARCH / EXIT) ========" << std::endl;
        std::cin >> command;
        if (command == "ADD")
        {
            while(1)
            {
                std::cout << "Enter First Name : ";
                std::cin >> fname;
                //Ctrl+ D signal
                if (std::cin.eof())
                    return (0);
                //prevent empty values
                if (!fname.empty())
                    break;
            }
            while(1)
            {
                std::cout << "Enter Last Name : ";
                std::cin >> lname;
                if (std::cin.eof())
                    return (0);
                if (!lname.empty())
                    break;
            }
            while(1)
            {
                std::cout << "Enter Nick Name : ";
                std::cin >> nname;
                if (std::cin.eof())
                    return (0);
                if (!nname.empty())
                    break;
            }
            while(1)
            {
                std::cout << "Enter Phone Number : ";
                std::cin >> phone;
                if (std::cin.eof())
                    return (0);
                if (!phone.empty())
                    break;
            }
            while(1)
            {
                std::cout << "Enter Darkest Secret : ";
                std::cin >> secret;
                if (std::cin.eof())
                    return (0);
                if (!secret.empty())
                    break;
            }
            phonebook.create_entry(fname, lname, nname, phone, secret);
        }
        if (command == "SEARCH")
        {
            stop = phonebook.display_entries();
        }
        if (std::cin.eof() || command == "EXIT")
            stop = 1;
        //clear buffer
        //after searching empty directory some texts were getting repeated
        command.clear();
    }
        
    return (0);
}