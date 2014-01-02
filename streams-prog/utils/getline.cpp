/**********************************************************
 * File:getline.cpp
 * 
 * Desc: 
 *
 * Date:Wed 01 Jan 2014 
 *
 * Author: Kevin Manalo
 */
#include <iostream>
#include <string>
#include "getline.h"
using namespace std;

string GetLine() {
    string result;
    getline(cin, result);
    return result;
}
