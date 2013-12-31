/**********************************************************
 * File: cvexample.cpp
 *
 * "In C, rvalues never have cv-qualified types, only lvalues do"
 * "Class rvalues can have cv-qualified types, but built-in types (like int)
 * can't."
 * 
 * Section 4.1 of C++11 Draft
 * "Each type which is a cv-unqualified complete or incomplete object type or is
 * void (3.9) has three corresponding cv-qualified versions of its type: 
 *  - a const-qualified version
 *  - a volatile-qualified version, and
 *  - a const-volatile-qualified version.
 *
 * The cv-qualified or cv-unqualified versions of a type are distinct types;
 * however, they shall have the same representation and alignment requirements
 * (3.9)"
 *
 * The example given here demonstrates the use of a cv-qualified value and
 * alignment requirements.
 *
 * Original Content Derived from Eli Bendersky's Website
 * Adapted by: Kevin Manalo
 */

#include <iostream>

class A {
    public:
        void foo() const { std::cout << "A::foo() const\n"; }
        void foo() { std::cout << "A::foo()\n"; }
};

A bar() { return A(); }
const A cbar() { return A(); }


int main()
{
    bar().foo();  // calls foo
    cbar().foo(); // calls foo const
}
