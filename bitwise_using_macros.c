#include<stdio.h>
#include<stdlib.h>
#define NUM_SIZE sizeof(int)*2
#define LSBcheck(n) (n & 1)
#define MSBcheck(n) (n & (0x1<<(NUM_SIZE-1)))
#define SETBIT(n,pos) (n |= (0x1 << pos))
#define CLRBIT(n,pos) (n &= (~(0x1 << pos)))
#define TOGGLEBIT(n,pos) (n ^= (0x1 << pos))
#define SWAPNIBBLE(n) n = (((n & 0x0F) << 4) | ((n & 0xF0) >> 4))
#define GETBIT(n,pos) (n &(0x1 << pos))
int main()
{
	int n,ch,pos;
	printf("1.LSBcheck\n2.MSBcheck\n3.Set a bit\n4.Clear a bit\n5.Toggle a bit\n6.Swap nibble in a byte\n7.Get a bit\n");
	printf("Enter choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter number:");
			scanf("%d",&n);
			LSBcheck(n)?printf("LSB is set\n"):printf("LSB is notset\n");
			break;
		case 2:
			printf("Enter number:");
			scanf("%d",&n);
			MSBcheck(n)?printf("MSB is set\n"):printf("MSB is notset\n");
			break;
		case 3: 
			printf("Enter number:");
			scanf("%d",&n);
			printf("Enter position:");
			scanf("%d",&pos);
			SETBIT(n,pos);
			printf("After Setbit : %d\n",n);
			break;
		case 4:
			printf("Enter number:");
			scanf("%d",&n);
			printf("Enter position:");
			scanf("%d",&pos);
			CLRBIT(n,pos);
			printf("After Clear : %d\n",n);
			break;
		case 5:
			printf("Enter number:");
			scanf("%d",&n);
			printf("Enter position:");
			scanf("%d",&pos);
			TOGGLEBIT(n,pos);
			printf("After Toggle :%d\n",n);
			break;
		case 6: 
			printf("Enter number:");
			scanf("%d",&n);
			SWAPNIBBLE(n);
			printf("After swapping nible : %d\n",n);
		case 7:
			printf("Enter number:");
			scanf("%d",&n);
			printf("Enter position:");
			scanf("%d",&pos);
			GETBIT(n,pos)?printf("Bit at %d position is 1\n",pos):printf("Bit at %d position is 0\n",pos);
		
		default:exit(0);
	}
	
	
}
