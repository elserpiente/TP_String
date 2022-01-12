#include "String.h"

String::String(){
  _str[0]='\0';
  _len=0;
}

int String::length(){
  return _len;
}

String::String(const char *str){
  int i=0;
  while(str[i]!='\0'){
    _str[i]=str[i];
    i++;
  }
  _str[i]='\0';
  _len = i;
}

String::String(const String* str){
  int i;
  for(i=0;i<this->_len;i++){
    _str[i]=str->_str[i];
  }
  _str[i]='\0';
  _len = str->_len;
}

char* String::c_str(){
  return _str;
}

int String::capacity(){
  int capacity;
  capacity = sizeof(this->_str) + 4; //size in byte, one char is one byte and an int is 4 byte (length)
  return capacity;
}

int String::max_size(){
  int max_size;
  max_size = 100;
  return max_size;
}

int String::size(){
  return _len; // one char equals to one byte
}

void String::resize(int size_t,char c){
  int i=this->_len;
  for(i;i<this->_len+size_t;i++){
    _str[i]=c;
  }
  _str[i]='\0';
  _len = this->_len+size_t;
}

void String::clear(){
  this->_str[0] = '\0';
  this->_len = 0;
}
