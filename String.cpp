#include "String.h"

String::String(){
  this->_str[0]='\0';
  this->_len=0;
  this->_storage=0;
}

String::~String(){
  delete(this->_str);
}

String::String(const char *str){
  int nbchar=0;
  while(str[nbchar]!='\0'){
    nbchar++;
  }

  if ( nbchar+1<100 ) {
    //We want to construct our String
    //We start by setting the values
    //in our _str variable with a loop
    this->_str=new char[nbchar+1]();
    int i=0;
    while(str[i]!='\0' && i<100){
      this->_str[i]=str[i];
      i++;
    }
    this->_str[i]='\0';
    this->_len=nbchar;
    this->_storage=0;
  }else{
    throw std::invalid_argument( "max string size allowed is 99 char, please reduce your string's size" );
  }
}

String::String(const String& str){
  int nbchar=str._len;
  this->_str=new char[nbchar]();
  int i=0;
  while(str._str[i]!='\0'){
    this->_str[i]=str._str[i];
    i++;
  }
  this->_str[i]='\0';
  this->_len=str._len;
  this->_storage=0;
}

int String::length(){
  //We return our length
  return this->_len;
}

char* String::c_str(){
  //We return our char table
  return this->_str;
}

int String::capacity(){
  int capacity;
  if (this->_len>0){
    capacity=1;
    for (int i=0;i<=this->_len;i++){
      if(i==capacity){
        capacity=capacity*2;
      }else{
        capacity=i;
      }
    }
  }else{
    capacity=0;
  }
  if(capacity>this->_storage){
    this->_storage=capacity;
  }
    return this->_storage;
}

int String::max_size(){
  //Retuns the theorical maximum number
  //of characters our String can contain
  return 100;
}

int String::size(){
  return _len; // one char equals to one byte
}


void String::resize(int size_t,char c){
  if (size_t<=this->_len){
    this->_str[size_t] = '\0';
    this->_len = size_t;
  }else{
    String save(this->c_str());
    delete(this->_str);
    this->_str=new char[size_t]();
    int i=0;
    while(save.c_str()[i]!='\0' && i<100){
      this->_str[i]=save.c_str()[i];
      i++;
    }
    while(i<size_t){
      this->_str[i]=c;
      i++;
    }
    this->_str[i]='\0';
    this->_len=size_t;
  }
}

void String::clear(){
  this->_str[0] = '\0';
  this->_len = 0;
}

bool String::empty(){
  bool ret = false ;
  if ((this->_len == 0)&&(this->_str[0]=='\0')){ret = true;}
  return ret; 
}
