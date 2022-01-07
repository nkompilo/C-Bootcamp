#include <stdio.h>
#include <stdlib.h>

// int main(){
//     my_print_alphabet();
//     return 0;
// }

void my_putchar(char c) {
  write(1, &c, 1);
}

void  my_print_alphabet(){
    char ch;
    for (ch = 'a'; ch <= 'z'; ch++){
        my_putchar(ch);
     }
     my_putchar('\n');
}
    