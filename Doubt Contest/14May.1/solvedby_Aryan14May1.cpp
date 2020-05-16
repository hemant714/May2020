// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
void printDuplicates(int arr[], int n);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        printDuplicates(a, n);
        cout << endl;
    }
    return 0;
}// } Driver Code Ends


/*Complete the function below*/
void printDuplicates(int a[], int n) {
    int arr[n],check=0;
    for (int i = 0; i < n; ++i) {
        arr[i]=a[i];
    }
    sort(arr,(arr+n));       
    for (int j = 0; j <n; ++j) {
        if((arr[j]==arr[j+1]) && ((arr[j]!=arr[j-1]) ||(j==0))){
            check=1;
            cout<<arr[j]<<" ";
        }
    }
    if(not check)
       cout<<-1;
}
