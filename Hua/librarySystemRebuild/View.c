#include <stdio.h>
#include <stdlib.h>
#include "View.h"

enum maincontrolaction{
    Addmember = 1 ,     /**< �s�W�|��*/
    loginmember,        /**< �n�J�|��*/
    done                /**< ����*/
};




/** �D�t��Log*/
void WelcomeLog()
{
   printf("�z�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�{\n\
�x                                                �x\n\
�x�i���y���ɨt�Ρj                                �x\n\
�x���ϥΪ̯��ǥѦ��t�ζi����ٮ�,��ܤκ޲z���ʧ@ �x\n\
�|�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�}\n");
};

/**< �D����Log*/
void maincontrolLog()
{
    printf("(1) �s�W�|�� \n");
    printf("(2) �n�J�|�� \n");
    printf("(3) ���� \n");
}

/**< �D����Log*/
int  maincontrolInput()
{
    int inputControlNumber ;
    maincontrolLog();
    printf("�п�J�n�ϥΪ��ʧ@: ");
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
    printf("��J���~ !! \n");
    return 0;
}



void addmemberLog()
{
    printf("�A��ܤF�s�W�|��!! \n");
}

void LoginmemberLog()
{
    printf("�A��ܤF�n�J�|��!! \n");
}

void doneLog()
{
    printf("�A��ܤF�����{��!! �T�T~ \n");
}



