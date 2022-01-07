#include<stdio.h>
#include <stdlib.h>


int my_isdigit(char ch)
{
if (ch >= '0' && ch <= '9'){
    return 1;
    }else{
        return 0;
    }
}

//   int main(){    
//            printf("%d", my_isdigit(7));
//    return 0;
//  }