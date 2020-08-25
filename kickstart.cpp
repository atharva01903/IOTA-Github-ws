#include<iostream>
#include <unordered_map> 
using namespace std;
int main(void)
{
	int tc,n,i,b,c,a,ix,j,k,z,andre,sule,mid;
	scanf("%d",&tc);
	for(ix=1;ix<=tc;ix++)
	{
		scanf("%d",&n);
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
		andre=a-c;
		sule=b-c;
		//mid;
		printf("Case #%d: ",ix);
		if(andre+sule<=n-c)
		{
			//printf("P\n");
			int* arr=(int*)malloc(sizeof(int)*n);
			//Andre a-c
			for(i=0;i<andre;i++)
			{
				arr[i]=n-andre+i;
			}
			//Both
			k=i+c;
			while(i<k)
			{
				arr[i]=n;
				i++;
			}
			z=i;
			//Sule
			i=n-1;
			while(i>n-sule-1)
			{
				arr[i]=n-i+1;
				i--;
			}
			for(j=z;j<=i;j++)
			{
				arr[j]=1;
			}
			for(i=0;i<n;i++)
			{
				printf("%d ",arr[i]);
			}
			printf("\n");
			free(arr);
		}
		else
		{
			printf("IMPOSSIBLE\n");
		}
	}
	return 0;
}
