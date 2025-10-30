#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(int argc, char *argv[])
{
    int i;
    int grade[SIZE];
    printf("%i명 점수를 입력하세요.\n", SIZE);
    
    for(i=0;i<SIZE;i++)
       scanf("%d", &grade[i]);
    
    for(i=0;i<SIZE;i++)
       printf("grade[%i] = %i\n", i, grade[i]); 
  
    system("PAUSE");	
    return 0;
}
