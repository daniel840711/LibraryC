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
//點選新增會員
void InsertUser()
{

}
//確認會員資料
bool CheckUser(struct User user)
{

}
//卻摁輸入格式是否有誤
enum UserCheckFormat CheckInsertList (struct User user)
{

}
//執行新增會員到本地資料庫
void ExecuteInsert(struct User user)
{

}

#endif // ADDMEMBER_H_INCLUDED
