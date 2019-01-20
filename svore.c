#include "fun_header.h"
#include "struct.h"

void tim(ary a[])
{
    //int num ;
    //char nam ;
    time_t timep;
    struct tm *p;

    time(&timep);
    p = gmtime(&timep);
    printf("%d  %d  %d", (1900+p->tm_year), (1+p->tm_mon), p->tm_mday);
    printf("  %d:%d:%d\n", p->tm_hour+8, p->tm_min, p->tm_sec);

    //printf("give your name and score\n");
    //scanf("%s %d",a[5].name,&a[5].score);

    a[5].score=20;
    strcpy(a[5].name,"kelly");
    a[5].time[0]=1900+p->tm_year;
    a[5].time[1]=1+p->tm_mon;
    a[5].time[2]=p->tm_mday;
    a[5].time[3]=p->tm_hour+8;
    a[5].time[4]=p->tm_min;
    a[5].time[5]=p->tm_sec;
}

void score(ary a[])
{
    int *fkey;
    int i,j,k,t ;
    int max=0,temp=0 ;

    fkey=fopen("score.txt","r");
    if(fkey==NULL)
    {
        printf("ERROR");
    }
    else
    {
        for(i=0; i<5; i++)
        {
            fscanf(fkey,"%s%d", a[i].name, &a[i].score);
            fscanf(fkey,"%d%d%d", &a[i].time[0], &a[i].time[1], &a[i].time[2]);
            fscanf(fkey,"%d%d%d\n", &a[i].time[3], &a[i].time[4], &a[i].time[5]);

        }
    }
    fclose(fkey);


    for(i=0; i<6; i++)
    {
        printf("%s %d",a[i].name,a[i].score);
        printf("  %d  %d  %d", a[i].time[0], a[i].time[1], a[i].time[2]);
        printf("  %d:%d:%d\n", a[i].time[3], a[i].time[4], a[i].time[5]);

    }

    //system("pause");

    printf("\n");

    for(j=0; j<6; j++)
    {
        for(i=j; i<6; i++)
        {
            if(a[i].score>max)
            {
                max=a[i].score;
                k=i;
            }
        }
        temp=a[j].score;
        a[j].score=max;
        a[k].score=temp;
        max=0;

        strcpy(a[7].name,a[j].name);
        strcpy(a[j].name,a[k].name);
        strcpy(a[k].name,a[7].name);

        for(t=0; t<6; t++)
        {
            temp=a[j].time[t];
            a[j].time[t]=a[k].time[t];
            a[k].time[t]=temp;
        }
    }
    for(i=0; i<6; i++)
    {
        printf("%s %d",a[i].name,a[i].score);
        printf("  %d  %d  %d", a[i].time[0], a[i].time[1], a[i].time[2]);
        printf("  %d:%d:%d\n", a[i].time[3], a[i].time[4], a[i].time[5]);

    }

    fkey=fopen("score.txt","w");
    if(fkey==NULL)
    {
        printf("error");
    }
    else
    {
        for(i=0; i<6; i++)
        {
            fprintf(fkey,"%s %d",a[i].name,a[i].score);
            fprintf(fkey," %d %d %d", a[i].time[0], a[i].time[1], a[i].time[2]);
            fprintf(fkey," %d %d %d\n", a[i].time[3], a[i].time[4], a[i].time[5]);
        }

    }
    fclose(fkey);
}

void rank(ary a[])
{
    int *fkey;
    int i ;

    fkey=fopen("score.txt","r");
    if(fkey==NULL)
    {
        printf("ERROR");
    }
    else
    {
        for(i=0; i<5; i++)
        {
            fscanf(fkey,"%s%d", a[i].name, &a[i].score);
            fscanf(fkey,"%d%d%d", &a[i].time[0], &a[i].time[1], &a[i].time[2]);
            fscanf(fkey,"%d%d%d\n", &a[i].time[3], &a[i].time[4], &a[i].time[5]);

        }
    }
    fclose(fkey);

    printf("\n\n------LEADER BOARD------\n\n");


    i=0;
    printf("first--%s: %d",a[i].name,a[i].score);
    printf(" %d %d %d", a[i].time[0], a[i].time[1], a[i].time[2]);
    printf(" %d:%d:%d\n", a[i].time[3], a[i].time[4], a[i].time[5]);

    i=1;
    printf("second--%s: %d",a[i].name,a[i].score);
    printf(" %d %d %d", a[i].time[0], a[i].time[1], a[i].time[2]);
    printf(" %d:%d:%d\n", a[i].time[3], a[i].time[4], a[i].time[5]);

    i=2;
    printf("third--%s: %d",a[i].name,a[i].score);
    printf(" %d %d %d", a[i].time[0], a[i].time[1], a[i].time[2]);
    printf(" %d:%d:%d\n", a[i].time[3], a[i].time[4], a[i].time[5]);

    i=3;
    printf("fourth--%s: %d",a[i].name,a[i].score);
    printf(" %d %d %d", a[i].time[0], a[i].time[1], a[i].time[2]);
    printf(" %d:%d:%d\n", a[i].time[3], a[i].time[4], a[i].time[5]);

    i=4;
    printf("fifth--%s: %d",a[i].name,a[i].score);
    printf(" %d %d %d", a[i].time[0], a[i].time[1], a[i].time[2]);
    printf(" %d:%d:%d\n", a[i].time[3], a[i].time[4], a[i].time[5]);

}
