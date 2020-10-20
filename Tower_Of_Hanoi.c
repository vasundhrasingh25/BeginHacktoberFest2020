#include<stdio.h>
void towerOfHanoi(int n,char a,char b,char c) {
   if(n>0) {
      TOH(n-1,a,b,c);
      printf("\n%c to %c",a,b);
      towerOfHanoi(n-1,c,b,a);
   }
}
int main() {
   int n=3;
   towerOfHanoi(n,'A','B','C');
}
