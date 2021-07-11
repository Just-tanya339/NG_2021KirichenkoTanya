#include <iostream>

using namespace std;

int main()
{

    int money = 0;
    cout << "how much did you earn:";
    cin >> money;

    if (money > 1000) {
        cout << "Awesome!";
    }

    if (money < 1000){
        cout << "so bad!";
    }

    if(money < 1000000){
        cout << "you are a millionaire";
    }

    cout << ",but work harder";

}
