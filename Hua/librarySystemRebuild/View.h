#ifndef VIEW_H_INCLUDED
#define VIEW_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "View.c"

/** �n�J���AFlag*/
enum LoginStatus{
    Error = 0,      /**< �n�J���~*/
    Success,    /**< �n�J���\*/
    NotFound    /**< �䤣��|��*/
};
/** �D�n�ʧ@���A*/
void WelcomeLog(void);            /**< �i�J�t��Log*/
void MaincontrolLog(void);        /**< �D����Log*/

int maincontrolInput (void);      /**< �D����{��*/

void addmemberLog(void);          /**< �s�W�|��Log*/

void LoginmemberLog(void);        /**< �n�J�|��Log*/

void doneLog(void);               /**< �����{��Log*/



#endif // VIEW_H_INCLUDED


/**�\�� -- 2018/12/01 �i��
1. ���log .h .c
2. �|���n�JMVC

*/
