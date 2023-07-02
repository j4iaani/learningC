#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int number;
    printf("Choose a number and we will return his multiplication table:");
    scanf("%d", &number);

for(int i = 0; i <= 10; i++){
    int value = number * i;
    printf("%d x %d = %d \n", number, i, value);
}

}