#include<stdio.h>
#include<stdlib.h>

void main()
{
	int q,i;
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{

	 long long int t,j;
	
		int p;
		scanf("%d",&p);

	int count=0;
	long long int r=1;
			while(r++)
			{ int flag=0;
				for(j=1;j<=r;j++)
				{
					if(r%j==0)
				{
					
					flag++;
				}
				}
					if(flag==2)
					{    
						count++;
						t=r;
					
						if(count==p)
						{
							
							printf("%d\n",t);
							break;
						}
					}
				}
			
	}
			
		
}
	
		
			
	
		
	
	

