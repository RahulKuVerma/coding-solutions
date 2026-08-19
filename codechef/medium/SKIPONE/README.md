# SKIPONE

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Skip one

You have $K$ coins with you, and up ahead are $N$ items. The $i$-th item costs you $A_i$ coins to buy.

You also have a special one-time only discount coupon, which can be used to make one item of your choice free to buy.

You have a special constraint that you can buy items in the order $1, 2, \ldots, N$, and if you choose to not buy some item, you cannot buy the later ones either.

Find the maximum number of items you can buy under these constraints.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains $2$ integers $N$ and $K$. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the maximum items you can buy.

### Constraints
- $1 \le T \le 10^4$
- $2 \le N \le 2 \cdot 10^5$
- $1 \le A_i \le 10^4$
- $1 \le K \le 10^9$
### Sample 1:
Input
Output

```
3
7 11
1 2 3 4 5 6 1
2 5
7 7
4 4
100 2 1 1

```

```
5
1
4
```

### Explanation:

 **Test Case 1:**  We can buy the first $5$ items, using a discount token on the fifth, spending a total of $1 + 2 + 3 + 4 = 10$ coins on the others. Note that we cannot buy the $7$th item even though we have the coins left for it, because we are forced to buy the $6$th first.

 **Test Case 2:**  We do not have enough coins for any items, but we can still use our discount token for the first.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-19T15:22:12.205Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int sum=0;
	    int count=0;
	    bool flag=true;
	    for(int i=0;i<n;i++){
	        if(arr[i]<=k){
	        sum=sum+arr[i];
	        count++;}
	        if(arr[i]>=k || sum>=k){
	            count++;
	            flag = false;
	        }
	        if(sum>=k && flag ==false){
	            break;
	        }
	    }
	    cout<<count<<endl;
	}
return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SKIPONE)