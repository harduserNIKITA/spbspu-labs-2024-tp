#ifndef HELPSTRUCTS_HPP
#define HELPSTRUCTS_HPP

#include <iostream>
#include <string>

namespace sobolevsky
{
  struct Delimitr
  {
    char expected = 0;
  };

std::istream & operator>>(std::istream & in, sobolevsky::Delimitr && exp);
}

#endif
