
/**********************************************************
 * File:prob6-getreal.cpp
 * 
 * Desc: read a real number from the user
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

float GetReal() {
    while(true) {
        stringstream converter;
        converter << GetLine();
        
        /* Try reading an float, continue if we succeeded. */
        float result;
        if(converter >> result) {
            char remaining;
            if(converter >> remaining)
                cout << "Unexpected character: " << remaining << endl;
            else
                return result;
        } else
            cout << "Please enter a real." << endl;

        cout << "Retry: ";
    }
}

int main() {
    // 1st concept
    stringstream myStream;
    myStream << "Hi " << 1337 << endl;
    cout << myStream.str();

    // 2nd concept use GetInteger
    int myInt;
    cout << "Enter a float:" << endl;
    myInt = GetReal(); 

}
