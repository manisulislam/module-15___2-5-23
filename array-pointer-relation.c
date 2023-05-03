#include<stdio.h>
int main(){
  int ar[5]        ={10,20,30,40,50};
  printf("0th index er address-%p\n",&ar[0]);
  printf("ar er address-%p\n", ar );
//ar[0] and *ar value
  printf("0th value-%d\n",ar[0]);
  printf("ar er value-%d\n", *ar);

  //ar[1] and (*ar+1)


  printf("1th index er value-%d\n",ar[1]);
  printf("1th index er value with pointer-%d\n",*(ar+1));
  //ar[2] and (*ar+2)
  printf("2nd index er value-%d\n", ar[2]);
  printf("2nd index er value - %d\n",*(ar+2));


  //four types
  printf("%d\n",*(ar+1));
  printf("%d\n",*(1+ar));
  printf("%d\n",ar[1]);
  printf("%d\n",1[ar]);
  
  return 0;
}
