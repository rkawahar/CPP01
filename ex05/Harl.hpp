/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:51:19 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/06 19:28:46 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl{
	private: void debug();
	private: void info();
	private: void warning();
	private: void error();
	private: void invalid();

	public: Harl();
	public: ~Harl();
	public: void complain(std::string level);
};

typedef void (Harl::*t_func)(void);

#endif