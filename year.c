#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"


int main(void)
{

int before = getticks();
printf("cycles before:%d\n",before);
shaVal();
int after = getticks();
printf("cycles after:%d\n",after);
printf("cycles taken: %d\n",after-before);
return 0;     
}

