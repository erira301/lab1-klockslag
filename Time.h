#ifndef TIME_H
#define TIME_H
#include <string>
#include <sstream>
//TDD, Test Driven Development

class Time{

 public:
  
  Time();
  Time(int h,int m,int s);
  Time (std::string time_string);
    int hour ();
  int minute ();
    int second ();
    bool is_am();
    bool is_pm();
    std::string to_string ()const;
    std::string to_string (bool PM_REP);
   operator std::string() const;
   
   Time operator ++(int);//post-inc
   Time& operator ++();//pre-inc
   Time& operator --(); //pre-dec
   Time operator --(int); //post-dec
   Time operator +(int const& rhs)const;
   Time operator -(int const& rhs)const;

   /*****STUFF ATT LÄGGA TILL*****/
   bool operator <(Time const& rhs)const;
   bool operator >(Time const& rhs)const;
   bool operator ==(Time const& rhs)const;
   bool operator !=(Time const& rhs)const;
   bool operator <=(Time const& rhs)const;
   bool operator >=(Time const& rhs)const;
 
   //ngn inläsnings med en "<<" operator
   //

friend std::istream& operator >>(std::istream& is,Time & item);
   
 private:
    bool is_valid();
    int hh,mm,ss;
    class Bad_time{};
  

};
std::istream& operator >>(std::istream& is,Time & item);
std::ostream& operator<<(std::ostream& os, Time const & item);

#endif
