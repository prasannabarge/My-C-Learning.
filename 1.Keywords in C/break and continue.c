#include <stdio.h>
int main(){
  for( int i=1;i<=10;i+=1){
       if(i==2){
        continue;
       } if(i==6){
        break;

       }
       printf("%d\t",i);

  }
  return 0;

}