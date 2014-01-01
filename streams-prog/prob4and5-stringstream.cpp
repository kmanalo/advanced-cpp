
/**********************************************************
 * File:prob4and5-stringstream.cpp
 * 
 * Desc: What is a stringstream, and write a function converting an integer to a
 * string.
 *
 * Author: Kevin Manalo
 */
#include <iostream>
#include <sstream> // for streamstring
#include <string>
using namespace std;

string GetLine() {
    string result;
    getline(cin, result);
    return result;
}

int GetInteger() {
    while(true) {
        stringstream converter;
        converter << GetLine();
        
        /* Try reading an int, continue if we succeeded. */
        int result;
        if(converter >> result) {
            char remaining;
            if(converter >> remaining)
                cout << "Unexpected character: " << remaining << endl;
            else
                return result;
        } else
            cout << "Please enter an integer." << endl;

        cout << "Retry: ";
    }
}

string IntegerToString(int myInt) {
    stringstream converter;
    converter << myInt;
    return converter.str();
}

int main() {
    // 1st concept
    stringstream myStream;
    myStream << "Hi " << 1337 << endl;
    cout << myStream.str();

    // 2nd concept use GetInteger
    int myInt;
    cout << "Enter an integer:" << endl;
    myInt = GetInteger(); 

    // 3rd concept use IntegerToString to collect string result
    string myStr;
    myStr = IntegerToString(myInt);
    cout << "x" + myStr + "x" << endl;

}
