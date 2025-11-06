#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i=0;
    char str[4];
    str[0]='a';
    str[1]='b';
    str[2]='c';
    str[3]='\0';
    
    printf("%s\n",str);
    
    while (i<4){
          printf("str[%i]=%c\n",i,str[i]);
          i++;
    }
  
  system("PAUSE");	
  return 0;
}
