#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sorting(length){

        srand(time(NULL));
	int i, j, q, l, m, p, c, h, f, y, r;
       	int*arr1=(int*)malloc(length*4);
	  for (i=0;i<length;i++)
            {
            int num = rand()%9+0;
            arr1[i]=num;
            }
          
	printf("The first array is: \n");

        	for (j=0;j<length;j++)
        	  {
        	  printf("%d",arr1[j]);
        	  } 

	int*arr2=(int*)malloc(length*4);

		for (q=0;q<length;q++) {
		arr2[q] = arr1[q];
		}

		for (l=0;l<length;l++)
		{
		int x = arr2[l];       
			

		int k = l-1;

			while (k>=0 && arr2[k] > x)
			{                                     //Insertion Sort algorithm taken from wikipedia
								//https://en.wikipedia.org/wiki/Insertion_sort
			arr2[k+1]=arr2[k];
			k=k-1;
			}
	
		arr2[k+1]=x;
		}

		printf("\n\nThe sorted array is:\n");

			for(m=0;m<length;m++)
			{
			printf("%d", arr2[m]);
			}
	
	
		int*arr3=(int*)malloc(length*4);
		
			for (q=0;q<length;q++) {
			arr3[q] = arr2[q];                         //Insertion Sort implemented backwards
		        }
			for (f=0;f<length;f++)
			{
			int y = arr3[f];
					     
						       
			int h = f-1;
					      
			while (h>=0 && arr3[h] < y)  {
                        arr3[h+1]=arr3[h];
                        h=h-1;
	                }
					      
			arr3[h+1]=y;
			}
			 
			printf("\n\nThe assorted array is:\n");

			for (r=0;r<length;r++) 
			{
			printf("%d", arr3[r]);
			}

		printf("\n");

        	return 0;
}




int main(){
        int length;
        printf("Enter the length of array you want: \n");
        scanf("%d",&length);
        sorting(length);
}



