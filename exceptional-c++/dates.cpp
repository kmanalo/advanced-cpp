
/**********************************************************
 * File:dates.cpp
 * 
 * Desc: Working through common errors in C++ STL
 *
 * Date:Fri 03 Jan 2014 
 *
 * Author: Kevin Manalo
 */
#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <cassert>
using namespace std;

typedef string Date;

Date TodaysDate() { return "08/09/95"; } // to fake up a TodaysDate() 

int main() 
{
  /* format 1
  vector<Date> e;
  copy( istream_iterator<Date>( cin ),
        istream_iterator<Date>(),
        back_inserter( e ) );
   */

  vector<Date> e((istream_iterator<Date>(cin)),
                  istream_iterator<Date>());

  // The date may be inserted at a point where it's not printed
  // Also, perform the insert
  e.insert( e.end() - 1, TodaysDate() );

  vector<Date>::iterator first =
        find( e.begin(), e.end(), "01/01/95" );
  vector<Date>::iterator last;

  last = find( e.begin(), e.end(), "12/31/95" );
  // as seen in STL docs
  assert(last == e.end() || *last == "12/31/95");

  copy( first,
        last,
        ostream_iterator<Date>( cout, "\n" ) );

}


