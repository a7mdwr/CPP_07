#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
public:
	Array();
	explicit Array(unsigned int n);
	Array(const Array &src);
	Array &operator=(const Array &Or);
	~Array();
	
	T &operator[](unsigned int index);
	const T &operator[](unsigned int index) const;
	unsigned int	size() const;
	
private:
	T *elements;
	unsigned int len;
};

template <typename T>
Array<T>::Array() : elements(NULL), len(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : elements(new T[n]), len(n) {}

template <typename T>
Array<T>::Array(const Array &src) : elements(new T[src.len]), len(src.len)
{
	unsigned int i = 0;
	while (i < len)
	{
		elements[i] = src.elements[i];
		i++;
	}
}

template <typename T>
Array<T>::~Array()
{
	if(elements)
		delete [] elements;
}

//

template <typename T>
Array<T> &Array<T>::operator=(const Array &Or)
{
	unsigned int i = 0;
	if (this != &Or)
	{
		if(elements)
			delete[] elements;
		elements = new T[Or.len];
		len = Or.len;
		while (i < len)
		{
			elements[i] = Or.elements[i];
			i++;
		}
	}
	return (*this);
}

template<typename T>
const T& Array<T>::operator[](unsigned int index) const
{
    if (index >= len)
        throw std::exception();
    return elements[index];
}

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
	std::cout << "new operator called\n";
    if (index >= len)
        throw std::exception();
    return elements[index];
}

template<typename T>
unsigned int	Array<T>::size() const
{
	return (len);
}

#endif