#include <stdio.h> 
#include <stdlib.h> 
int main(void)
{
    printf("�п�J�{�b���ɶ��G"); 

	int hour,min; 

	scanf("%d %d",&hour,&min); 

	if((hour==7 && min>=30)||(hour>=8 && hour<=16))
	{ 

		printf("���G�G�{�b�O�W�Ǯɶ�\n");

	}

	else
	{

		printf("���G�G�{�b�O��Ǯɶ�\n");

	}
    system("pause");
	return 0 ;
}
