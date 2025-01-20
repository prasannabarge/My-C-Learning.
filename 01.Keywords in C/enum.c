#include <stdio.h>

  enum week{Mon,Tue,Wed,Thur,Fri,Sat,Sun};

  //Driver code
  int main(){
    //object of the enum (week) ,called day
    enum week day;
    day = Wed;
    printf("%d",day);
    return 0;
  }
//. By default, the value of each constant is it’s index (starting at zero), 