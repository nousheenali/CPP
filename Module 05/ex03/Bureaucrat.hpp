/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:36:00 by nali              #+#    #+#             */
/*   Updated: 2022/10/03 18:00:57 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include "Form.hpp"
#include <string>
#include <exception>
#include <iostream>

class Form; //since Form and Bureaucrat class are cross referencing each other

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        // Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &old_obj);
        Bureaucrat &operator=(const Bureaucrat &obj);
        ~Bureaucrat();

        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        void signForm(Form &form);
        void executeForm(Form const & form);
        class GradeTooHighException: public std::exception
        {
            public :
                const char *what() const throw();
                /*
                If throw() is not included we ger the error
                "exception specification of overriding function is more lax than base version"
                This is beacuse the virtual function what() has the keyword throw()
                included so we also need to include that while overriding the function*/
        };
        class GradeTooLowException: public std::exception
        {
            public :
                const char *what() const throw();
        };
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

std::ostream &operator<<(std::ostream& out, const Bureaucrat& b);

#endif