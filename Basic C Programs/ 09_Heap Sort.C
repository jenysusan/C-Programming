/* Heap Sort
   Jeny Susan Rajan S3 D
   Roll no: 28 */


#include <stdio.h>
void main()
{
    int heap[10],n,i,j,c,root,temp;
    printf("\n Enter number of elements :");
    scanf("%d",&n);
    printf("\n Enter the elements : ");
    for (i=0; i< n;i++)
	scanf("%d",&heap[i]);
    for (i= 1;i<n;i++)
    {
	c=i;
	do
        {
	    root= (c-1)/2;             
	    if (heap[root]<heap[c])
	    {

             temp= heap[root];
	     heap[root]=heap[c];
	     heap[c]=temp;

            }
	   c=root;

        }while(c!=0);
    }
    printf("Heap array : ");
    for (i= 0;i<n;i++)
        printf("%d \n ", heap[i]);
    for (j=n-1;j>=0;j--)
    {
        temp=heap[0];
	heap[0] = heap[j];
        heap[j] = temp;
	root=0;
	do 
	{

            c = 2 * root + 1; 
            if ((heap[c]<heap[c+1]) && c<j-1)
		c++;
	    if (heap[root]<heap[c] && c<j)   
	    {
		temp=heap[root];
		heap[root]=heap[c];
		heap[c]=temp;
	     }
	    root=c;

        } while(c<j);
    } 
    printf("\n Sorted array ");
    for (i = 0; i < n; i++)
	printf("%d \n", heap[i]);
}

OUTPUT:
 Enter number of elements :5

 Enter the elements : 2 7 45 12 87
Heap array : 87 
 45 
 7 
 2 
 12 
 
 Sorted array 2 
7 
12 
45 
87 
