#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Insert a number: ";
    cin >> number;
    int sum = 0;
    bool flag=true;
    for (int i = 1; i < number; i++)
        {
        if (number % i ==0)
        {
            sum += i;
        }
    }
    if(sum == number)
        cout << "Perfect number."<< endl;
    else
        cout << "Not perfect number." << endl;
    return 0;
}
