#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int search(int arr[], int N, int x)
{
    int i;
    for (i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main(void)
{
    srand(time(0));
    int a[10];
    freopen("input.txt", "r", stdin);
     for(int i=0;i<10;i++)
     {
         //a[i]=rand()%10;
         cin>>a[i];
        // cout<<a[i]<<"\n";
     }

    int x=32516;

    int N = sizeof(a) / sizeof(a[0]);


    int result = search(a, N, x);
    if(result == -1){cout << "Element is not present in array\n";}
    else{cout << "Element is present at index " << result;}
    return 0;
}
