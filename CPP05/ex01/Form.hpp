/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:13:51 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/08 11:06:22 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"
# include <iomanip>

class Bureaucrat;

class Form
{
	private:
		const std::string   _name;
		bool                _isSigned;
		const int			_grade;
		const int			_gradeExec;
		Form();
	public:
		Form(const std::string name, const int grade, const int gradeExec);
		Form(const Form& next);
		~Form();
		Form& operator=(const Form& next);
		const std::string& getName() const;
		int getGrade() const;
		int getGradeExec() const;
		bool getSigned() const;
		void	beSigned(Bureaucrat& Bureaucrat);

		class GradeTooLowException: public std::exception {
			virtual const char*	what() const throw();
		};

		class GradeTooHighException: public std::exception {
			virtual const char*	what() const throw();
		};

		class AlreadySignedException: public std::exception {
			virtual const char*	what() const throw();
		};
};
	std::ostream&	operator<<(std::ostream &o, const Form& form);
#endif