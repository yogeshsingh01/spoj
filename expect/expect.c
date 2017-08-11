#include <stdio.h>

int main(void) {
	// your code here
	int num;
	while(1)
	{
		scanf("%d",&num);
		printf("%d\n",num);
		fflush(stdout);

		if(num == 42)
		break;
	}
	return 0;
}
