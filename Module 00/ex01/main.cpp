/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:09:29 by nali              #+#    #+#             */
/*   Updated: 2022/09/26 10:07:57 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
 
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
        else if (command == "SEARCH")
        {
            stop = phonebook.display_entries();
        }
        else if (std::cin.eof() || command == "EXIT")
            stop = 1;
        else
            std::cout <<"---INVALID COMMAND---"<<std::endl;;
        //clear buffer
        //after searching empty directory some texts were getting repeated
        command.clear();
        std::cin.ignore(INT_MAX,'\n'); // clear input buffer in case of any remaining input
                                        //eg: index 1jldj
    }
        
    return (0);
}