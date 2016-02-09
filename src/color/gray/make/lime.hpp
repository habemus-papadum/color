#ifndef color_gray_make_lime
#define color_gray_make_lime

// ::color::make::lime( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 1, 0 } ) - rgb(0,255,0) - #00FF00

     template< typename tag_name >
      inline
      void lime( ::color::_internal::model< ::color::category::gray< tag_name > > & color_parameter )
       {
        typedef ::color::category::gray< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::gray< double >      right_type;

        static left_type local( right_type( { 0.7151522 } ) );

        color_parameter = local;
       }

    }
  }

#endif
