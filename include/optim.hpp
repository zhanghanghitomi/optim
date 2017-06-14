/*################################################################################
  ##
  ##   Copyright (C) 2016-2017 Keith O'Hara
  ##
  ##   This file is part of the OptimLib C++ library.
  ##
  ##   OptimLib is free software: you can redistribute it and/or modify
  ##   it under the terms of the GNU General Public License as published by
  ##   the Free Software Foundation, either version 2 of the License, or
  ##   (at your option) any later version.
  ##
  ##   OptimLib is distributed in the hope that it will be useful,
  ##   but WITHOUT ANY WARRANTY; without even the implied warranty of
  ##   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  ##   GNU General Public License for more details.
  ##
  ################################################################################*/

#ifndef OPTIMLIB_INCLUDES
#define OPTIMLIB_INCLUDES

#include "armadillo"

#include "misc/OPTIM_OPTIONS.hpp"

namespace optim
{
    // structs
    #include "misc/optim_structs.hpp"

    // misc files
    #include "misc/misc.hpp"

    // line search
    #include "line_search/line_search.hpp"

    // unconstrained optimization
    #include "unconstrained/unconstrained.hpp"

    // constrained optimization
    #include "constrained/constrained.hpp"

    // generic wrappers
    #include "generic/generic.hpp"

    // solving systems of nonlinear equations
    #include "zeros/zeros.hpp"
}

#endif