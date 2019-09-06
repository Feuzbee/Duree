//
//  main.cpp
//  Duree
//
//  Created by Justin Guerinot on 06/09/2019.
//  Copyright © 2019 Justin Guerinot. All rights reserved.
//

#include <iostream>
#include "Duree.hpp"

using namespace std;

int main()
{
    Duree duree1(0, 10, 28), duree2(0, 2, 13);
    
    if (duree1 < duree2)
        cout << "La premiere duree est plus petite";
    else
        cout << "La premiere duree n'est pas plus petite";
    
    return 0;
}
