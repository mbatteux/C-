#pragma once
# include <iostream>

template<typename T>
class Array 
{
private:
    T* _type;
    unsigned int _n;
public:
    Array();
    Array(unsigned int n);
    Array(const Array<T>& rhs);
    ~Array();

    Array<T>& operator=(const Array<T>& src);
	T& operator[](unsigned int i);
    unsigned int size() const;
	T	*get_type(void) const;
	unsigned int get_n(void) const;

};

#include "Array.tpp"

