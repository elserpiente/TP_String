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

int String::capacity(){
  int capacity;
  capacity = sizeof(this._str) + 4; //size in byte, one char is one byte and an int is 4 byte (length)
  return capacity;
}

int String::size(){
  return _len; // one char equals to one byte
}

void String::clear(){
  this->_str[0] = "\0";
  this->_len = 0;
}
