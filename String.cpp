#include "String.h"

String::String(){
  _str[0]='\0';
  _len=11;
}

String::String(const String& str){
  _str = str._str;
  _len = str._len;
}