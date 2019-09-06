//
//  Duree.hpp
//  Duree
//
//  Created by Justin Guerinot on 06/09/2019.
//  Copyright © 2019 Justin Guerinot. All rights reserved.
//

#ifndef Duree_hpp
#define Duree_hpp

#include <stdio.h>

class Duree
{
public:
    Duree(int heures = 0, int minutes = 0, int secondes = 0);
    void afficher() const;
    bool estEgal(Duree const& b) const;
    bool estPlusPetitQue(Duree const& b) const;
    
private:
    int m_heures;
    int m_minutes;
    int m_secondes;
};

bool operator== (Duree const& a, Duree const& b);
bool operator!= (Duree const& a, Duree const& b);
bool operator<  (Duree const& a, Duree const& b);
#endif /* Duree_hpp */
