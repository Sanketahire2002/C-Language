#include<stdio.h>
enum days
{
    Mon,Tue,Wed,Thur=30,Fri,Sat,Sun
}day;
enum Bool
{
    true=1,false=0
};
enum Bool bool;
void main()
{
    day=Mon;
    printf("%d",day);
    day=Tue;
    printf("\n%d",day);
    day=Wed;
    printf("\n%d",day);
    day=Thur;
    printf("\n%d",day);
    day=Fri;
    printf("\n%d",day);
    day=Sat;
    printf("\n%d",day);
    day=Sun;
    printf("\n%d",day);

    bool=true;
    printf("\n%d",bool);
    bool=false;
    printf("\n%d",bool);

}