/**********************************************************
 * File: function_lvalue.cpp
 *
 * This shows the fact that C++ references make
 * left hand assignment to a function possible.
 *
 * "The ability of C++ to return lvalues from function is import for 
 * implementing some overloaded operators ...
 * The assignment mymap[10] works because the non-const overload of 
 * std::map::operator[] returns a reference that can be assigned to.
 * 
 * Original Content Derived from Eli Bendersky's Website
 * Adapted by: Kevin Manalo
 */

#include <iostream>
#include <map>

int globalvar = 20;

int& foo()
{
        return globalvar;
}

int main()
{
        std::string my_str = 
        "\nCODE BLOCK BEFORE MAIN()\n"
        "DEFINED A FUNCTION:"
        "\n\nint globalvar = 20;\n\n"
        "int& foo()\n"
        "{\n"
        "        return globalvar;\n"
        "}\n\n";

        std::cout << my_str;

        my_str = "\ncout << foo();\n";
        std::cout << my_str;
        std::cout << "PREDICT: cout << foo(); would return 20" << std::endl;
        std::cout << foo() << std::endl;

        foo() = 10;
        my_str = "\nfoo() = 10;\n";
        std::cout << my_str;
        std::cout << "PREDICT: foo() = 10; would return 10" << std::endl;
        std::cout << foo() << std::endl;

        foo();
        my_str = "\nfoo();\n";
        std::cout << my_str;
        std::cout << "PREDICT: foo(); would return 10" << std::endl;
        std::cout << foo() << std::endl;

        foo() = foo();
        my_str = "\nfoo() = foo();\n";
        std::cout << my_str;
        std::cout << "PREDICT: foo() = foo(); would return 10" << std::endl;
        std::cout << foo() << std::endl;

        std::map<int, float> mymap;
        mymap[10] = 5.6;
        
        int arr[] = {1, 2};
        int *p = &arr[0];
        *(p + 1) = 10;
        my_str = 
        "\nNEW CODE BLOCK:\n"
        "std::map<int, float> mymap;\n"
        "mymap[10] = 5.6;\n\n"
        "int arr[] = {1, 2};\n"
        "int *p = &arr[0];\n"
        "*(p + 1) = 10;\n";
        std::cout << my_str;
        std::cout << "OUTPUT: ARR=";
        std::cout << arr[0] << " " << arr[1] << std::endl << std::endl;

        return 0;
}
