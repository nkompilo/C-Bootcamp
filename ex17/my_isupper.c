#include <stdio.h>
#include <stdlib.h>

int my_isupper(char ch)
{
if (ch >= 'A' && ch <= 'Z'){
    return 1;
    }else{
        return 0;
    }
}

// int main(){
//     printf("%c", my_isupper("R"));
//     return 0;
//  }