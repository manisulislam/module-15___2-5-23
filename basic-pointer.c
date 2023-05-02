#include<stdio.h>
int main(){
  int x=10;
  int * ptr= &x;
  printf("x address %p\n", &x)        ;
  printf("ptr value %p\n", ptr)        ;
  printf("ptr address %p\n", &ptr)        ;
  printf("ptr size %d\n", sizeof(ptr))        ;
  


  return 0;
}
