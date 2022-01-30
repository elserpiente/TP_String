#include "String.h"
#include <string>

void testC_str(std::string& v_str,String& f_str){
  char* c_s=f_str.c_str();
  std::cout<<"True string : "<<v_str.c_str()<<'\n';
  std::cout<<"False string : "<<f_str.c_str()<<'\n';
}

void testLength(std::string& v_str,String& f_str){
  if (v_str.length()==f_str.length()){
    std::cout<<"Test length() conforme"<<'\n';
  } else {
    std::cout<<"Test length() non conforme"<<'\n';
  }
}

void testSize(std::string& v_str,String& f_str){
  if (v_str.size()==f_str.size()){
    std::cout<<"Test size() conforme"<<'\n';
  } else {
    std::cout<<"Test size() non conforme"<<'\n';
  }
}

void testCapacity(std::string& v_str,String& f_str){
  if (v_str.capacity()==f_str.capacity()){
    std::cout<<"Test capacity() conforme"<<'\n';
  } else {
    std::cout<<"Test capacity() non conforme"<<'\n';
  }
}

void testMaxSize(std::string& v_str,String& f_str){
  if (100==f_str.max_size()){
    std::cout<<"Test max_size() conforme"<<'\n';
  } else {
    std::cout<<"Test max_size() non conforme"<<'\n';
  }
}

void testClear(String& f_str){
  String as_to_be_cleared(f_str);
  as_to_be_cleared.clear();
  if(as_to_be_cleared.c_str()[0]=='\0' && f_str.c_str()[0]!='\0'){
    std::cout<<"Test clear() conforme"<<'\n';
  }else{
    std::cout<<"Test clear() non conforme"<<'\n';
  }

}

void testEmpty(String& s){
  bool result = s.empty();
  if (result){ std::cout<< "The string \""<<s.c_str()<<"\" is empty : true"<<std::endl;}
  else { std::cout<< "The string \""<<s.c_str()<<"\" is empty : false"<<std::endl;}
}

void testStringEg(){
  String s("non");
  String t("Test =String& conforme");
  s=t;
  for(int i = 0; i<s.length(); i++){
    std::cout<<s.c_str()[i];
  }
  std::cout<<std::endl;
}

void testStringAdd(){
  String s1("Test");
  String s2(" +String& conforme");

  s1=s1+s2;
  std::cout<<s1.c_str()<<std::endl;
}

void testReserve(String& s){
  int resize = 30;
  int size=s.length();
  s.reserve(30);
  if((s.capacity() == 30)&&(s.length()==size)){
    std::cout<<"Test reserve() conforme"<<'\n';
  }
  else {
    std::cout<<"Test reserve() non conforme"<<'\n';
  }
}

void testCharAdd(){
  String s1("Test +char conform");
  char c='e';
  String s2;
  s2=s1+c;
  std::cout<<s2.c_str()<<'\n';
}

void testTableCharAdd(){
  String s1("Test +char* ");
  char c[9]="conforme";
  String s2;
  s2=s1+c;
  std::cout<<s2.c_str()<<'\n';
}

void testTableCharEg(){
  String s("non");
  s="Test =char* conforme";
  for(int i = 0; i<s.length(); i++){
    std::cout<<s.c_str()[i];
  }
  std::cout<<std::endl;
}

void testCharEg(){
  String s("non");
  s='T';
  for(int i = 0; i<s.length(); i++){
    std::cout<<s.c_str()[i];
  }
  std::cout<<"est =char conforme"<<std::endl;
}

void testResize(){
  String s("banane");
  s.resize(5,'a');
  char t[6]={'b','a','n','a','n','a'};
  int eq=0;
  for(int i=0;i<5;i++){
    if(s.c_str()[i]==t[i]){
      eq++;
    }
  }
  if (eq==5){
    std::cout<<"Test resize() < conforme"<<'\n';
  }
  s.resize(6,'a');
  eq=0;
  for(int i=0;i<6;i++){
    if(s.c_str()[i]==t[i]){
      eq++;
    }
  }
  if (eq==6){
    std::cout<<"Test resize() > conforme"<<'\n';
  }
}

