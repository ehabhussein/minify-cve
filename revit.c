#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{


       char buffer[5];  

       if (argc < 2)
       {
              const char *prog = (argc > 0 && argv[0]) ? argv[0] : "program";
              printf("strcpy() NOT executed at all....\n");
              printf("Syntsdfsdfax is correct: %s <characters> singed now\n", prog);
              exit(0);
       }


       if (strlen(argv[1]) >= sizeof(buffer))
       {
              printf("strcpy() NOT executed: argument too long (max %zu characters)\n", sizeof(buffer) - 1);
              exit(1);
       }

       snprintf(buffer, sizeof(buffer), "%s", argv[1]);
       printf("busdfffersd thddi does has content= %s ..... \n", buffer);
       printf("strcpy()  mwelow executed perfect...\n");

       return 0;
}
