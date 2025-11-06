#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main(void)
{
    char input[100];
    FILE* fp;
    char c;
    int i;
    
    //fopen
    fp= fopen("sample.txt","r");
    
    if(fp == NULL)
    {
                printf("failed to open file!\n");
                return -1;
    }
    
    #if 0
    while( (c=fgetc(fp)) != EOF)
    {
           putchar(c);
    }
    #endif
    
    #if 1
    while(fgets(input,100,fp)>0)
    {
           printf("%s",input);
    }
    #endif
    
    
    //fclose
    fclose(fp);

  
  system("PAUSE");	
  return 0;
}
