#include<stdio.h>
void main()
{ 
    int ts,bs,hra,pf,allow,da;
    char grade;
    printf("enter the bs and grade\n");
    scanf("%d\n%d",&bs,&grade);
    hra=0.2*bs;
    da=0.5*bs;
    pf=0.11*bs;
if(grade=='A')
    { 
        allow=1700;
        ts=hra+da+bs+allow-pf;
        printf("%d",ts);

    }
if(grade=='B'){
    allow=1500;
    ts=hra+da+bs+allow-pf;
    printf("%d",ts);

}
else
{ 
    allow=1300;
    ts=hra+da+bs+allow-pf;
    printf("%d",ts);

}
//if(grade=='A')
//ts=hra+da+bs+allow-pf;
    //printf("%d",ts);

}
