/**********************************************************
 * File:prob10-openfile.cpp
 * 
 * Desc:Showing how to open and read a file, 
 * if the file does not exist then a message will encourage 
 * the user to try again 
 *
 * Date:Wed 01 Jan 2014 
 *
 * Author: Kevin Manalo
 */
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename;
    cout << "Enter filename to read and print: " << endl;
    cin >> filename;
    ifstream myStream(filename);
    string str;
    while (getline(myStream, str)) {
      cout << str << endl;
    }
}

