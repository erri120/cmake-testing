//
// Created by Florian on 01/03/2021.
//

#include "stuff.h"

stuff::stuff() {
    m_data = true;
}

stuff::~stuff() {
   m_data = false;
}

bool stuff::something() const {
    return m_data;
}