#include<stdio.h>
void main()
{
    int array[5];
    
   printf("enter the value one by one ");
   for (int i=0;i<5;i++)
        {

            scanf("%d",&array[i]);

        }
        
   for (int i=0;i<5;i++)
        {

            printf("%d ",array[i]);

        }
    

// logic to find largest number
  for (int i = 1; i <5; ++i) {
    if (array[0] < array[i]) {
      array[0] = array[i];
    }
  }

printf("Largest element = %d", array[0]);



// logic to find smallest  number
  for (int i = 1; i < 5; ++i) {
    if (array[0] > array[i]) {
      array[0] = array[i];
    }
  }

printf("Smallest element = %d", array[0]);

}



