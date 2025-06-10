#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
int main() {
    system("chcp 65001 > nul");
    setlocale(LC_ALL, ".utf8");
    
    int teste[] = {1,2,3,4,5,6,7};
    printf("%d", sizeof(teste) / sizeof(teste[0]));

    return 0;
}