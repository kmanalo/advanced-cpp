
/**********************************************************
 * File:prob7-getbool.cpp
 * 
 * Desc: read 'true' or 'false' from the user 
 * http://stackoverflow.com/a/3613424/992834
 *
 * Author: Kevin Manalo
 */
#include <iostream>
#include <sstream> // for streamstring
#include <string>
#include <boost/algorithm/string.hpp> 
using namespace std;

string GetLine() {
    string result;
    getline(cin, result);
    return result;
}

bool to_bool(string str) {
    // input stringstream
    istringstream is(str);
    bool b;
    is >> boolalpha >> b;
    return b;
    nasd
}

float GetBoolean() {
    // use boolalpha
    while(true) {
        stringstream converter;
        converter << GetLine();
        
        /* Try reading an float, continue if we succeeded. */
        bool result;
        converter >> result;
        string convertString;
        convertString = converter.str();
        boost::algorithm::to_lower(convertString);

        if(convertString == "true" or
           convertString == "false") {
            char remaining;
            if(converter >> remaining)
                cout << "Unexpected character: " << remaining << endl;
            else
                return to_bool(convertString);
        } else
            cout << "Please enter true/false" << endl;

        cout << "Retry: ";
    }
}

int main() {
    // 1st concept
    stringstream myStream;
    myStream << "Hi " << 1337 << endl;
    cout << myStream.str();

    // 2nd concept use GetInteger
    bool myBool;
    cout << "Enter true/false:" << endl;
    myBool = GetBoolean(); 
    cout << "You entered: " << boolalpha << myBool << endl;

}
