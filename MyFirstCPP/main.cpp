//
//  main.cpp
//  MyFirstCPP
//
//  Created by Nielsen, Ethan on 1/23/18.
//  Copyright © 2018 Ctech. All rights reserved.
//

#include <iostream> // *Pre proccesor directives have no semi colins.

using namespace std; // For this entire file it uses std, so havingthis in methods is not needed.

int oldMain()
{
    // insert code here...
    cout << "Hello, World!" << endl; // endl is basically a "new line" instead of doing "/n"
    string input;
    getline(cin, input);
    cout << "You said:" << input << endl;
    return 99;
}
