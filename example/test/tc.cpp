#include <iostream>
#include <iomanip>

#include "color/color.hpp"

#include "./image.hpp"

int main( int argc, char *argv[] )
 {
  if( 4 != argc )
   {
    std::cout << "Not enought command line parameters" << std::endl;
    return EXIT_FAILURE;
   }

  bgr_image_type  left_data;
  bgr_image_type right_data;

  targa_header_struct  header_left;
  targa_header_struct  header_right;

  if( false == targa_image_load( header_left,   left_data,  argv[1] ) )
   {
    std::cout << "Can not open left" << std::endl;
    return EXIT_FAILURE;
   }

  if( false == targa_image_load( header_right,  right_data, argv[2] ) )
   {
    std::cout << "Can not open right" << std::endl;
    return EXIT_FAILURE;
   }

  const int depth_left  = targa_get_depth(  header_left ); const int  depth_right = targa_get_depth(  header_right );
  const int width       = targa_get_width(  header_left ); const int  width_right = targa_get_width(  header_right );
  const int height      = targa_get_height( header_left ); const int height_right = targa_get_height( header_right );

  if( depth_left != depth_right )
   {
    std::cout << "Different depth" << std::endl;
    return EXIT_FAILURE;
   }

  if( width != width_right )
   {
    std::cout << "Different width" << std::endl;
    return EXIT_FAILURE;
   }

  if( height!= height_right )
   {
    std::cout << "Different height" << std::endl;
    return EXIT_FAILURE;
   }

  bgr_image_type difference;

  bgr_color_type max = ::color::constant::black_t{};

  difference.resize( width * height );

  for(int y=0; y< height; y++)
   for(int x=0; x< width; x++)
    {
     ::color::operation::delta( difference[ y*width+x], left_data[ y*width+x], right_data[ y*width+x] );

     max[0] = std::max( max[0], difference[ y*width+x][0] );
     max[1] = std::max( max[1], difference[ y*width+x][1] );
     max[2] = std::max( max[2], difference[ y*width+x][2] );
    }

  std::cout << "R:" << (int)max[0] << "; G:" << (int)max[1] << "; B:" << (int)max[2] << std::endl;

  if( 0 == max[0] )  max[0] = 255;
  if( 0 == max[1] )  max[1] = 255;
  if( 0 == max[2] )  max[2] = 255;

  /*std::for_each( difference.begin(), difference.end(), [&max]( bgr_color_type & d )
    {
     d[0] *= 255/max[0];
     d[1] *= 255/max[1];
     d[2] *= 255/max[2];
    } );*/

  for(int y=0; y< height; y++)
   for(int x=0; x< width; x++)
    {
     difference[ y*width+x][0] *= 255/max[0];
     difference[ y*width+x][1] *= 255/max[1];
     difference[ y*width+x][2] *= 255/max[2];
    }

  save_image24( argv[3], difference, width, height );

  return EXIT_SUCCESS;
 }
