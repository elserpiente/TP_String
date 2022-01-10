#include "String.h"

String::String(){
  _str[0]='\0';
  _len=0;
}

int String::length(String s){
  return _len
}

String::String(const String& str){
  _str = str._str;
  _len = str._len;
}

int String::capacity(){
  int capacity;
  capacity = sizeof(this._str) + 4; //size in byte, one char is one byte and an int is 4 byte (length)
  return capacity;
}
