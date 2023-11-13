/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:06:02 by yabad             #+#    #+#             */
/*   Updated: 2023/11/13 12:33:35 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void    capitalizer(std::string &str) {
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] -= 32;
    }
}

void    printer(std::string &str) {
    std::cout << str << std::endl;
}

int main() {
    std::string array[] = {"ironman", "thor", "vision", "spiderman", "cap"};
    size_t length = 5;
    std::cout << "**********Before*********" << std::endl;
    iter(array, length, printer);
    iter(array, length, capitalizer);
    std::cout << "**********After**********" << std::endl;
    iter(array, length, printer);
    return (0);
}