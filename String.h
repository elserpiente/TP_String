#include <iostream>


class String{
protected:
  char _str[100] ={};
  int _len;
public:
  String();
  int length(String s);
  ~String()=default;
};
