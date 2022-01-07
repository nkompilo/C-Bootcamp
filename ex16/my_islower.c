#include<stdio.h>
#include <stdlib.h>

char my_islower(char ch)
{
if ((ch >= 'a' && ch <= 'z')){
    return 1;
    }else{
        return 0; 
    }
}
//   char main(){    
//        printf("%c", my_islower("R"));
//      return 0;
//   }