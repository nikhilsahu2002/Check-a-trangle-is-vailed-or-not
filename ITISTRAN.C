#include<stdio.h>
#include<conio.h>
void main()
{
int angle_1,angle_2,angle_3,sum;
clrscr();
printf("Enter the angle1: ");
scanf("%d",&angle_1);
printf("Enter the angle2: ");
scanf("%d",&angle_2);
printf("Enter the angle3: ");
scanf("%d",&angle_3);
sum= angle_1 + angle_2 +angle_3;
if (sum == 180 && angle_1>0 && angle_2>0&&angle_3>0)
printf("This is trangle");
else
printf("This is not a trangle");
getch();
}