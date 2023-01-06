#include<stdio.h>
#include <stdbool.h>
int main(){
    int tream,sub;
    printf("Enter number of terms: ");
    scanf("%d",&tream);
    
    printf("Enter number of Subjects: ");
    scanf("%d",&sub);
    
    int total_point=0;
    bool falied=false;
    
    for(int cs=1; cs<=tream;cs++){
     for (int ts=1;ts<=sub;ts++){
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
   }
        
    }

    
if(falied){
    printf("You have failed");
}
else{
   double gpa=(double)total_point/(double)sub;
     printf(" GPA =%.2lf\n",gpa);
     double avarge=gpa/tream;
    
     printf("%.2lf",avarge);



} 

return 0;
    
    }




    
