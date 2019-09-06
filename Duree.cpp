//
//  Duree.cpp
//  Duree
//
//  Created by Justin Guerinot on 06/09/2019.
//  Copyright © 2019 Justin Guerinot. All rights reserved.
//

#include "Duree.hpp"
#include <iostream>

using namespace std;


// Méthodes de Duree

Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures),
m_minutes(minutes), m_secondes(secondes)
{
    
}

void Duree::afficher() const
{
    cout << m_heures << ": " << m_minutes << ": " << m_secondes << endl;
}

bool Duree::estEgal(Duree const& b) const
{
    return(m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes == b.m_secondes);
}

bool Duree::estPlusPetitQue(Duree const& b) const
{
    if (m_heures < b.m_heures)
        return true;
    else if (m_heures == b.m_heures && m_minutes < b.m_minutes)
        return true;
    else if (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes < b.m_secondes)
        return true;
    else
        return false;
}

// Surchage d'opérateur

bool operator==(Duree const& a, Duree const& b)
{
    return a.estEgal(b);
}

bool operator!= (Duree const& a, Duree const& b)
{
    return !(a==b);
}

bool operator<  (Duree const& a, Duree const& b)
{
    return a.estPlusPetitQue(b);
}
