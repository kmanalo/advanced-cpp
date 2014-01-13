/**********************************************************
 * File:colors.cpp
 * 
 * Desc:A precursor to XMacros 
 *
 * Date:Sat 11 Jan 2014 
 *
 * Author: Kevin Manalo
 */
#include <iostream>
using namespace std;

enum Color {Red,Green,Blue,Cyan,Magenta,Yellow};

string ColorToString(const Color &c){
    switch(c) {
        case Red: return "Red";
        case Blue: return "Blue";
        case Green: return "Green";
        case Cyan: return "Cyan";
        case Magenta: return "Magenta";
        case Yellow: return "Yellow";
        default: return "<unknown>";
    }
}

Color GetOppositeColor(const Color &c){
    switch(c) {
        case Red: return Cyan;
        case Blue: return Yellow;
        case Green: return Magenta;
        case Cyan: return Red;
        case Magenta: return Green;
        case Yellow: return Blue;
        default: return c;
    }
}

int main() {
     
    cout << ColorToString(Red) << endl;
    cout << ColorToString(Blue) << endl;
    cout << ColorToString(GetOppositeColor(Red)) << endl;
    cout << ColorToString(GetOppositeColor(Blue)) << endl;

}

