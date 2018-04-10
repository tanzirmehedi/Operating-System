#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
   srand(time(NULL));
   int i;
   for(i = 65; i<75; i++)
   printf("%c\t", rand());
}
