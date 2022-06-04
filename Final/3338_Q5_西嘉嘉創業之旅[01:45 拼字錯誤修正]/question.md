# 題目說明
黑嘉嘉的其中一個好朋友西嘉嘉打算在公館商圈裡開一間店，但他不太會管理自己的店面，於是她就用C++寫了一個Store類別來幫忙自己管理店裡的一些資訊。

Store類別包含以下的成員：

屬性(私有):

+ string Name: 店面名字
+ int size: 店面大小
+ int rent: 單位面積的租金
+ int stock: 店裡的庫存數
+ int money: 店裡的資金

方法(公開):

+ Store(string na, ...)<br>
初始化名字等屬性，並檢查參數的合理性<br>
  + name無須檢查
  + size 不可小於或等於0，若違反需提示"size setting error"，並設定為10
  + rent 不可小於或等於0，若違反需提示"rent setting error"，並設定為5
  + money 不可小於或等於0，若違反需提示"money setting error"，並設定為1000
  + stock 不可小於0，若違反需提示"stock setting error"，並設定為5
  
+ ~Store()：解構式<br>
釋放記憶體並顯示"`店名`will no longer rent"

+ void Info()：<br>
顯示資訊，詳細輸出如下
```
===Info===
Name: XXX
Size: XXX
Rent: XXX
Stock: XXX
Money: XXX
```

+ void Rename(string newname)：<br>
更改店名為`newname`

+ void ChangeRent(int r)：<br>
更改單位面積租金為`r`需檢查`r`的合理性，如小於等於0需輸出`invalid input`

+ void Sell(int num, int price)：賣出<br>
將`num`數量的存貨以每個`price`的價格出售需檢查賣出數量的合理性，如果賣出數量大於庫存，需輸出`Not enough stock, invalid selling`並取消交易

+void Buy(int num, int price)：買入<br>
用每個`price`的價格買入`num`數量的存貨需檢查資產的合理性，如果購買總價大於資產，需輸出`Not enough money, invalid buying`並取消交易

+ int getMoney()：<br>
回傳現在店裡的資金

+ int getRent()：<br>
回傳現在所需繳交的租金(面積*單位租金)

本題為多檔組合

main.cpp已經幫你準備好如下：

```cpp
#include <iostream>
#include <string>
#include "store.h"

using namespace std;

int main(){

  char order;
  string name;
  int size, rent, stock, money;
  cin >> name >> size >> rent >> stock >> money;
  Store *s1 = new Store(name, size, rent, stock, money);
  while(1){
    cin >> order;
    if (order == 'q')
      break;
    else if (order == 'r'){
      string newname;
      cin >> newname;
      s1->Rename(newname);
    }
    else if (order == 'i'){
      s1->Info();
    }
    else if (order == 'c'){
      int r;
      cin >> r;
      s1->ChangeRent(r);
    }
    else if (order == 'd'){
      delete s1;
    }
    else if (order == 'b'){
      int num, price;
      cin >> num >> price;
      s1->Buy(num, price);
    }
    else if (order == 's'){
      int num, price;
      cin >> num >> price;
      s1->Sell(num, price);
    }
    else if (order == 'p'){
      int r = s1->getRent();
      int m = s1->getMoney();
      if (r > m){
         cout << "You don't have enough money to pay the rent" << endl;
         delete s1;
      }
      else{cout << "Successfully pay rent" << endl;
        s1->Buy(1, r);
        s1->Sell(1, 0);
      }
    }
  }
  return 0;
}
```

## Input Format
輸入總共有兩行<br>
第一行為小明購書清單的檔案名稱<br>
第二行為書店目錄的檔案名稱<br>
購書清單的檔案內容範例`list01.txt`如下：<br>

```
Calculus
art
Datastructures&Algorithms
Naruto
Calculus
```

由於檔案內容的大小不固定，所以請讀到EOF為止。每行只有由英文單字(含大小寫)的一本書，不含空白。<br>
書店目錄的檔案總共`n+1`行。<br>
第一行為一正整數`n`，接著`n`行為書本的名稱+空白+書本的價格(正整數)。目錄的檔案內容範例`store01.txt`如下：<br>

```
6A
lphabet 150
Accounting 600
Calculus 550
Chemistry 400
Datastructures&Algorithms 380
Economics 450
```

## Output Format
輸出購書的總金額

## Output File Format
請將清單的書本名稱依照ASCII Code的順序由小到大排好後，再輸出至檔名為`noteXX.txt`的檔案中。例：`list01.txt`就輸入到`note01.txt`<br>
假設購書清單有`k`本書，則寫入的檔案總共有`k`行，，第`i`行輸出形式為`已排序之書本名稱書本價格`。

注意
1) 有可能會出現店裡沒有賣小明想要的書的情況，此時第i 行需寫入None
2) 清單有可能出現重複的書籍，表示小明想要多買，請不要省略
3) 書店保證不會有同樣書名卻價格不同的書籍

### Sample Input
```c
list01.txt
store01.txt
```

### Sample Output
```c
1480
```

### Sample Output File note01.txt
```c
Calculus 550
Calculus 550
Datastructures&Algorithms 380
Naruto None
art None
```

## Hint
+ subtask 0 (10%) ：sample input
+ subtask 1-3 (30%) ：清單不需排序，且沒有None 的情況
+ subtask 4-6 (30%) ：清單不需排序，會出現None
+ subtask 7-8 (30%) ：無限制
