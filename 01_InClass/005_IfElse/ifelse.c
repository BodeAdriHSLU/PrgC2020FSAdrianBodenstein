#include <stdio.h>

int main(void)
{
	int inputValue1 = 0;
	int inputValue2 = 0;

	printf("Enter an int: ");
	scanf("%d", &inputValue1);
	printf("Enter a second int: ");
	scanf("%d", &inputValue2);

	if(inputValue1 >= inputValue2){
		printf("%d is bigger or equal to %d\n", inputValue1, inputValue2);
	}
	else{
		printf("%d is less than %d\n", inputValue1, inputValue2);
	}

	return 0;
}
