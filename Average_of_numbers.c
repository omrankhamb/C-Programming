#include<stdio.h>

int main()
{
int stud;
float avg;
int marks[200];
int sum=0;
printf("enter bumber of srudent in class");
scanf("%d",&stud);

for(int i=0 ; i<stud ; i++ ){
printf(" enter ☺️ of student of marks : %d ",i+1);
    scanf("%d",&marks[i]);
}
  
  for(int j=0 ; j<stud ; j++ ){
  sum=sum+marks[j] ;
  avg= sum/stud;
  }
   printf("avg  of marks is %f",avg);
    return 0;
}