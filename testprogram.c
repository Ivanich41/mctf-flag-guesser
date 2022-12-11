#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
int getASCII(char* c) {
   int i = *c;
   return i;
}
int main() {
    printf("%d",getASCII("h"));
    return 0;
}
