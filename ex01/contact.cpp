/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:19:18 by nali              #+#    #+#             */
/*   Updated: 2022/09/07 18:26:27 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

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