
#include <iostream>
#include <sstream>

#include "CastToInt.h"
#include "UnidirectionalList.hpp"

using namespace std;

int main() {
  UnidirectionalList<int> list1;
  list1.pushBack(10);
  list1.pushBack(12);
  list1.pushBack(13);
  
  if( string("10, 12, 13") != list1.toString() ) {
    return 1;
  }
  
  UnidirectionalList<int> list2;
  list2.pushBack(14);
  list2.pushBack(15);
  list2.pushBack(16);
  
  UnidirectionalList<int> list3 = list1 + list2;
  if( string("10, 12, 13, 14, 15, 16") != list1.toString() ) {
    return 1;
  }
  
  if( 6 != list1.getSize() ) {
    return 1;
  }
  
  UnidirectionalList<int> list4(list3);
  if( list4 != list3 ) {
    return 1;
  }
  list4.pushBack(16);
  if( list4 == list3 || 7 != list4.getSize() || 6 != list4.getSize() ) {
    return 1;
  }

  if( 10 != list1[0] || 12 != list1[1] || 13 != list1[2] ) {
    return 1;
  }
  
  try {
    list1[3];
    return 1;
  }
  catch(OutOfBorderException& e) {
    // свалится должен сюда
  }
  
  try {
    list1[3];
    return 1;
  }
  catch(OutOfBorderException& e) {
    // свалится должен сюда
  }
  
  UnidirectionalList<CastToInt> list5;
  list5.pushBack(1);
  list5.pushBack(2);
  list5.pushBack(3);
  
  UnidirectionalList<int> list6(list5);
  if( string("1, 2, 3") != list6.toString() ) {
    return 1;
  }
  
  std::stringstream sstream;
  sstream << list6;
  if( string("1, 2, 3") != sstream.str() ) {
    return 1;
  }
  
  return 0;
}