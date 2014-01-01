
/**********************************************************
 * File:prob9-drawtriangle.cpp
 * 
 * Desc: Showing what the setw and setfill manipulators do
 * in an example called DrawTriangle
 *
 * Author: Kevin Manalo
 */
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

string DrawTriangle(int height, char symbol) {
    ostringstream os;
    height = height * 2;
    int complement_width = height;
    /* We enforce a single character to be printed in row 1, and grow the 
     * triangle by 2 'pixels' for each new row,
     * To compensate we need to work with a 'working height' which is double
     * the specified height 
     */
    for (auto i=1; i<height; i=i+2) {
        complement_width = (height - i) / 2; 
        // fill with frontfill white 
        // then the actual symbol fill
        os << setw(complement_width) << setfill(' ') << "" 
           << setw(i) << setfill(symbol) << "" << "\n";
    }
    /* Extra ruler print to show the actual width calculated */
    int j = 1;
    for (auto i=1; i<height; ++i) {
        if (i % 10 == 0) j = 0;
        os << j;
        ++j;
    }
    os << "\n";
    return os.str();
}
int main() {
    string triangleString;
    int height;
    char symbol; 
    cout << "Enter integer height and character symbol: " << endl;
    cin >> height;
    cin >> symbol;
    triangleString = DrawTriangle(height, symbol);
    cout << triangleString << "Draw triangle with height" << height 
         << " and symbol \'" << symbol << "\'" << endl;
}
