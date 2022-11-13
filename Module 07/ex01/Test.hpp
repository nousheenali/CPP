/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:42:08 by nali              #+#    #+#             */
/*   Updated: 2022/11/13 09:39:35 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
#define TEST_H

#include <string>

class Test
{
    private:
        std::string name;
    public:
        Test();
        ~Test();
        Test(const Test &old_obj);
        Test &operator=(const Test &obj);
        void setName(std::string str);
        std::string getName() const;
        
};

#endif