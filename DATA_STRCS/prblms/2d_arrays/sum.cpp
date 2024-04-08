#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> vec(r, vector<int>(c));
    int sum = 0;
    cout << "Enter elements for the 2d array " << endl;
    for (int i = 0; i < r; i += 1)
    {
        for (int j = 0; j < c; j += 1)
        {
            cin >> vec[i][j];
            sum += vec[i][j];
        }
    }
    cout << "Sum of all the elements" << sum << endl;
}