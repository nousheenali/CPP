/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:09:04 by nali              #+#    #+#             */
/*   Updated: 2022/09/15 06:02:26 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

// pointer to member function video
// https://www.youtube.com/watch?v=8E_jpp-iGEY

class Harl
{
    private :
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );

    public :
        void    complain(std::string level); 
};
