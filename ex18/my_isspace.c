#include <stdio.h>
#include <stdlib.h>

int my_isspace(char ch){
    if(ch == ' '){
        return 1;
    }else{
        return 0;
    }
}
   
//    int main(){
//        printf("%c", my_isspace("R"));
//        return 0;
//    }