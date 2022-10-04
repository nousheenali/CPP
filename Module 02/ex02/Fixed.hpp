/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:16:19 by nali              #+#    #+#             */
/*   Updated: 2022/10/04 09:12:50 by nali             ###   ########.fr       */
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
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        
        int toInt( void ) const;
        float toFloat( void ) const;
        void operator= (const Fixed &fp );

        bool operator>(const Fixed & f) const;
        bool operator<(const Fixed & f) const;
        bool operator>=(const Fixed & f) const;
        bool operator<=(const Fixed & f) const;
        bool operator==(const Fixed & f) const;
        bool operator!=(const Fixed & f) const;
        
        Fixed operator*(const Fixed & f);
        Fixed operator+(const Fixed & f);
        Fixed operator-(const Fixed & f);
        Fixed operator/(const Fixed & f);
        
        Fixed operator++();
        Fixed operator++(int);
        Fixed operator--();
        Fixed operator--(int);

        static Fixed &min( Fixed &a, Fixed &b);
        static const Fixed &min( const Fixed &a, const Fixed &b);
        static Fixed &max( Fixed &a, Fixed &b);
        static const Fixed &max( const Fixed &a, const Fixed &b);
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


