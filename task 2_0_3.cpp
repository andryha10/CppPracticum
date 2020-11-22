#include <iostream>
#include <cmath>
using namespace std;
int main(){const int SIZE = 10;double array[SIZE] = { 0 };
    for (int i = 0; i < SIZE; ++i){
        int elem;
        cin >> elem;
        array[i] = elem;
    }
    double summ = 0;
    for (int i = 0; i < 5; ++i)
    {if (array[i] > exp(1)){
        summ += array[i];}
    }
    cout << "Amount: " << summ;
}
