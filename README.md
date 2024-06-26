# 小專題：Black Jack 21點

## 系級班級 1B 3B 4B

## 成員 劉宗柏(組長) 童冠晨 陳毓霖

## 專題題目:Black Jack
## 程式介紹
Black Jack 21 點是一款撲克牌遊戲，玩家的目標是使手中的牌點數之和盡量接近或等於21點，但不能超過。玩家與莊家（電腦）進行比較，誰的牌點數更接近21點就贏得本局。

## 程式規則

洗牌。
分牌給玩家和莊家。
顯示玩家的牌和點數。

玩家回合:

詢問玩家是否要牌。
如果玩家選擇要牌，則從牌堆中抽取一張牌並加入玩家的牌中  輸入1。
計算玩家的點數。
顯示玩家的牌和點數。
如果玩家爆牌，則遊戲結束，莊家獲勝。
如果玩家的點數為21，則玩家獲勝，遊戲結束。
如果玩家選擇不要牌，輸入2，則轉到莊家回合。

莊家回合:

計算莊家的點數。
如果莊家的點數大於或等於17，則莊家停止要牌。
如果莊家的點數小於17，則莊家繼續要牌。
從牌堆中抽取一張牌並加入莊家的牌中。
計算莊家的點數。
如果莊家爆牌，則玩家獲勝，遊戲結束。
顯示莊家的牌和點數。

判定勝負:

比較玩家和莊家的點數。
如果玩家的點數大於莊家的點數，則玩家獲勝。
如果玩家的點數小於莊家的點數，則莊家獲勝。
如果玩家和莊家的點數相同，則平局。

詢問玩家是否重新開始:

如果玩家選擇重新開始，輸入3，則轉到步驟1。
如果玩家選擇退出，輸入4，則遊戲結束。

## 程式玩法
洗牌：確保牌組隨機性。
分牌：給玩家和莊家各兩張牌。
詢問要牌：玩家和莊家是否有機會增加點數。
計算點數：追蹤玩家和莊家目前的點數。
判定勝負：比較玩家和莊家最終的點數。
詢問重新開始：給玩家再次遊玩的機會。

## 安裝與執行
![image](https://github.com/andyjkjk/Black-jack/assets/127190935/867a2c2f-5372-4694-b902-4817789501d0)
下載後開啟使用visual studio執行即可。


## 程式畫面截圖
![image](https://github.com/andyjkjk/Black-jack/assets/127190935/bc668a7d-fbb2-47cd-b7c5-ea2a8117c946)
![image](https://github.com/andyjkjk/Black-jack/assets/127190935/7f04906c-b28f-44fc-af59-592833b8235c)
![image](https://github.com/andyjkjk/Black-jack/assets/127190935/bab04046-b0ea-4a74-8ead-23fcbb01012c)

輸入3後則會重新開始

![image](https://github.com/andyjkjk/Black-jack/assets/127190935/caccf30e-da4c-41a8-9c14-50e31f974775)

輸入4結束程式

![image](https://github.com/andyjkjk/Black-jack/assets/127190935/b4eb353f-ce99-473a-8199-bbd0351d8947)



## 分工資訊
- **資工1B 劉宗柏(組長):判斷是否超過21。

- **資工3B 童冠晨:要牌、不要牌。

- **資工4B 陳毓霖:洗牌、發牌。
  


