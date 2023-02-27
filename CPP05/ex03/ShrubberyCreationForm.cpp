/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:00:17 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/10 15:01:38 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
:Form("ShrubberyCreationForm", target, 145 , 137)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& next)
{
    return *this;
}

void ShrubberyCreationForm::execute() const
{
    std::fstream fs;

    fs.open(_target + "_shrubbery", std::fstream::out | std::fstream::trunc);
    if (!fs.good())
		std::cerr << MAGENTA << "Error while opening Shrubbery target file" << RESET << std::endl;

	fs <<
"###########################'`################################\n"
"###########################  V##'############################\n"
"#########################V'  `V  ############################\n"
"########################V'      ,############################\n"
"#########`#############V      ,A###########################V\n"
"########' `###########V      ,###########################V',#\n"
"######V'   ###########l      ,####################V~~~~'',###\n"
"#####V'    ###########l      ##P' ###########V~~'   ,A#######\n"
"#####l      d#########l      V'  ,#######V~'       A#########\n"
"#####l      ##########l         ,####V''         ,###########\n"
"#####l        `V######l        ,###V'   .....;A##############\n"
"#####A,         `######A,     ,##V' ,A#######################\n"
"#######A,        `######A,    #V'  A########'''''##########''\n"
"##########,,,       `####A,           `#''           '''  ,,,\n"
"#############A,                               ,,,     ,######\n"
"######################oooo,                 ;####, ,#########\n"
"##################P'                   A,   ;#####V##########\n"
"#####P'    ''''       ,###             `#,     `V############\n"
"##P'                ,d###;              ##,       `V#########\n"
"##########A,,   #########A              )##,    ##A,..,ooA###\n"
"#############A, Y#########A,            )####, ,#############\n"
"###############A ############A,        ,###### ##############\n"
"###############################       ,#######V##############\n"
"###############################      ,#######################\n"
"##############################P    ,d########################\n"
"##############################'    d#########################\n"
"##############################     ##########################\n"
"##############################     ##########################\n"
"#############################P     ##########################\n"
"#############################'     ##########################\n"
"############################P      ##########################\n"
"###########################P'     ;##########################\n"
"###########################'     ,###########################\n"
"##########################       ############################\n"
"#########################       ,############################\n"
"########################        d###########P'    `Y#########\n"
"#######################        ,############        #########\n"
"######################        ,#############        #########\n"
"#####################        ,##############b.    ,d#########\n"
"####################        ,################################\n"
"###################         #################################\n"
"##################          #######################P'  `V##P'\n"
"#######P'     `V#           ###################P'\n"
"#####P'                    ,#################P'\n"
"###P'                      d##############P''\n"
"##P'                       V##############'\n"
"#P'                         `V###########'\n"
"#'                             `V##P'\n";   
	fs.close();
}
