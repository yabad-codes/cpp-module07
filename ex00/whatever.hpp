/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:28:05 by yabad             #+#    #+#             */
/*   Updated: 2023/11/12 19:34:05 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void    swap(T& a, T& b) {
    T   tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T   min(T a, T b) {
    return (a < b) ? a : b;
}

template <typename T>
T   max(T a, T b) {
    return (a > b) ? a : b;
}

#endif