# NCTU-23821 - Can You Solve It?

請參考下圖的二維座標系統 (笛卡兒座標系)，垂直為 X 軸，水平為 Y 軸，每個圓點有一個座標。在座標系統上可以隨著箭頭所表示之路徑，從座標上的一圓點出發移動到另一圓點，所經過之路徑的距離定義為：經過的座標點數加 1，例如從 (0, 3) 到 (3, 0) 必須先經過 (1, 2) 與 (2, 1) 兩點，所以距離等於 2 + 1 = 3。本題會給定兩個座標點，請你計算從出發點到目的點的距離，你可以假設不能用箭頭的反方向回頭。

![](http://gpe3.acm-icpc.tw/pct/images/8870d5bbbdbbe4e90619a25a1f112e27.jpg)

> * 題目來源：**UVA-10642**
> * 限定時間：1 sec

---
## Input

輸入的第一列為一個整數 n (0 < n <= 500) 表示測試資料的組數，接下來有 n 列測試資料，每列有四個整數，其值介於 0 ~ 100,000 之間 (包含 0 和 100,000)，第一對整數表示出發點 (x1, y1)，第二對表示目的點 (x2, y2)。

---
## Output

每個測試組輸出格式為："Case i: a"，其中 "i" 代表這是第幾組測試資料 (由 1 開始)，且 "a" 為從出發點到目的點的距離，你可以假定從出發點一定可以到達目的點。

---
## Sample Input

```
3
0 0 0 1
0 0 1 0
0 0 0 2
```

---
## Sample Output

```
Case 1: 1
Case 2: 2
Case 3: 3
```
