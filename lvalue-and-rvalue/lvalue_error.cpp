/**********************************************************
 * File: lvalue_error.cpp
 *
 * Adapted by: Kevin Manalo
 */

int foo() {return 2;}

int main()
{
    foo() = 2;

    return 0;
}
