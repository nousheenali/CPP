/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 08:56:48 by nali              #+#    #+#             */
/*   Updated: 2022/09/26 09:18:44 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
class Contact
{      
    private :
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phonenumber;
        std::string darkestsecret;
         
    public :
        //methods
        void create_contact(std::string fname, std::string lname, std::string nname, std::string phone, std::string secret);
        //getters
        std::string get_firstname();
        std::string get_lastname();
        std::string get_nickname();
        std::string get_phonenumber();

};

#endif