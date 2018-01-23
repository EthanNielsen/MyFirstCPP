//
//  Runner.cpp
//  MyFirstCPP
//
//  Created by Nielsen, Ethan on 1/23/18.
//  Copyright © 2018 Ctech. All rights reserved.
//

#include "Controller.hpp"

int main()
{
    Controller app;
    app.start();
    
    Controller * appPointer = new Controller(); // use new when you are using a Pointer
    appPointer->start(); // The -> is the selecter operator. It starts Pointers "(*appPointer).start();" has the same effect.
    
    return 0;
}
