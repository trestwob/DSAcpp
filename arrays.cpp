#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1 , 2, 3}, sum, *i, *q;
    for (sum = *a, i = a+1; i < a + 3; i++) {
        sum += *i;
    }
    cout << sum << endl;
    
    i = new int[10];
    for (sum = *i, q = i+1; q < i+10; q++) {
        sum += *q;
    }
    cout << sum << endl;
    delete [] i;
}
