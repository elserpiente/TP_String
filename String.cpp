#include "String.h"

String::String(){
  _str[0]='\0';
  _len=0;
}

String::String(const char *str){
  //We want to construct our String
  //We start by setting the values
  //in our _str variable with a loop
  int i=0;
  while(str[i]!='\0' && i<100){
    this->_str[i]=str[i];
    i++;
  }
  //We get out off the loop if we end
  //our char table or if we pass the
  //max size of our String.
  if (i==100){
    this->_str[i-1]='\0';
    this->_len = i-1;
  }
  //If we pass the max size of our String
  //we have too be sure it ends by a null
  //character because the one of the char
  //table hasn't been put in our String
  else{
    this->_len = i;
  }
  //Finally we give the number of
  //characters we put to our _len variable

}

String::String(const String* str){
  int i=0;
  while(i<100){
    this->_str[i]=str->_str[i];
    i++;
  }
  this->_str[i]=str->_str[i];
  this->_len=str->_len;
}

int String::length(){
  //We return our length
  return _len;
}

char* String::c_str(){
  //We return our char table
  char c_string[this->_len];
  for (int i=0;i<this->_len;i++){
    c_string[i]=this->_str[i];
  }
  return c_string;
}

int String::capacity(){
  int capacity;
  capacity = sizeof(this->_str) + 4; //size in byte, one char is one byte and an int is 4 byte (length)
  return capacity;
}

int String::max_size(){
  //Retuns the theorical maximum number
  //of characters our String can contain
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
