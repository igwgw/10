#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main(void)
{
    char input[100];
    FILE* fp;
    int i;
    
    //fopen
    fp= fopen("sample.txt","w");
    //fprintf
    
    for(i=0;i<3;i++){
    printf("input a word: ");
    scanf("%s",input);//¹è¿­Àº&¾È¾¸
    fprintf(fp, "%s\n",input);
} 
     
    //fclose
    fclose(fp);

  
  system("PAUSE");	
  return 0;
}
