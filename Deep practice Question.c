#include <stdio.h>
#include <conio.h>

int main()
{
    int a[5],r,c,t;
    char n[5][30],tm[30];
    printf("enter 5 name and per% :- \n");
    for(r=0; r<5; r++)
    {
        scanf("%[^\n]s",n[r]);
        scanf("%d",&a[r]);
        fflush(stdin);
    }
    for(r=0; r<5; r++)
    {
        for(c=0; c<4; c++)
        {
            if(a[c]<a[c+1])
            {
                t=a[c];
                a[c]=a[c+1];
                a[c+1]=t;
                
                strcpy(tm,n[c]);
                strcpy(n[c],n[c+1]);
                strcpy(n[c+1],tm);
            }
            
        }
    }
    for(r=0; r<5; r++)
    {
        printf("%s\t%d\n",n[r],a[r]);
        
    }
    
}
