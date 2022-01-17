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
