#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  color::rgb<double>  r;

  // Do some initialization
  r = color::constant::red_t{};

  // First check has to be OK
  std::cout << "true == color::check::overburn( r ) == " << color::check::overburn( r ) << std::endl;

  r.set<0>( 20.0 );

  // This one has to fail
  std::cout << "false == color::check::overburn( r ) == " << color::check::overburn( r ) << std::endl;

  return EXIT_SUCCESS;
 }