#include <iostream>
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

    int posX = 0;
    int posY = 0;
    int max = arr[0][0];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i][j] > max) {
                max = arr[i][j];
                posX = i;
                posY = j;
            }

        }
    }

    cout << posX + 1 << " " << posY + 1;




    return 0;
}