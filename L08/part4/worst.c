#include <stdio.h>
#include <stdbool.h>

int main()
{
	//trigger the out of bounds array access warning
	int arr[5] = { 1, 2, 3, 4, 5 };
 	int i = 6;
 	printf("%d\n",arr[i]);
    	return 0;

	//trigger the incrementing Boolean variable warning
	bool b = true;
	b=b+1;
	printf("b = %s",b);

	//trigger the matching if and elese if conditions warning
	int x = 2;
   	if (x == 2) {
        	printf("x is equal to 2");
    	}
    	else if (x == 2) {
        	printf("x is also equal to 2");
   	}

	//trigger the zero division warning
	int n = 6;
	printf("6/0 is %d",n/0);


    	return 0;
}
