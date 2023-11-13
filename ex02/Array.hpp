/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:23:57 by yabad             #+#    #+#             */
/*   Updated: 2023/11/13 18:00:51 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array {
	private:
		T	*array;
		unsigned int	length;
	public:
		Array();
		Array(unsigned int);
		Array(const Array&);
		~Array();
		
		Array&	operator=(const Array&);
		T&		operator[](unsigned int);

		unsigned int size(void) const;
};

# include "Array.tpp"

#endif