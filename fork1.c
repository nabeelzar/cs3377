#include <stdio.h>
#include <unistd.h>

main()
{
int i;
printf("ready to fork");
i=fork();
printf("Fork returned");
}

