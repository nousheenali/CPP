/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 09:16:52 by nali              #+#    #+#             */
/*   Updated: 2022/09/07 22:40:53 by nali             ###   ########.fr       */
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