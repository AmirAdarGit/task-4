#include <iostream>
using namespace std;

int main() 
{
    string str = "3,1";
    char ch = str.at(0);
    int num = ch - '0';
    cout << num;
    return 0;
}