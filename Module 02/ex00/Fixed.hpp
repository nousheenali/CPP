/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:16:19 by nali              #+#    #+#             */
/*   Updated: 2022/09/15 13:33:13 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
    private :
        int num;
        static const int fractionalbits = 8;

    public:
        Fixed();
        Fixed (const Fixed &old_obj); //copy contructor
        void operator= (const Fixed &fp );
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};