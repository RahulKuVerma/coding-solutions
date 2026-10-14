# CHANGEONE7

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Change One

You are given an array $A$ of $N$ integers, and you can change exactly one element in it.

After changing one element, find the minimum possible value of $\max(A) - \min(A)$, where $\max(A)$ denotes the maximum element of the array $A$, and $\min(A)$ denotes the minimum element of the array.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains a single integer $N$. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output the minimum possible value of $\max(A) - \min(A)$ after changing one element.

### Constraints
- $1 \le T \le 100$
- $2 \le N \le 100$
- $1 \le A_i \le 100$
### Sample 1:
Input
Output

```
3
2
7 4
3
1 4 6
3
1 3 6

```

```
0
2
2
```

### Explanation:

 **Test Case 1:**  Change $A_2 = 7$ to get $[7, 7]$ which has $\max(A) - \min(A) = 0$.

 **Test Case 2:**  Change $A_1 = 4$ to get $[4, 4, 6]$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-14T15:02:45.277Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int N;
    cin>>N;
    vector<int>arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
      if(N==2){
        cout<< 0<<endl;
        continue;
    }
    
     sort(arr.begin(), arr.end());

        int mi = arr[0];
        int ma = arr[N-1];
        int mi2 = arr[1];       
        int ma2 = arr[N-2];     
    
    int fin= ma2-mi;
    int fin2 = ma-mi2;
    int res = std::min(fin,fin2);
    cout<<res<<endl;
}
return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CHANGEONE7)