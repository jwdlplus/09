#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

int main(int argc, char *argv[])
{
    int i;
    int grade[SIZE];
    int sum=0;
    
    printf("%i�� ������ �Է��ϼ���.\n", SIZE);
    
    for(i=0;i<SIZE;i++)
    {
                       scanf("%d", &grade[i]);
                       sum += grade[i];
    }
       
    #if 0
    for(i=0;i<SIZE;i++)
       printf("grade[%i] = %i\n", i, grade[i]); 
    #endif
    
    printf("���� ��� : %i\n", sum/SIZE); 
    
    system("PAUSE");	
    return 0;
}
