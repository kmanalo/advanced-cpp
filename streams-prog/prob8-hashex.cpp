/**********************************************************
 * File:prob8-hashex.cpp
 * 
 * Desc: Write a function HasHexLetters that accepts an int and returns whether
 * or not that integer's hexademical representation has letters
 *
 * Date:Thu 02 Jan 2014 
 *
 * Author: Kevin Manalo
 */
#include <iostream>
#include <sstream>
// Need for the use of 'all' and 'is_alpha()'
#include <boost/algorithm/string/predicate.hpp>
#include <boost/algorithm/string/classification.hpp>
using namespace std;

bool HasHexLetters(int num){
    // c++11
    stringstream stream;
    stream << hex << num;
    string result( stream.str() );
    cout << "Hex String is:" << result << endl;
    bool isAlpha = all( result, boost::algorithm::is_alpha());
    cout << "Hex contains letters? " << boolalpha << isAlpha << endl;

}
int main() {
    cout << "Enter integer number to be converted to hex: " << endl;

    int num;
    cin >> num;
    HasHexLetters(num);

}

