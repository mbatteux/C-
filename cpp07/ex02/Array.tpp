#include "Array.hpp"

template<typename T>
Array<T>::Array() : _type(NULL), _n(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : _type(new T[n]()), _n(n) {}

template<typename T>
Array<T>::Array(const Array<T>& rhs) : _type(NULL), _n(0)
{
    *this = rhs;
}

template<typename T>
Array<T>::~Array()
{
    delete[] this->_type;
}
template<typename T>
T	*Array<T>::get_type(void) const
{
	return (this->_type);
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& src)
{
    if (this != &src)
	{
        delete[] this->_type;
        this->_n = src.size();
        this->_type = new T[_n];
        for (unsigned int i = 0; i < _n; ++i)
            this->_type[i] = src.get_type()[i];
    }
    return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int i)
{
    if (i >= _n) 
        throw std::out_of_range("Index out of range");
    return _type[i];
} // A CORRIGER PAS SURE QUE J'AI LE DROIT

template<typename T>
unsigned int Array<T>::size() const 
{
    return this->_n;
}



