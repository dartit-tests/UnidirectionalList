
#ifndef __CAST_TO_INT__H__f69ddd4f030842f9871529db2281b546__
#define __CAST_TO_INT__H__f69ddd4f030842f9871529db2281b546__

class CastToInt {
  public:
    CastToInt(int value)
      : _value(value)
    {      
    }
  
    operator int() const 
    {
      return _value;
    }
  private:
    int _value;
};

#endif // __CAST_TO_INT__H__f69ddd4f030842f9871529db2281b546__