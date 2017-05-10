//
//  S_Expression.cpp
//  Scheme++
//
//  Created by Josh Sun on 2017-05-09.
//  Copyright © 2017 Josh Sun. All rights reserved.
//

#include "S_Expression.hpp"

S_Expression::S_Expression(std::vector<std::string>& s) : s(s) {};

std::vector<std::string> S_Expression::value() { return s; }