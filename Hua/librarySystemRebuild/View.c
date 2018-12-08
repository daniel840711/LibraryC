#include <stdio.h>
#include <stdlib.h>
#include "View.h"

enum maincontrolaction{
    Addmember = 1 ,     /**< 新增會員*/
    loginmember,        /**< 登入會員*/
    done                /**< 結束*/
};




/** 主系統Log*/
void WelcomeLog()
{
   printf("┌────────────────────────┐\n\
│                                                │\n\
│【書籍租借系統】                                │\n\
│讓使用者能藉由此系統進行借還書,顯示及管理等動作 │\n\
└────────────────────────┘\n");
};

/**< 主控制Log*/
void maincontrolLog()
{
    printf("(1) 新增會員 \n");
    printf("(2) 登入會員 \n");
    printf("(3) 結束 \n");
}

/**< 主控制Log*/
int  maincontrolInput()
{
    int inputControlNumber ;
    maincontrolLog();
    printf("請輸入要使用的動作: ");
    scanf("%d" ,&inputControlNumber);
    switch(inputControlNumber)
    {
    case 1:
        return Addmember;
        break;
    case 2:
        return loginmember;
        break;
    case 3:
        return done;
        break;
    }
    printf("輸入錯誤 !! \n");
    return 0;
}



void addmemberLog()
{
    printf("你選擇了新增會員!! \n");
}

void LoginmemberLog()
{
    printf("你選擇了登入會員!! \n");
}

void doneLog()
{
    printf("你選擇了結束程式!! 掰掰~ \n");
}



