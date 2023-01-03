#include <stdio.h>

int main(){
    int marks,gread_point;
    scanf("%d",&marks);

    if(marks>=80){
        printf(" GPA  A+\n");
        gread_point=5;
       
    }
    else if (marks>=70)
    {
        printf(" GPA  A\n");
        gread_point=4;
    }
    else if (marks>=60)
    {
        printf(" GPA  A-\n");
        gread_point=3.5;
    }
    else if (marks>=50)
    {
        printf(" GPA  B\n");
        gread_point=3;
    }
    else if (marks>=40)
    {
        printf(" GPA  C\n");
        gread_point=2;
    }
    else{
        printf("F");
    }



    return 0;
}