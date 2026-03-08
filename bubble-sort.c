#include <stdio.h>
#include <stdbool.h>

int main(void)
{
   int array[]={9,1,5,3,7,2};
   int j;
   bool swapped;
   int temp;
   const int n=sizeof(array)/sizeof(array[0]);
   for(int i=1;i<n;i++)
   {
       j=0;
       swapped=false;
       while(j<n-1-i)
       {
          if(array[j]>array[j+1])
          {
             temp=array[j];
             array[j]=array[j+1];
             array[j+1]=temp;
             swapped=true;
          }
          j++;
       }
       if (!swapped)
       {
         printf("Already sorted\n");
         break;
       }
   }
   printf("Sorted:");
   for(int x=0;x<n;x++)
   {
      printf("%i ",array[x]);
   }
   printf("\n");
   return 0;
}
