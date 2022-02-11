#include <stdio.h>
#include <string.h>

#include "Stack.h"

int main(int argc, char **argv) {
   int i,j,value;
   STACK s;
    s.top=NULL;
    s.size=0;

   for(i=1;i<argc;i++){
   
   for(j=0;j<strlen(argv[i]);j++){
     
     switch(argv[i][j]){
       case '{': 
       case '[': push_s(&s,argv[i][j]);break;

       case '}':
       case ']': break;
     }
    /* if(strcmp(argv[i],"x")==0) {
      value= pop_s(&s);
        if(s.size!=0) printf("pop %d\n",value);
        else printf("The stack is empty\n");
     }
     else{
     value=atoi(argv[i]);
     push_s(&s, value);
     printf("push %d\n",value);
     }
   }
*/
   }
}