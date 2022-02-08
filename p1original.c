#include<stdio.h>
void input(float *base , float *height)
{
  printf("enter the base no:\n");
  scanf("%f",base);
  printf("enter the height no:\n");
  scanf("%f",height);
}
void find_area(float base, float height, float *area)
{
  *area=0.5*base*height;
}
void output(float base, float height, float area)
{
  printf("area of the triangle %f",area);
}
void  main()
{
  float x,y,z;
  input(&x,&y);
  find_area(x,y,&z);
  output(x,y,z);
}
