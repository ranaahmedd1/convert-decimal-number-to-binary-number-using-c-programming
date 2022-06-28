#include <stdio.h>
#include <math.h>
void main(){
int x,reminder=0,binarynum=0,i=1;
printf("enter the  number \n");
scanf("%d",&x);
while(x!=0){
           reminder=x%2;
           binarynum+=reminder*i;
           x=x/2;
           i*=10;
             }
printf("%d",binarynum);
}
