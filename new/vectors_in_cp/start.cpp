#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1;
    v1.push_back(12);
    v1.push_back(23);
    v1.push_back(2);
    v1.push_back(223);
    v1.push_back(2233);
    cout << "printer vector" << endl;
    for (auto i = v1.begin(); i != v1.end(); i += 1)
    {
        cout << *i << endl;
    }
}

/*
!vectors are basically dynamic arrays with the ability to resize themselves as the elements get inserted or deleted
begin() – Returns an iterator pointing to the first element in the vector
end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
cbegin() – Returns a constant iterator pointing to the first element in the vector.
cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
*/