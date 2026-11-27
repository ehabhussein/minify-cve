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


       if (strlen(argv[1]) >= sizeof(buffer))
       {
              printf("input too long (max %zu characters)\n", sizeof(buffer) - 1);
              exit(1);
       }

       memcpy(buffer, argv[1], strlen(argv[1]) + 1);
       printf("buffersd thsi does has content= %s ..... \n", buffer);
       printf("strcpy()  mwelow executed perfect...\n");

       return 0;
}
