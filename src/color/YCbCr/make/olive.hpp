#ifndef color_YCbCr_make_olive
#define color_YCbCr_make_olive

// ::color::make::olive( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 0.5, 0 } ) - rgb(127,127,0) - #7F7F00

     template< typename tag_name >
      inline
      void olive( ::color::model< ::color::category::YCbCr< tag_name > > & color_parameter )
       {
        typedef ::color::category::YCbCr< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YCbCr< double >      right_type;

        static left_type local( right_type( { 0.442825, -0.2500005, 0.040656 } ) );

        color_parameter = local;
       }

    }
  }

#endif