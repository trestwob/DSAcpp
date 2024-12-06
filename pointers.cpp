#include <iostream>
using namespace std;
int main()
{
    int i = 15, j, *p, *q;
    cout << "Step 1 " << i << " i " << j << " j " << *p << " p " << *q << " q " << endl;
    p = &i;
    cout << "Step 2 " << i << " i " << j << " j " << *p << " p " << *q << " q " << endl;
    *p = 20;
    cout << "Step 3 " << i << " i " << j << " j " << *p << " p " << *q << " q " << endl;
    j =  2 * *p;
    cout << "Step 4 " << i << " i " << j << " j " << *p << " p " << *q << " q " << endl;
    q = &i;
    cout << "Step 5 " << i << " i " << j << " j " << *p << " p " << *q << " q " << endl;
    //p = new int; //uncomment the line to observe memory allocation
    *p = *q - 1;
    cout << "Step 6 " << i << " i " << j << " j " << *p << " p " << *q << " q " << endl;
    q = &j;
    cout << "Step 7 " << i << " i " << j << " j " << *p << " p " << *q << " q " << endl;
    *p = *q - 1;
    cout << "Step 8 " << i << " i " << j << " j " << *p << " p " << *q << " q " << endl;
    return 0;
}
