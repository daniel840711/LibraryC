#ifndef VIEW_H_INCLUDED
#define VIEW_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "View.c"

/** 登入狀態Flag*/
enum LoginStatus{
    Error = 0,      /**< 登入錯誤*/
    Success,    /**< 登入成功*/
    NotFound    /**< 找不到會員*/
};
/** 主要動作狀態*/
void WelcomeLog(void);            /**< 進入系統Log*/
void MaincontrolLog(void);        /**< 主控制Log*/

int maincontrolInput (void);      /**< 主控制程式*/

void addmemberLog(void);          /**< 新增會員Log*/

void LoginmemberLog(void);        /**< 登入會員Log*/

void doneLog(void);               /**< 結束程式Log*/



#endif // VIEW_H_INCLUDED


/**功能 -- 2018/12/01 進度
1. 顯示log .h .c
2. 會員登入MVC

*/
