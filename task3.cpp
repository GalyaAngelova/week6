# #include <iostream>
using namespace std;

int main (){
    int num;
    cout << "Insert number: ";
    cin >> num;
    int counter = 0;
    char symbol;
    for (int i= 1 ; i <= num; i++){
        symbol = num;
        cout << "Insert a symbol: ";
        cin >> symbol;
        if (symbol >= 97 && symbol <=122){
            counter++;
            counter = counter ++;
        }
    }
    cout << "Symbols are: " << counter << endl;
    return 0;
}
