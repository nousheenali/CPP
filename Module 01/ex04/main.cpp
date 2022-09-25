/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 08:26:08 by nali              #+#    #+#             */
/*   Updated: 2022/09/14 12:33:58 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

std::string GetFileName(std::string filepath)
{
    int lastindex;  
    std::string name;
    
    lastindex = filepath.find_last_of(".");
    name = filepath.substr(0, lastindex);
    return (name);
}

std::string string_replace(std::ifstream& in_file, char *s1, char *s2)
{
    size_t found;
    std::string line;
    int i;
    
    getline(in_file, line);
    found = line.find(s1);
    // npos is a static member constant value with the 
    // greatest possible value for an element of type size_t.
    if (found != std::string::npos)
    {
        i = std::strlen(s1);
        while(found != std::string::npos)
        {
            line = line.substr(0,found) + s2 + line.substr(found+ i) ;
            found = line.find(s1);
        }
    }
    return (line);
}


int main(int argc, char **argv) 
{
   if (argc != 4)
   {
        std::cout << "Invalid No.of arguments." << std::endl; 
   }
   else
   {
        std::ifstream in_file;
        std::string filename;
        std::string line;
        std::ofstream out_file;
        
        in_file.open(argv[1], std::ios::in);
        if (!in_file) 
        {
		    std::cout << "File not present!" << std::endl;
            exit(1);
        }
	    else
        {
            filename = GetFileName(argv[1]).append(".replace");
            out_file.open(filename, std::ios::out | std::ios::trunc);
            if (!out_file)
            {
                std::cout << "Unable to open output file" << std::endl;
                exit(1);
            }
            while(!in_file.eof())
            {
                line = string_replace(in_file, argv[2], argv[3]);
                out_file << line << std::endl; 
            }
            in_file.close();
            out_file.close();
        }
   }
   return 0; 
}