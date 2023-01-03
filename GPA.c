#include <stdio.h>
#include <stdbool.h>

int main(){
    int subject_number;
    printf("Enter a total subject ");
    scanf("%d",&subject_number);
    
    
    int total_point=0;
    bool falied=false;
    for(int i =1; i<=subject_number;i++){

    int marks,gread_point;
    printf("ENTER a Mark \n");
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
        printf("F\n");
        gread_point=0;
        falied=true;
    }
    total_point+=gread_point;
    // printf("Total GPA \n= %d",total_point);

}

if(falied){
    printf("You have failed");
}
else{
   double gpa=(double)total_point/(double)subject_number;
     printf(" GPA =%lf\n",gpa);
}




    




    return 0;
}