void testLimit(char* c){
  try{
    String s(c);
    std::cout<<"Test construire =100 valide conforme"<<'\n';
  }catch(std::invalid_argument& e){
    std::cout<<"Test construire >100 invalide conforme"<<'\n';
  }
  int i=0;
  while(c[i]!='\0'){
    i++;
  }
  String s2("a");

  try{
    s2.resize(i,'a');
    std::cout<<"Test resize() =100 valide conforme"<<'\n';
  }catch(std::invalid_argument& e){
    std::cout<<"Test resize() >100 invalide conforme"<<'\n';
  }

  char c1[2];
  c1[0]=c[0];
  c1[1]='\0';
  char c2[i-1];
  int j;
  for (j=0;j<i;j++){
    c2[j]=c[j+1];
  }
  c2[j-1]='\0';
  String s1(c1);
  s2=c2;

  String s3;
  try{
    s3=s1+c2;
    std::cout<<"Test sum char* =100 valide conforme"<<'\n';
  }catch(std::invalid_argument& e){
    std::cout<<"Test sum char* >100 invalide conforme"<<'\n';
  }

  try{
    s3=s1+s2;
    std::cout<<"Test sum String =100 valide conforme"<<'\n';
  }catch(std::invalid_argument& e){
    std::cout<<"Test sum String >100 invalide conforme"<<'\n';
  }


  try{
    s3=c;
    std::cout<<"Test =char* =100 valide conforme"<<'\n';
  }catch(std::invalid_argument& e){
    std::cout<<"Test =char* >100 invalide conforme"<<'\n';
  }

  char c3[i-1];
  for (j=0;j<i;j++){
    c3[j]=c[j];
  }
  c3[j-1]='\0';
  s2=c3;
  try{
    s3=s2+c[j+1];
    std::cout<<"Test sum char =100 valide conforme"<<'\n';
  }catch(std::invalid_argument& e){
    std::cout<<"Test sum char >100 invalide conforme"<<'\n';
  }


}

int main() {
  std::string true_string("banane_banane");
  String false_string("banane_banane");
  //Getters
  std::cout<<"=================================================="<<'\n';
  std::cout<<"Tests on getters"<<'\n';
  std::cout<<"=================================================="<<'\n';
  testC_str(true_string,false_string);
  testLength(true_string,false_string);
  testSize(true_string,false_string);
  testCapacity(true_string,false_string);
  testMaxSize(true_string,false_string);
  //Other
  std::cout<<"=================================================="<<'\n';
  std::cout<<"Tests on other functions"<<'\n';
  std::cout<<"=================================================="<<'\n';
  testResize();
  testClear(false_string);
  testEmpty(false_string);
  String emp("");
  testEmpty(emp);
  testReserve(false_string);
  //Operators
  std::cout<<"=================================================="<<'\n';
  std::cout<<"Tests on operators"<<'\n';
  std::cout<<"=================================================="<<'\n';
  testCharEg();
  testTableCharEg();
  testStringEg();
  testCharAdd();
  testTableCharAdd();
  testStringAdd();
  //Limits
  std::cout<<"=================================================="<<'\n';
  std::cout<<"Tests on limits"<<'\n';
  std::cout<<"=================================================="<<'\n';
  char c[100]="|->10 char|->20 char|->30 char|->40 char|->50 char|->60 char|->70 char|->80 char|->90 char|>99 char";
  std::cout<<"String size = 100 "<<'\n';
  testLimit(c);
  char c2[101]="|->10 char|->20 char|->30 char|->40 char|->50 char|->60 char|->70 char|->80 char|->90 char|>100 char";
  std::cout<<"String size = 101"<<'\n';
  testLimit(c2);
}
