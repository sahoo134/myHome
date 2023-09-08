#include<stdio.h>
#include<time.h>
void delay(int);
void delay(int nc)
{
	int ms=1000*nc;
	clock_t start_time = clock();
	while(clock() <  start_time + ms)
	;
}
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        delay(1);
        for(j=1;j<15;j++)
        {
            
            if(i>=6-j && i+10>j)
            printf("*   ");
            else
            printf("    ");
        }
        printf("\n");
    }
     for(i=1;i<=8;i++)
    {
        delay(1);
        for(j=1;j<15;j++)
        {
            if(j==3 || j==4 || j==11 || j==12 ||(i==5 && j>2 && j<13 && j!=10 && j!=5) || (i>=6 &&(j==6 || j==9))||(i==1 &&(j==1 || j==2 || j==14 || j==13)))
            printf("*   ");
            else
            {
                if(i==2 && j==6)
                {
                    printf("   SUMANTA      ");
                    j=9;
                }
                 else if(i==3 && j==6)
                {
                    printf("    HOUSE       ");
                    j=9;
                }
                else
                printf("    ");
            }
        }
        printf("\n");
    }
    for(i=1;i<=3;i++)
    {
        delay(1);
        for(j=1;j<=14;j++)
        printf("*   ");
        printf("\n");
    }
    return 0;
}