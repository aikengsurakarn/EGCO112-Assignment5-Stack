#include <stdio.h>
#include <string.h>

#include "Stack.h"

int main(int argc, char **argv)
{
  int i,j,value;
  STACK s;
  s.top=NULL;
  s.size=0;
  char pop;
  int flag = 0;

  printf("Checking the parentheses in argv arguments\n");

  for(i=1;i<argc;i++)
  {
   
    for(j=0;j<strlen(argv[i]);j++)
    {
     
      switch(argv[i][j])
      {
        case '{': push_s(&s,argv[i][j]); break;
        case '[': push_s(&s,argv[i][j]); break;

        case '}': pop = pop_s(&s);
                  if (pop != '{')
                  {
                    flag = 1;
                  } break;
        case ']': pop = pop_s(&s);
                  if (pop != '[')
                  {
                    flag = 1;
                  }
                  break;
      }
/*
    if(strcmp(argv[i],"x")==0)
    {
      value= pop_s(&s);
      if(s.size!=0) printf("pop %d\n",value);
      else printf("The stack is empty\n");
    }
    else
    {
      value=atoi(argv[i]);
      push_s(&s, value);
      printf("push %d\n",value);
    }
  }
*/
    }
    if (flag == 1 || s.size > 0)
    {
      printf("The parentheses do not match for %s \n", argv[i]);
      while (s.size > 0)
      {
        printf("Popping %c \n", pop_s(&s));
      }
    }
    else
    {
      printf("The parentheses match successfully for %s \n", argv[i]);
    }
    flag = 0;
  }
}