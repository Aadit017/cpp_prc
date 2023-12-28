#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    srand(time(0));
    int random=1+(rand()%10);
    int input=0;
    while(input!=random){
        cout << "Guess" <<endl;
        cin >> input;
        if(input>random){
            cout << "low "<<endl;
        }else if ( input < random ){
            cout << "high" <<endl;
        }
    }
    cout << "youre correct , the number was indeed "<< random;
    return 0;
}