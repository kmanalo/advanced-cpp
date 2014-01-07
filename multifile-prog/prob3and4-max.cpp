/**********************************************************
 * File:prob3and4-max.cpp
 * 
 * Desc:Write a regular C++ function called Max that returns the larger of two
 * int values. Explain why it does not have the same problems as the macro MAX
 *
 * Date:Mon 06 Jan 2014 
 *
 * Author: Kevin Manalo
 */
#include <iostream>
using namespace std;

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define PLUS_ONE(x) ((x) + 1)

int max(int val1, int val2) {
    if (val1 > val2)
        return val1;
    else 
        return val2;
}
int main() {
    cout << max(10,20) << endl;
    cout << MAX(100,200) << endl;
    int x = PLUS_ONE(137);
    cout << x << endl;
}

