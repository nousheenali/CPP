/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:19:18 by nali              #+#    #+#             */
/*   Updated: 2022/09/26 09:16:32 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::create_contact(std::string fname, std::string lname, std::string nname, std::string phone, std::string secret)
{
    firstname = fname;
    lastname = lname;
    nickname = nname;
    phonenumber = phone;
    darkestsecret = secret;
}

std::string Contact::get_firstname()
{
    return firstname;
}

std::string Contact::get_lastname()
{
    return lastname;
}

std::string Contact::get_nickname()
{
    return nickname;
}

std::string Contact::get_phonenumber()
{
    return phonenumber;
}