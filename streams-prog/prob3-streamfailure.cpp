
/**********************************************************
 * File:prob3-streamfailure.cpp
 * 
 * Desc: Showing a stream failure, and checking for it.
 *
 * Author: Kevin Manalo
 */
#include <iostream>
#include <limits>
using namespace std;

int main() {

    while(true) {
        int intValue;
        cout << "Enter intValue: " << endl;
        cin >> intValue;

        if(cin.fail()) 
        {
            cout << "Could not process intValue, ";
            cout << "try again:" << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } 
        else 
            break;
    } 


}
