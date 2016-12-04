#include <iostream>
using namespace std;
int main (){
    int num;
    int sumEven = 0;
    int countOdd= 0;

    while (num != 0)
    {
        cout << "Insert positive number: ";
        cin >> num;
        if (num > 0)
        {
        if(num % 2 == 1 && num != 0)
        {
            countOdd++;
            countOdd = countOdd++ ;
        }
        if (num % 2 == 0){
            num = num++;
            sumEven += num;
        }
    }

    }
    cout << "Odd numbers are: " << countOdd << endl;
    cout << "Sum of even numbers: " << sumEven << endl;
    return 0;
}
