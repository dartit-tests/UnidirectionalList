
#include "CastToInt.h"

CastToInt::CastToInt(int value)
  : _value(value)
{      
}
  
CastToInt::operator int() const 
{
  return _value;
}