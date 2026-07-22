#include <stdio.h>
int main (){
    int age = 19;
    float height =5.10;
    char name1= 'S';
    char name2= 'A';
    char name3= 'Y';
    char name4= 'A';
    char name5= 'N';
printf("the size of age = %zu bytes\n " , sizeof(int));
printf("the size of height= %zu  bytes\n ", sizeof (float));
printf("the size of name = %zu bytes", sizeof(name1)+sizeof(name2)+sizeof(name3)+sizeof(name4)+ sizeof(name5));
 return 0 ;
}


/*
%zu is a placeholder for a value of type size_t,
 which is the type returned by sizeof().


in place of 
      char name1= 'S';
      char name2= 'A';
      char name3= 'Y';
      char name4= 'A';
      char name5= 'N';
   then 
      printf("the size of name = %zu bytes", 
         sizeof(name1)+sizeof(name2)+sizeof(name3)+sizeof(name4)+ sizeof(name5));
   or 
      printf("thr size of name= %zu bytes ",sizeof(char)*5);

we can use

      char name[] = "SAYAN"; 
  then
       printf("%zu bytes", sizeof(name));
*/