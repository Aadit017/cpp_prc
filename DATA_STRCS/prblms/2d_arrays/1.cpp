#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int r, c;
    // 5 rows with 5 elements each
    cout << "Enter rows followed by columns" << endl;
    cin >> r >> c;
    vector<vector<int>> vec(r, vector<int>(c));
    for (int i = 0; i < r; i += 1)
    {
        for (int j = 0; j < c; j += 1)
        {
            cout << i + 1 << "th row" << j + 1 << "th col";
            cin >> vec[i][j];
        }
    }
    for (int i = 0; i < r; i += 1)
    {
        for (int j = 0; j < c; j += 1)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}