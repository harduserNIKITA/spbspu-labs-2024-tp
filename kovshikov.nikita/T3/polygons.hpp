#ifndef POLYGON_HPP
#define POLYGON_HPP
#include <vector>
#include "point.hpp"

namespace kovshikov
{
  struct Polygon
  {
    std::vector< Point > points;
  };
 //std::istream& operator>>(std::istream& is, Polygon& value);
}

#endif
