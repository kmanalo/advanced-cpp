
/**********************************************************
 * File: prob1-writefile.cpp
 * 
 * Desc: How do you write data to a file?
 *
 * Author: Kevin Manalo
 */
#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream myStream;
    myStream.open("prob1-writefile.txt");
    myStream << "test" << endl << "1" << "2" << endl;

}
