#include "String.h"

String::String(){
  _str[0]='\0';
  _len=0;
}

int String::length(){
  return _len;
}

String::String(const String& str){
  _str = str._str;
  _len = str._len;
}
