#include <stdio.h>

int main(void) {
  int x, a=2 , b=1;
  scanf("%d",&x);
  if(x==1){
    printf("1/1");
    return 0;
  }
  while(1){
    if(a%2==0){
      if((b<=x)&&(x<=a+b)){
      printf("%d/%d",x-b,a-x+b+1);
      break;}
    }
    else if(a%2!=0){
      if((b<=x)&&(x<=a+b)){
      printf("%d/%d",a-x+b+1,x-b);
      break;}
    }
    b=a+b;
    a++;

  }



  return 0;
}