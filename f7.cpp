#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	FILE* pointerForTextFile = 0;
	FILE* pointerForBinaryFile = 0;
	
	int flag1 = 0;
	pointerForTextFile = fopen("myTextFile.txt", "w + ");
	while (flag1 != 1)
	{
		if (pointerForTextFile == 0)
		{
			printf("Error in opening the text file! \n");
			flag1 = 0;
			return flag1;

		}
		
		if (fprintf(pointerForTextFile,"This is line 1.") <0)
		{
			printf("Error in writing the first line! \n");
			flag1 = 0;
			return flag1;

		}
		if (fprintf(pointerForTextFile,"This is line 2." )< 0)
		{
			printf("Error in writing the second line! \n");
			flag1 = 0;
			return flag1;

		}
		if (fclose(pointerForTextFile) != 0)
		{
			printf("Error in closing the text file! \n");
			flag1 = 0;
			return flag1;

		}
		break;

	}
}
int flag2 = 0;


