#include<stdio.h> #include<stdlib.h>
void Union(int set1[10],int set2[10],int m,int n);

void intersection(int set1[10],int set2[10],int m,int n); void main()
{

int a[10],b[10],m,n,j,i; int ch;
clrscr();

printf("\n Enter the number of elements in first set:"); scanf("%d",&m);
printf("\n Enter the elements:"); for(i=0;i<m;i++)
{

scanf("%d",&a[i]);

}

printf("\n elements of first set"); for(i=0;i<m;i++)
{

printf("\t %d",a[i]);

}

printf("\n Enter the number of elements in second set:");
 


scanf("%d",&n);

printf("\n Enter the elements:"); for(i=0;i<n;i++)
{

scanf("\t %d",&b[i]);

}

printf("\n Element of second set"); for(i=0;i<n;i++)
{

printf("\t %d",b[i]);

}

for(;;)

{

printf("\n Menu \n 1.Union \n 2.Intersection \n 3.Exit"); printf("\n Enter your choice");
scanf("%d",&ch); switch(ch)
{

case 1: Union(a,b,m,n); break;
case 2: intersection(a,b,m,n); break;
case 3:
 


exit(0);

}

}

}

void Union(int a[10],int b[10],int m,int n)

{

int c[20],i,j,k=0,flag=0; for(i=0;i<m;i++)
{

c[k]=a[i]; k++;
}

for(i=0;i<n;i++)

{

flag=0; for(j=0;j<m;j++)
{

if(b[i]==c[j])

{

flag=1; break;
}

}

if(flag==0)

{
 


c[k]=b[i]; k++;
}

}

printf("\n Element of resultant set \n"); for(i=0;i<k;i++)
{

printf("\t %d",c[i]);

}

}

void intersection(int a[10],int b[10],int m,int n)

{

int c[20],i,j,k=0,flag=0; for(i=0;i<m;i++)
{

flag=0; for(j=0;j<n;j++)
{

if(a[i]==b[j])

{

flag=1; break;
}

}

if(flag==1)
 


{c[k]=a[i]; k++;
}

}

if(k==0)

{

printf("\n Resultant set is null set\n");

}

else

{

printf("\n Element of resultant set\n"); for(i=0;i<k;i++)
{

printf("\t %d",c[i]);

}

}

}
