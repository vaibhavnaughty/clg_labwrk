#include <stdio.h>

int main(void) {
int array[3][3]; // array of 3 rows and 3 columns
int count = 0; // number of zero elements in the array 
printf("Enter the elements of two dimensional array : ");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
scanf("%d",&array[i][j]);
}
}
// count the number of zero elements
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
if(array[i][j] == 0)
count++;
}
}
printf("\nNo of zero elements : %d", count);
return 0;
}