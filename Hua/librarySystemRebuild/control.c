#include <stdio.h>
#include <stdlib.h>
#include "View.h"
#include "control.h"
/**�T�| �ʧO*/
enum SEX{
    woman, /**< �k��*/
    man    /**< �k��*/
};
/**�T�| �v��*/
enum Permission{
    normal,  /**< �@��ϥΪ�*/
    admin    /**< �޲z������*/
};


/** �|����Ƶ��c*/
struct MEMBER {
    int id;                     /**> ����*/
    char member_name[10];       /**> �W�l */
    char address_name[50];      /**>�a�} */
    char accout_name[20];       /**>�b�� */
    char password_name[20];     /**>�K�X */
    char phone_name[20];        /**>�q�� */
    char email_name[30];        /**>�q�l�H�c */
    enum SEX sex;               /**>0:woman 1:man */
    enum Permission power;      /**>�v�� 0 ���@�� 1���޲z�� */
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

