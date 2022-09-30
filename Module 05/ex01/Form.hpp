/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:52:15 by nali              #+#    #+#             */
/*   Updated: 2022/09/30 18:11:01 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include <string>
#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat; //since Form and Bureaucrat class are cross referencing each other

class Form
{
    private :
        const std::string name;
        bool sign;
        const int sign_grade;
        const int execute_grade;

    public:
        // Form();
        Form(std::string name, int sign_grade, int execute_grade);
        Form(const Form &old_obj);
        ~Form();
        Form &operator=(const Form &obj);
        //getters
        std::string getName() const;
        bool getSign() const;
        int getSign_grade() const;
        int getExecute_grade() const;
        void beSigned(Bureaucrat &B);
        
        class GradeTooHighException: public std::exception
        {
            //char *is used coz we what() returns const char* not std::string
            private:    
                const char *str;
            public :
                GradeTooHighException(const char *str);//constructor that takes an input string for cutom message              
                const char *what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            private:    
                const char *str;
            public :
                GradeTooLowException(const char *str);//constructor that takes an input string for custom msg
                const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream& out, const Form& b);
#endif