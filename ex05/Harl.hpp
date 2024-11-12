/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:51:19 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/12 16:54:57 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl{
	private: 
		void debug();
		void info();
		void warning();
		void error();
		void invalid();

	public: 
		Harl();
		~Harl();
		void complain(std::string level);
};

typedef void (Harl::*t_func)(void);

#endif