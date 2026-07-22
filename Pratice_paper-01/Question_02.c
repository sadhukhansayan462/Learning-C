/* 
practice sheet A - 02

2. Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height.

*/
 #include<stdio.h>
 int main(){
 
    int radius,height;
    float pie;
     pie=22.0/7 ;

    printf("enter the radius of the circle:");
    scanf("%d",&radius);

      printf("enter the height of the cylinder :");

      scanf("%d",&height);


    printf("the area of the circle is %f\n ", pie * radius * radius);

    printf("the volume of the cylinder is: %f", radius* radius*height*pie);
    return 0;
 }


