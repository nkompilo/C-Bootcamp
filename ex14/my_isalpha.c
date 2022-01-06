#include<stdio.h>
#include <stdlib.h>

char my_isalpha(char ch){
if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
{
    return 1;
}else {
    return 0;
 }
}

//  char main(){    
//       printf("%c", my_isalpha("R"));
//     return 0;
//  }