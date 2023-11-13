/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:30:04 by yabad             #+#    #+#             */
/*   Updated: 2023/11/13 19:00:37 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
Array<T>::Array() {
	std::cout << "Default constructor called." << std::endl;
	this->array = nullptr;
	this->length = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) {
	std::cout << "Parameterized constructor called." << std::endl;
	try {
		this->array = new T[n];
		this->length = n;
	} catch (const std::exception &e) {
		std::cerr << "Memory allocation failed: " << e.what() << std::endl;
	}
}

template <typename T>
Array<T>::Array(const Array& other) {
	std::cout << "Copy constructor called." << std::endl;
	this->array = NULL;
	*this = other;
}

template <typename T>
Array<T>::~Array() {
	std::cout << "Destructor called." << std::endl;	
	if (this->array)
		delete [] this->array;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array& other) {
	std::cout << "Copy assignment operator called." << std::endl;
	if (this != &other) {
		if (this->array)
			delete [] this->array;
		this->array = new T[other.length];
		this->length = other.length;
		for (unsigned int i = 0; i < this->length; i++) {
			this->array[i] = other.array[i];
		}
	}
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](unsigned int index) {
	if (index < this->length) {
		return this->array[index];
	}
	throw std::out_of_range("Index out of range");
}

template <typename T>
unsigned int	Array<T>::size(void) const {
	return (this->length);
}

#endif