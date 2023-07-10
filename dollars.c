#include<stdio.h>
#include<stdlib.h>

int main(){
 
   int amount;
   printf("Enter amount in US dollars");
   scanf("%d",&amount);
//initialize
int a;
int b;
int c;
int d;
a=20;
b=10;
c=5;
d=1;
switch(amount){
//divides entered price with a
   case'a':
  printf("%d/a");
  break;
//divides entered price with b
  case'b':
  printf("%d/b");
  break;

//divides entered price with c
  case'c':
  printf("%d/c");
  break;
//divides entered price with d
  case'd':
  printf("%d/d");
  break;
//ends the switch statement if the above letters are not entered 
  default:
printf("Invalid enter the above letters");
break;
}
return 0;
}
