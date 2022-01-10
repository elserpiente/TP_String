#include "String.h"

String::String(){
  _str[0]='\0';
  _len=0;
}

int String::length(){
  return _len;
}

String::String(const String* str){
  for(int i=0;i<this->_len;i++){
    _str[i]=str->_str[i];
    i++;
  }
  _len = str->_len;
}

char* String::getStr(){
  return _str;

int String::capacity(){
  int capacity;
  capacity = sizeof(this._str) + 4; //size in byte, one char is one byte and an int is 4 byte (length)
  return capacity;
}
