#include <unistd.h>

void my_putchar(char c) {
  write(1, &c, 1);
}

void  my_print_reverse_alphabet(){
    char ch;
    for (ch = 'z'; ch >= 'a'; ch--){
        my_putchar(ch);
     }
     my_putchar('\n');
}

// int main(){
//     my_print_reverse_alphabet();
//     return 0;
// }