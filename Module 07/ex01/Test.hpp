/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:42:08 by nali              #+#    #+#             */
/*   Updated: 2022/10/11 20:09:57 by nali             ###   ########.fr       */
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
        void setVal(std::string str);
        std::string getVal() const;
        
};

#endif