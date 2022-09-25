/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:16:19 by nali              #+#    #+#             */
/*   Updated: 2022/09/18 11:04:05 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>

class Fixed
{
    private :
        int num;
        static const int fractionalbits = 8;

    public:
        Fixed();
        Fixed(const int n);
        Fixed(const float n);
        Fixed (const Fixed &old_obj); //copy contructor
        float toFloat( void ) const;
        void operator= (const Fixed &fp );
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        
        int toInt( void ) const;
};
/*
    Why these operators must be overloaded as global? 
    In operator overloading, if an operator is overloaded as a member, 
    then it must be a member of the object on the left side of the operator.
    The operators ‘<<‘ and ‘>>’ are called like ‘cout << ob1’ and ‘cin >> ob1’.
    So if we want to make them a member method, then they must be made members 
    of ostream and istream classes, which is not a good option most of the time. 
    Therefore, these operators are overloaded as global functions with two parameters, 
    cout and object of user-defined class.
*/

std::ostream &	operator<<( std::ostream & out, const Fixed & f);

