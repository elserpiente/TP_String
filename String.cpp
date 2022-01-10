#include "String.h"

String::String(){
  _str[0]='\0';
  _len=0;
}

int String::length(){
  return _len;
}

String::String(const String& str){
  //_str = str._str;
  _len = str._len;
}

char* String::c_str(){
  return _str;
}

int String::size(){
  return _len; // one char equals to one byte
}
