// Every program should have this header , ok na ?
// input example : 1 5 7 
// output example:  7
#include<stdio.h>
int main()
{
    int x, y, z, maximum;
    scanf("%d%d%d",&x,&y,&z);
    if((x>y)&&(x>z))
    {
        maximum =x;
    }
    else if(y>z)
    {
        maximum =y;
    }
    else
    {
        maximum =z;
    }
    	printf("%d\n", maximum);
 	return 0;
} 

// Brilliant ra 

