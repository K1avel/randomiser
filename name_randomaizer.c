#include<stdio.h>
#include<stdlib.h>

int main()
{

    char n[100];
    srand(time(NULL)%110);

    int i,j,length,temp;

    printf("introdu numele: ");
    scanf("%[^\n]s",&n);

    for(i = 0; n[i] != '\0'; ++i)
    {

        length = i;
    }
    length+=1;
    i = length;
    while(--i>0)
    {
        j = (rand()%length);
        temp= n[j];
        n[j]= n[i];
        n[i]= temp;
    }

    for(i=0; i<=length; i++)
    {

        printf("%c", n[i]);

    }

}
