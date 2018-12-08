#include <stdio.h>
#include <stdlib.h>
#include "View.h"
#include "control.h"
/**枚舉 性別*/
enum SEX{
    woman, /**< 女生*/
    man    /**< 男生*/
};
/**枚舉 權限*/
enum Permission{
    normal,  /**< 一般使用者*/
    admin    /**< 管理員身分*/
};


/** 會員資料結構*/
struct MEMBER {
    int id;                     /**> 索引*/
    char member_name[10];       /**> 名子 */
    char address_name[50];      /**>地址 */
    char accout_name[20];       /**>帳號 */
    char password_name[20];     /**>密碼 */
    char phone_name[20];        /**>電話 */
    char email_name[30];        /**>電子信箱 */
    enum SEX sex;               /**>0:woman 1:man */
    enum Permission power;      /**>權限 0 為一般 1為管理員 */
};


int maincontrol (int input)
{

    switch (input)
    {
    case 1:
        addmemberLog();

        break;
    case 2:
        LoginmemberLog();
        break;
    case 3:
        doneLog();
        return 0;
    }
    return input;
}

