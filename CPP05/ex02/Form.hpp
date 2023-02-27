/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:13:51 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/10 12:30:36 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"
# include <iomanip>

class Bureaucrat;

class Form
{
	protected:
		const std::string   _name;
		bool                _isSigned;
		const int			_grade;
		const int			_gradeExec;
		const std::string	_target;
		Form();
		virtual void	execute() const = 0;
	public:
		Form(const std::string name, const std::string& target,  const int grade, const int gradeExec);
		Form(const Form& next);
		virtual ~Form();
		Form& operator=(const Form& next);
		const std::string& getName() const;
		int getGrade() const;
		int getGradeExec() const;
		bool getSigned() const;
		const std::string getTarget();
		void	beSigned(Bureaucrat& Bureaucrat);
		void	executeForm(const Bureaucrat& executor) const;

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