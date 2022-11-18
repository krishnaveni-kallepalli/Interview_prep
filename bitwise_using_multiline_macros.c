#include<stdio.h>
#include<stdlib.h>
#define NUM_SIZE sizeof(int)*2
//-------------------------- HIGHEST SET BIT IN A NUMBER --------------------------//
#define HIGHEST_SETBIT(x,i) \
			for(i=0;i<NUM_SIZE;i++)\
			{\
				if((x>>i)&1)\
					count = i;\
			}\
			if(count != -1)\
				printf("Highest order : %d\n",count);\
			else\
				printf("Bits are not set\n");
				
				
//--------------------------- LOWEST SET BIT IN A NUMBER ------------------------//

#define LOWEST_SETBIT(x,i)\
			for(i=0;i<NUM_SIZE;i++)\
			{\
				if((x>>i)&1)\
					count = i;\
					break;\
			}\
			if(count != -1)\
				printf("Lowest order : %d\n",count);\
			else\
				printf("Bits are not set\n");

				
int main()
{
	int ch,n,count=-1,x,i;
	printf("1.Highest Setbit\n2.Lowest Setbit\n");
	printf("Enter choice:");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			printf("Enter number:");
			scanf("%d",&n);
			HIGHEST_SETBIT(x,i);
			
			//(count != -1)?printf("Highest order : %d\n",count):printf("Bits are not set\n");
		case 2:
			printf("Enter number:");
			scanf("%d",&n);
			LOWEST_SETBIT(x,i);
			
		default:exit(0);
	}
}
