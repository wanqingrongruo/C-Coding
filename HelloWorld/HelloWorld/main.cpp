//
//  main.cpp
//  HelloWorld
//
//  Created by roni on 2022/3/3.
//

#include <iostream>
#include <string>

#define developer "roni"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";

    int a = 10;
    const int b = 20;
    char ch = 'r';
    char str[] = "roni";
    string str01 = "leaf";
    bool isMale = false;

    int cinValue = 1;
    cout << "请输入新值: ";
    cin >> cinValue;

    cout << "cinValue = " << cinValue << "\n";

    cout << "a=" << a << " by " << developer << "\n";

    cout << "内存空间: " << sizeof(int) << "\n";

    return 0;
}


