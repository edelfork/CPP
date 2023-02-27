/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:42:53 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/18 12:01:37 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);

	std::cout << GREEN << "-------------------------------------------" << RESET<< std::endl;

	MutantStack<int> a;
	std::list<int> b;

	a = mstack;
	b.push_back(5);
	b.push_back(17);
	b.back();
	b.pop_back();
	b.push_back(3);
	b.push_back(5);
	b.push_back(737);
	b.push_back(0);

	MutantStack<int>::iterator start = mstack.begin();
	MutantStack<int>::iterator end = mstack.end();
	std::list<int>::iterator list_start = b.begin();
	std::list<int>::iterator list_end = b.end();

	std::cout << RED << std::setw(18) << "Size Stack: " << mstack.size() << RESET << " | " << BLUE << "Size List: " << b.size() << std::endl;
	while ((start != end) && (list_start != list_end))
	{
		std::cout << RED << std::setw(19) << *start << RESET << " | " << BLUE << *list_start << std::endl;
		start++;
		list_start++;
	}
	std::cout << GREEN << "-------------------------------------------" << std::endl << std::endl;
	return 0;
}