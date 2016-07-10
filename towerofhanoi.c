# abinaya3
#include <stdio.h>
#include<conio.h>
void toh(int num,char startpole,char endpole,char temppole){
if(num==1){
printf("\nMoving disc 1 from peg %c to peg %c",startpole,endpole);
return;
}
toh(num-1,startpole,temppole,endpole);
printf("\nMoving disc %d from peg %c to peg %c",num,startpole,endpole);
toh(num-1,endpole,startpole,temppole);
}
int main(){
int num;
scanf("%d",&num);
clrscr();
toh(num,'S','E','T');
return 0;
}
