#include <iostream>

#include <algorithm>

using namespace std;
int main(){
    int n;
    cin >> n;
    
    int arr[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        int max = arr[i][0];

        for(int j = 1; j < n; j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];

            }
            
        }
        
    

    for(int j = 0; j < n; j++)
    {
        cout << max << " ";
    }
    cout << endl;
}







    return 0;
}