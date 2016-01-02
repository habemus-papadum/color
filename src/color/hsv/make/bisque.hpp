#ifndef color_hsv_make_bisque
#define color_hsv_make_bisque

// ::color::make::bisque( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 1, 0.894118, 0.768627 } ) 

      inline
      void bisque( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xc8;
       }

      inline
      void bisque( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xfce2;
       }

      inline
      void bisque( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffff3a17u;
       }

      inline
      void bisque( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffffff3b3a1724ul;
       }

      inline
      void bisque( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.0903955, 0.231373, 1 } );
       }

      inline
      void bisque( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.0903955, 0.231373, 1 } );
       }

      inline
      void bisque( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.0903955, 0.231373, 1 } );
       }

    }
  }

#endif