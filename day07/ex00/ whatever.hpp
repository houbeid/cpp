#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template<typename T>

void    swap(T & a, T & b)
{
    T c = a;
    a = b;
    b = c;
}

template<typename T>

T const min(T const & b, T const & a)
{
    return (a <= b ? a : b);
}

template<typename T>

T const max(T const & b, T const & a)
{
    return (a >= b ? a : b);
}

#endif