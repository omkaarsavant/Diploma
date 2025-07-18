#include<stdio.h>
#include<stdlib.h>
void bubble(int *,int);
void selection(int *,int);
void insertion(int *,int);
int main()
{
  int count=0;           //size of array
  int choice=0,ch=0;    //variables used to store user choice
  int check=0;          //used to check status
  int i=0;             //loop variable
  printf("\tEnter the size of the list: ");
  scanf("%d",&count);
//creating array of appropriate size
  int list[count];
 //filling in the array
  for(i=0;i<count;i++)
  {
    printf("\tEnter element %d: ",i+1);
    scanf("%d",&list[i]);
  }
//prints the list
 printf("\tNumbers entered: ");
 for(i=0;i<count;i++)
   printf("%d,",list[i]);
 printf("\n");
 printf("\n");
// Menu
do{
printf("\tMenu:\n");
printf("\t1.Bubble sort\n\t2.Selection Sort\n\t3.Inserton sort\n\t4.Exit\n\tYour choice: ");
scanf("%d",&choice);
switch(choice)
{
  case 1:
          bubble(list,count);
          break;
 case 2:
          selection(list,count);
          break;
 case 3:
          insertion(list,count);
          break;
  case 4: return 0;
  default: printf("Invalid option\nRetry: ");
           break; }
 printf("\tDo you want to continue(press 1 to continue):");
 scanf("%d",&ch);
 printf("\n");
 } while(ch==1);
return 0;
}
void bubble(int *list,int n) //bubble
{
 int i,j;
 int c;
 for(i=0;i<n;i++)
   {
     for (j=0;j<n-i-1;j++)
      {
        if (list[j] > list[j+1])
          {
            c=list[j];
            list[j]=list[j+1];
            list[j+1]=c;
          }
      }
   } printf("\tSorted list in ascending order:");
  for ( i = 0 ; i < n ; i++ )
    printf("%d,",list[i]);
  printf("\n");
}
void selection(int *list,int n) //selection{
int i;
 int j,min;
 int k;
 for(j=0;j<n-1;j++)
  {
    min=list[j];
     k=j;
     for(i=j+1;i<n;i++)
      {
       if(list[i]<min)
       {
         min=list[i];
         k=i;
       }
     }
list[k]=list[j];
list[j]=min;
 }printf("\tSorted list is:");
for(i=0;i<n;i++)
{
 printf("%d,",list[i]);
}
printf("\n");
}
void insertion(int *list,int n) //insertion
{
	int temp;
	int i=0,j=0;
                    for(i=1;i<n;i++)
	{
                  temp=list[i];
		j=i-1;
		 while((j>=0)&&(list[j]>temp))
		  {
			list[j+1]=list[j];
			j--;
		  }
	list[j+1]=temp;
	}
 printf("\tSorted list is: ");
   for(i=0;i<n;i++)  {
     printf("%d,",list[i]);
  }
printf("\n");
}





