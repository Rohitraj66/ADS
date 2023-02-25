 

#include<stdio.h>
 #include<conio.h> 
int main()
{

int arr1[50],arr2[50],size1,size2,k,i,merge[100];
 clrscr();
printf("Enter the size of first array"); 
scanf("%d",&size1);
printf("\n Enter the element of first array:"); 
for(i=0;i<size1;i++)
 

{

scanf("%d",&arr1[i]);


merge[i]=arr1[i];

}

k=i;

printf("\n Enter the size of second array"); 
scanf("%d",&size2);
printf("\n Enter the elements of second array"); 
for(i=0;i<size2;i++)
{

scanf("%d",&arr2[i]);
 merge[k]=arr2[i]; k++;
}

printf("\n The merged array is:\n"); 
for(i=0;i<k;i++)
{

printf("%d",merge[i]);

}

getch();
 return 0;
}
 
