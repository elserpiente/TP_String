#include "String.h"

int main() {

  //First declaration of a simple String.
  //We'll  call it s1 and use it during all the tests.
  String s1("banane");
  //String sexcept("This string doesn't contains \"banane\" but it contain more than 100 characters to reach the point it raises an exception");
  //String sexcept("This string doesn't contains \"banane\" but it contain more than 100 characters to reach the point it");
  std::cout<<sexcept.c_str()<<'\n';
  std::cout<<sexcept.size()<<'\n';
  sexcept=sexcept+'a';
  std::cout<<sexcept.c_str()<<'\n';
  std::cout<<sexcept.size()<<'\n';
  //Let's check if our String has been successfully created !
  //To print it we use the function c_str() which
  //returns our string in the C string format.
  //So we'll make two birds one shot and test the
  //c_str() function as well.
  //It should print "banane".
  std::cout<<"String : "<<s1.c_str()<<std::endl;

  //Now we know our String has been created and
  //its text is "banane" but is its length correct ?
  //The answer is given by the function length() which
  //returns obviously the length of our String.
  //As the text is "banane" it should print 6.
  std::cout<<"\t Length : "<<s1.length()<<std::endl;

  //Well it works !
  //Another function called size() do the same thing.
  //So again it should print 6, let's see.
  std::cout<<"\t Size : "<<s1.size()<<std::endl;
  //Again it works.
  //Now we want to know the capacity of our String,
  //returned by the function capacity().
  //The capacity of a String is its allocated
  //storage space size.
  //In this case it should print 104.
  std::cout<<"\t Capacity : "<<s1.capacity()<<std::endl;
  //Yes, we're on the way to success !
  //But what is the maximum number of
  //characters our String can handle ?
  //The max_size() function will tell us.
  //Here we limated the size to 100 characters,
  //so it should print 100.
  std::cout<<"\t Max Size : "<<s1.max_size()<<std::endl;
  //Great ! But our String is a little bit alone,
  //let's give it a twin sister called (drum rolls...) s2 !
  std::cout<<"Copy in s2 ... "<<std::endl;
  String s2(s1);
  //How sweet is she ! Is she real ?
  //It should print "banane" and 6.
  std::cout<<"String (s2) : "<<s2.c_str()<<std::endl;
  std::cout<<"\t Length (s2) : "<<s2.length()<<std::endl;

  //Well I think she is.
  //Now we have two Strings, so we can empty
  //our first one by using the clear() function.
  std::cout<<"Clear ... "<<std::endl;
  s1.clear();
  //Now it should be all cleared, is it ?
  //It should print nothing and 0.
  std::cout<<"String : "<<s1.c_str()<<std::endl;
  std::cout<<"\t Length : "<<s1.length()<<std::endl;

  std::cout<<"String (s2): "<<s2.c_str()<<std::endl;
  std::cout<<"\t Length (s2): "<<s2.length()<<std::endl;
  //Why do we not take advantage of this to
  //test our empty() function ?
  //This function return 1 if the String is empty, 0 if not
  //It should print 1.
//std::cout<<"String : "<<s1.empty()<<std::endl;
  //It works ! but it's a little bit sad,
  //let's give our empty String a new content.
  //It could contain a single character.

//std::cout<<"!s1='b' ... "<<std::endl;
//s1='b';
  //Now it should be a b (please forgive me).
  //It should print 'b' and 1.
//std::cout<<"!String : "<<s1.c_str()<<std::endl;
//std::cout<<"\t !Length : "<<s1.length()<<std::endl;
  //Congratulation ! It works !
  //...
  //Wait a minute, it's just a little b, that's
  //not enough !
  //Let's give it the content "ban".
//std::cout<<"!s1=\"ban\" ... "<<std::endl;
//s1="ban";
  //Well it's a ban, just a simple ban.
  //Let's test it !
  //It should print "ban" and 3.
//std::cout<<"!String : "<<s1.c_str()<<std::endl;
//std::cout<<"\t !Length : "<<s1.length()<<std::endl;
  //It works... I know it's nothing but
  //look at it, it just look like the half of itself...
  //Hold on ! We always have its sister! Let's give it
  //her content !
  std::cout<<"s1=s2 ... "<<std::endl;
  s1=s2;
  //Now it should be the same as the beginning.
  //It should print "banane" and 6.
  std::cout<<"String : "<<s1.c_str()<<std::endl;
  std::cout<<"\t Length : "<<s1.length()<<std::endl;
  //Hurray !!!
  //But our first String is getting old, it should
  //have grown by the time. Let's add it some new characters.
  //We'll use the resize() function to do so.
  std::cout<<"\t Resize (s1.length()+3,'_') "<<std::endl;
  s1.resize(s1.length()+3,'_');
  //Now it should contain "banane___"
  //It should print "banane___" and 9.
  std::cout<<"String : "<<s1.c_str()<<std::endl;
  std::cout<<"\t Length : "<<s1.length()<<std::endl;
  std::cout<<"String (s2): "<<s2.c_str()<<std::endl;
  std::cout<<"\t Length (s2): "<<s2.length()<<std::endl;
  //That's too easy, I should win one billon euros !
  //...
  //It hurts.
  //Anyway, why do we not use our fisrt Strings
  //to help its sister to grow ?
  //Let's give them a 'b' to do so.
  std::cout<<"s2=s1+'b' ... "<<std::endl;
  s2=s1+'b';
  //Now we have a new content for s2.
  //It should print "banane___b" and 10.
  std::cout<<"String : "<<s1.c_str()<<std::endl;
  std::cout<<"\t Length : "<<s1.length()<<std::endl;
  std::cout<<"String (s2) : "<<s2.c_str()<<std::endl;
  std::cout<<"\t Length (s2) : "<<s2.length()<<std::endl;
  //She has well grown don't you think ?
  //But it seems she hasn't end its growth yet
  //Let's give her a "anane" to grow
//std::cout<<"!s2=s2+\"anane\" ... "<<std::endl;
//s2=s1+"anane";
  //Now we have s2 final content.
  //It should print "banane___banane" and 15.
//std::cout<<"!String (s2) : "<<s2.c_str()<<std::endl;
//std::cout<<"\t !Length (s2) : "<<s2.length()<<std::endl;
  //What a beautiful String !
  //It looks like s1 has met someone
  //and its name is ... s3 !
  //It should print "pomme" and 5.
//String s3("pomme");
//std::cout<<"!String (s3) : "<<s3.c_str()<<std::endl;
//std::cout<<"\t !Length (s3) : "<<s3.length()<<std::endl;
  //It's a pleasure to meet it.
  //And they're already waiting a child s4 !
  //We should reserve some place for it with
  //the function reserve() which reserve some capacity
  //in the storage space.
//s4.reserve(14);
  //It should print 14;
//std::cout<<"\t !Capacity : "<<s1.capacity()<<std::endl;
  //Ok, it's about to born.
//String s4;
//s4=s1+s3;
  //How cute ! Let's see its face.
  //It should print "banane___pomme" and 14.
//std::cout<<"!String (s4) : "<<s4.c_str()<<std::endl;
//std::cout<<"\t !Length (s4) : "<<s4.length()<<std::endl;
  //Well everything has been done and check so
  //I think it's the end of the journey...
  //You can leave now if you want.
  //Me, I will.
  //I hope you enjoy it and...
  //You're always here ?
  //What are you waiting for ?
  //There's sun outside, here
  //there's nothing to do after this line.


  return 0;
}
