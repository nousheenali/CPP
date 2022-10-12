/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:41:12 by nali              #+#    #+#             */
/*   Updated: 2022/10/12 14:34:16 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <string>
#include <iostream>

class Brain
{
    private :
    
        std::string ideas[100];
        int size;

    public:
        Brain();
        Brain(const Brain &old_obj);
        Brain &operator=(const Brain &obj);
        ~Brain();
        void setIdea(std::string idea);
        std::string getIdea(int i) const;
};

#endif