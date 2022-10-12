#include "stdio.h"
void main()
{ 
  char word,password;
  printf("请输入a~n一个的字母");
  scanf("%c",&word);
  password=word+1;
  printf("加密后的密码为%c\n",password);
  
 } 
