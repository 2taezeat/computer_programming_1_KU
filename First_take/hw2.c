#include <stdio.h>
int main(void)
{
	int num1;
	int num2;
	int	num3;
	int num4 = 0;

	do
	{
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &num1);
		if (num4 != 0 && num1 == -1)
		{
			break;
		}
		if (num4 == 0)
		{
			num2 = num1, num3 = num1;
		}
		if (num1 > num2)
			num2 = num1;
		if (num3 > num1)
			num3 = num1;
		num4++;
	} while (num1 != (-1));
	printf("���� ū �� : %d\n", num2);
	printf("���� ���� �� : %d\n", num3);
	return 0;
}