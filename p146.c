#include<stdio.h>
struct student
{
    int id;
    char name[20];
    int marks[1];
} stud[2];
int main()
{
    int i;
    for(i=0; i<2; i++)
    {

        printf("Enter Roll-No. : ");
        scanf("%d",&stud[i].id);
        printf("Enter Name     : ");
        scanf("%s",stud[i].name);

        for(int j=0; j<1; j++)
        {
             printf("Enter Marks of Subject %d : ",j+1);
               scanf("%d",&stud[i].marks[j]);

            if(stud[i].marks[j]<50)
            {
                printf("students who have scored less are---\n");
                printf("the student id is %d\n",stud[i].id);
                printf("the student naeme is %s\n",stud[i].name);
            }
        }
    }
        return 0;
    }
