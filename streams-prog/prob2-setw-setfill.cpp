
/**********************************************************
 * File:prob2-setw-setfill.cpp
 * 
 * Desc: Showing what the setw and setfill manipulators do
 *
 * Author: Kevin Manalo
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << setfill('-') << setw(20) << "" << endl;
    cout << setfill('x') << setw(10) << "" << endl;
}
