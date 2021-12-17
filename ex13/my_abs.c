#include<stdio.h>
#include <stdlib.h>

int my_abs(int x){
  if (x < 0){
     return (x * -1);
  }else {
      return x;
  }
}

// int main(){
//     printf("%d", abs(-30));
//     return 0;
// }