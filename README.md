# Activity-Plan
輸入：其格式如下：
n
s1s2…sn
f1f2…fn
其中n為一正整數，s1,…,sn為n個分別以一格空白區隔之正整數序列，f1,…,fn為n個分別以一格空白區隔之正整數序列。其中[si,fi)代表第i個activity之開始時間與終止時間。
輸出：一組的activities，其中每一activity均不overlap，而且個數最多。輸出格式如下：
N
(i1,i2,…,iN)
其中N為可安排之最大活動數，(i1,i2,…,in)為活動順序。
輸入範例：
Input
11
1 3 0 5 3 5 6 8 8 9 12
4 5 6 7 8 9 10 11 12 13 14
Output
4
(1,4,8,11)
補充說明：
1. 參數之範圍為n<=1000。si,fi<=1000