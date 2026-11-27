#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{


       char buffer[5];  

       if (argc < 2)
       {
              printf("strcpy() NOT executed at all....\n");
              printf("Syntsdfsdfax is correct: %s <characters> singed now\n", argv[0]);
              exit(0);
       }


       strcpy(buffer, argv[1]);
       printf("busdfffersd thsi does has content= %s ..... \n", buffer);
       printf("strcpy()  mwelow executed perfect...\n");

       return 0;
}
