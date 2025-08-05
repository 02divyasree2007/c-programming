#include <stdio.h>
int main()
{
	int  i,N;
	scanf("%d,&N");
	int a[100];
    for (int i=0;i<N;i++);
	scanf("%d",&a[i]);
	int pos,ele,informer=N;
	printf("Enter the position to insert:");
	scanf("%d",&pos);
	printf("Enter the element to insert:");
	scanf("%d",&ele);
	if(pos>informer)
	printf("not available");
	else {
		for (int i= informer;i>=pos-1;i--)
		a[i+1]=a[i];
		a[pos-1]=ele;
		informer++;
			}
			printf("element are:");
			for (int i=0;i<informer;i++)
			printf("%d",a[i]);
    }
