#ifndef ADDMEMBER_H_INCLUDED
#define ADDMEMBER_H_INCLUDED
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct User
{
    int ID;
    char[] Name;
    char[] Password;
};
enum UserCheckFormat
{
    UserName;
    UserPassword;
    UserEmail;
};
//�I��s�W�|��
void InsertUser()
{

}
//�T�{�|�����
bool CheckUser(struct User user)
{

}
//�oݮ��J�榡�O�_���~
enum UserCheckFormat CheckInsertList (struct User user)
{

}
//����s�W�|���쥻�a��Ʈw
void ExecuteInsert(struct User user)
{

}

#endif // ADDMEMBER_H_INCLUDED
