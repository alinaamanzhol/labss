#include <iostream>

using namespace std;
int main(){ 
    int n;
    cin >> n;

    int arr[n][n];

   
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; i++)
        {
            cin >> arr[i][j];
        }
    }

    int max = arr[0][0];
    int posX = 0;
    int posY = 0;

    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; i++)
        {
            if(i == j) 
            {
                if(arr[i][j] > max)
                {
                    max = arr[i][j];
                    posX = i;
                    posY = j;
                }
            }

        }
    }

    cout << "Maximum element is: " << max;
    cout << " with coordinates " << posX + 1 << ';' << posY + 1;







    return 0;
}