#include <stdio.h>

int main(){
    int subject_number;
    printf("Enter a total subject ");
    scanf("%d",&subject_number);
    
    
    int total_point=0;

    for(int i =1; i<=subject_number;i++){

    int marks,gread_point;
    scanf("%d",&marks);

    printf("ENTER a Mark \n");

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
    total_point+=gread_point;
    printf("Total GPA \n= %d",total_point);

}

int gpa=total_point/subject_number;


    




    return 0;
}