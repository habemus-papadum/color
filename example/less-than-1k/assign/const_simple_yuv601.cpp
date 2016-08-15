#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  color::yuv<double, ::color::constant::yuv::BT_601_entity>          c; //!< Instead of float you may put std::uint8_t,std::uint16_t, std::uint32_t, std::uint64_t, double, long double

  // Initialize from constant
  c = ::color::constant::lavender_type{};

  //  now you may do whatever you want to do with c
  return EXIT_SUCCESS;
 }