#include "ControlData.h"
/**
* 當 要做會員處理 時
* 宣告會員基本資料結構定義
*/
struct User
{
    int ID;
    char* Name;
    char* Password;
};
/**
*當 使用者輸入會員資料 時
*宣告錯誤種類當作錯誤回報格式
*/
enum UserCheckFormat
{
    UserName,
    UserPassword,
    UserEmail
};
/**
* 當 新增 刪除 查詢 修改 會員 時:
* 判定是否有此會員
* @param 輸入 [struct User ]user 自訂的書籍資料表結構陣列
* @return 回傳BOOL值 回報是否有此帳號
*/
enum UserCheckFormat CheckUser(struct User user);
//確認會員之輸入格式是否有誤
/**
* 當 愈想要做會員資料格式判斷 時:
* 判定是否有此會員
* @param 輸入 [struct User ]user 自訂的書籍資料表結構陣列
* @return 回傳enum值 回報是哪一會員資料有錯
*/
enum UserCheckFormat CheckInsertList (struct User user);
