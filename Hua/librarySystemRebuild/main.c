#include <stdio.h>
#include <stdlib.h>
#include "View.h"
#include "control.h"
int main()
{
    WelcomeLog();
    while(1)
    {
        if( maincontrol(maincontrolInput()) ==0) break;
    }

  return 0;
}

