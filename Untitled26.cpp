#include<stdio.h>
int main() 
{
 i, a=0;
 for(i=0; i<3; i++){if(i==2) 
 continue;
 a+=i;
 if(i>1) 
 break;
 printf(“%d”, a);
 }
 
 
 }
