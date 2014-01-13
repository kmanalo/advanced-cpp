/**********************************************************
 * File:147_using_set.cpp
 * 
 * Desc: Using Set (Using Set <set>)
 *
 * Credits: 
 * http://stackoverflow.com/questions/2672593/easy-way-to-check-if-item-is-in-list
 * http://www.reddit.com/r/dailyprogrammer/comments/1undyd/010714_challenge_147_easy_sport_points/
 * http://www.cplusplus.com/reference/set/set/find/
 *
 * Date:Wed 08 Jan 2014 
 *
 * Author: Kevin Manalo
 */
#include <iostream>
#include <set> 
using namespace std;

int main()
{
    // Part 1
    std::set<int> myset {1,2,4,5};
    unsigned int score;
    while(true) {
        cout << "Enter an American Football Score:" << endl;
        cin >> score;
        if (score == 0) break; 
        if (myset.find(score) != myset.end()) {
            cout << "Score is invalid" << endl;
        } else {
            cout << "Score is valid" << endl;
        }
    }

    // Part 2
    // set<int> myset;
    set<int>::iterator it;

    // set some initial values:
    for (int i=1; i<=5; i++) myset.insert(i*10);    // set: 10 20 30 40 50

    it=myset.find(20);
    myset.erase (it);
    myset.erase (myset.find(40));

    cout << "myset contains: " << endl;
    /*
    for (it=myset.begin(); it!=myset.end(); ++it) {
        cout << ' ' << *it;
        cout << '\n';
    }
    */
    for( const auto& e : myset ) {
        cout << ' ' << e;
    }
    cout << endl;
    return 0; 
}
