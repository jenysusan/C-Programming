/* Implementation of Queue using Array*/


#include<stdio.h>
#include<stdlib.h>

void main()
{
    int queue[15],i,front=0,choice,end=0,ele,cho,limit=14;

    do
    {
        printf("\nMENU\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: printf("Enter the value of element: ");
                    scanf("%d",&ele);
                    if(front==0)
                    {
                        front=1;
                        end=1;
                        queue[end]=ele;
                    }
                    else if(end==limit)
                    {
                        printf("Queue is FULL");
                    }
                    else
                    {
                        end+=1;
                        queue[end]=ele;
                    }
                    break;

            case 2: if(front==0)
                    {
                        printf("Queue is EMPTY");
                    }
                    else if(front==end)
                    {
                        printf("Deleted %d",queue[end]);
                        front=0;
                        end=0;
                    }
                    else
                    {
                        printf("DeletedDD %d",queue[front]);
                        front+=1; 
                    }
                    break;
            case 3: if(front==0)
                    {
                        printf("Queue is EMPTY");
                    }
                    else
                    {
                        for(i=front;i<=end;i++)
                        {
                            printf("%d -> ",queue[i]);
                        }
                      
                    }
        } 
    }while(choice==1 || choice==2 || choice==3);

}
OUTPUT:
MENU
1.Insertion
2.Deletion
3.Display
4.Exit
Enter Choice:1 Enter the value of element:33
MENU
1.Insertion
2.Deletion
3.Display
4.Exit
Enter Choice:1 Enter the value of element: 12
MENU
1.Insertion
2.Deletion
3.Display
4.Exit
Enter Choice:1 Enter the value of element:87 
MENU
1.Insertion
2.Deletion
3.Display
4.Exit
Enter Choice: 33 -> 12 -> 87 -> 
MENU
1.Insertion
2.Deletion
3.Display
4.Exit
Enter Choice: DeletedDD 33
MENU
1.Insertion
2.Deletion
3.Display
4.Exit
Enter Choice: 4
