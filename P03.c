/*If the marks obtained by a student in three different subjects are input through the keyboard, find out the
aggregate marks and percentage marks obtained by the student. Assume that, maximum marks that can
be obtained by a student in each subject is 100.
Hint: Use subjects as Hindi, English and Mathematics*/
#include<stdio.h>
int main()
{
    int m1,m2,m3;
    printf("Enter makrs");
    scanf("%d%d%d",&m1,&m2,&m3);
    printf("Percentage %.2f\n",((m1+m2+m3)/300.0)*100);
    printf("aggerate Marks %d\n",m1+m2+m3);
    return 0;
}