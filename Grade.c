#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,mark;
    printf("Enter Marks");
    scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
{
    if (mark>85 && mark<100)
        printf("Grade A");
       else if (mark>70 && mark<84)
        printf("Grade B");
          else if (mark>55 && mark<69)
                printf("Grade C");
               else if (mark>40 && mark<54)
                     printf("Grade D");
                    else
                       printf("Grade F");
      return 0;
  }
}
