#include <iostream>

using namespace std;

int main()
{
    int need_nuts;
    cout << "How many nuts do you need:" << endl;
    cin >> need_nuts;

    int bumps;
    int nuts;
    cout << "How many bumps:" << endl;
    cin >> bumps;
    cout << "How many seeds are in the cone:" << endl;
    cin >> nuts;

    cout << "How much did she collect:" << endl;

    int sum = bumps * nuts;

    cout << sum << endl;

    if(need_nuts > sum)

    {
        cout << "It is sad";
    }

    if(need_nuts < sum)

    {
        cout <<"Fine" ;
    }

}
