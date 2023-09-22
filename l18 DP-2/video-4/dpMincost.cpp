




// Wrong Output coming please correct it




#include <iostream>
using namespace std;
#include <climits> //for INT_MAX

int minCost_DP(int **arr, int n, int m)
{
    int **input = new int *[n];
    for (int i = 0; i < n; i++)
    {
        input[i] = new int[m];
    }

    // Fill the last cell i.e destination
    input[n - 1][m - 1] = arr[n - 1][m - 1];

    // Fill last row(right to left)
    for (int j = m - 2; j >= 0; j--)
    {
        input[n - 1][j] = input[n - 1][j + 1] + input[n - 1][j];
    }

    // Fill last column(bottom to top)
    for (int i = n - 2; i >= 0; i--)
    {
        input[i][m - 1] = input[i + 1][m - 1] + input[i][m - 1];
    }

    // Fill remaining cells
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = m - 2; j >= 0; j--)
        {
            input[i][j] = min(input[i][j + 1], min(input[i + 1][j + 1], input[i + 1][j])) + input[i][j];
        }
    }

    return input[0][0];
}

int main()
{
    int n, m;
    cin >> n >> m;

    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << minCost_DP(arr, n, m) << endl;

    return 0;
}

/*
Sample Input 1 :
3 4
3 4 1 2
2 1 8 9
4 7 8 1

Sample Output 1 :
13

Sample Input 2 :
3 4
10 6 9 0
-23 8 9 90
-200 0 89 200

Sample Output 2 :
76

Sample Input 3 :
5 6
9 6 0 12 90 1
2 7 8 5 78 6
1 6 0 5 10 -4
9 6 2 -10 7 4
10 -2 0 5 5 7

Sample Output 3 :
18
*/