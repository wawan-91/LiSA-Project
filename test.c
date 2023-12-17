#include <stdio.h>
#include <string.h>

int main() 
{
    int num;
    int counter = 0;
    scanf("%d", &num);

    do
    {
        counter++;
        num /= 10;
    } while (num != 0);

    printf("hasil : %d", counter);
    
}





    




    



   


