/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 09:52:03 by nali              #+#    #+#             */
/*   Updated: 2022/09/28 09:55:13 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>

class PhoneBook
{
    private :
        Contact contacts[8];
        //index
        int i;
        
    public :
        //default constructor
        PhoneBook();
        //methods
        void create_entry(std::string fname, std::string lname, std::string nname, std::string phone, std::string secret);
        int display_entries();
        void display_table_header();
        void display_contents();
        void print_value(std::string str);
};
#endif