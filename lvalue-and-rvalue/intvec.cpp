/**********************************************************
 * File: intvec.cpp
 * 
 * " A simplific implementation of a dynamic "integer vector"
 * This file shows show explicit copying is done
 * Intvec v1(20);
 * Intvec v2;
 * v2 = v1;
 *
 * Vs. when v2 is initialized like so:
 * v2 = Intvec(33)
 *
 * The OLD C++ standard had an additional constructor/destructor pair
 * which performs extra work in creating and destroying a temporary object
 *
 * Methods:
 *  - constructor using initialization list
 *
 *  - destructor (~ denotes Destructor)
 *    See http://stackoverflow.com/a/1395509/992834 for a good explanation
 *
 *  - copy constructor
 *    X(const X& copy_from_me); is a valid copy constructor
 *    Use the above format unless there is reason to use something else
 *    See http://en.wikipedia.org/wiki/Copy_constructor
 *
 * Other Notes:
 *  - 1st time I have seen the use of 'size_t' and initialization list
 *  - 1st time I have seen the '~' notation for Destructor
 *  - Have not looked at the implementation of a copy constructor before
 *
 * Original Content Derived from Eli Bendersky's Website
 * Author: Kevin Manalo
 */

#include <iostream>
using namespace std;

class Intvec
{
public:
    explicit Intvec(size_t num = 0)
        : m_size(num), m_data(new int[m_size])
    {
        log("constructor");
    }

    ~Intvec()
    {
        log("destructor");
        if (m_data) {
            delete[] m_data;
            m_data = 0;
        }
    }

    Intvec(const Intvec& other)
        : m_size(other.m_size), m_data(new int[m_size])
    {
        log("copy constructor");
        for (size_t i = 0; i < m_size; ++i)
            m_data[i] = other.m_data[i];
    }

    Intvec& operator=(const Intvec& other)
    {
        log("copy assignment operator");
        Intvec tmp(other);
        std::swap(m_size, tmp.m_size);
        std::swap(m_data, tmp.m_data);
        return *this;
    }
private:
    void log(const char* msg)
    {
        cout << "[" << this << "] " << msg << "\n";
    }

    size_t m_size;
    int* m_data;
};

int main() {
    Intvec v1(20);
    Intvec v2;

    cout << "assigning lvalue...\n";
    v2 = v1;
    cout << "ended assigning lvalue...\n";

    cout << endl << endl;

    cout << "assigning lvalue...\n";
    v2 = Intvec(33);
    cout << "ended assigning lvalue...\n";
}
