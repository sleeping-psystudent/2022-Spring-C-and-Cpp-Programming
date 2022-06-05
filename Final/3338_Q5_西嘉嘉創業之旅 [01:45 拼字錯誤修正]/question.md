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

store.h已經幫你準備好如下：


```cpp
#include <iostream>
#include <string>

using namespace std;

class Store{
  public:
    Store();
    Store(string na, int s, int r, int st, int m);
    ~Store();
    void Info();
    void Rename(string newname);
    void ChangeRent(int r);
    void Sell(int num, int price);
    void Buy(int num, int price);
    int getMoney();
    int getRent();
  private:
    string name;
    int size;
    int rent;
    int stock;
    int money;
};
```

請完成store.cpp

```cpp
#include <iostream>
#include <string>
#include "store.h"

using namespace std;

Store::Store(){}

Store::Store(string na, int s, int r, int st, int m){
  // Todo
}

Store::~Store(){
  // Todo
}

void Store::Info(){
  // Todo
}

void Store::Rename(string newname){
  // Todo
}

void Store::ChangeRent(int r){
  // Todo
}

int Store::getRent(){
  // Todo
}

void Store::Sell(int num, int price){
  // Todo
}

void Store::Buy(int num, int price){
  // Todo
}

int Store::getMoney(){
  // Todo
}
```
## Input Format
第一行為店名<br>
第二行分別為大小、單位租金、起始庫存、起始資金<br>
之後以輸入的指令做不同處理<br>
+ r :輸入新店名
+ i :印出資訊
+ c :更改單位租金
+ d :解構類別
+ b :會有兩個整數輸入，分別代表num和price，之後做買入
+ s :會有兩個整數輸入，分別代表num和price，之後做賣出
+ p :繳交租金(已寫在main.cpp裡)
+ q :離開程式

## Output Format

### Sample Input 1
```
CppStore
20 50 30 10000
ic1
00
b1
0 200
s5
300
rG
ongGuanStore
ipdq
```

### Sample Output 1
```
===Info===
Name: CppStore
Size: 20
Rent: 1000
Stock: 30
Money: 10000
===Info===
Name: GongGuanStore
Size: 20
Rent: 2000
Stock: 35
Money: 9500
Successfully pay rent
GongGuanStore will no longer rent
```

### Sample Input 2
```
CDEMart
-1 -100 0 -300
c-
50
b5
150
c5
00
s3
500
s6
500
b1
000 300
ipq
```

### Sample Output 2
```
size setting error
rent setting error
money setting error
invalid input
Not enough stock, invalid selling
Not enough money, invalid buying
===Info===
Name: CDEMart
Size: 10
Rent: 5000
Stock: 2
Money: 1750
You don't have enough money to pay the rent
CDEMart will no longer rent
```

## Hint
**修正記錄**
+ 13:30 sample output1 修正，第一行為===Info===
+ 13:45 void buy 處修正`selling`->`buying`如下：需檢查資產的合理性，如果購買總價大於資產，需輸出`Not enough money, invalid buying`並取消交易
+ 13:45 修正拼字錯誤`invaild`->`invalid`
