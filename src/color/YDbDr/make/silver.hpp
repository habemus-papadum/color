#ifndef color_YDbDr_make_silver
#define color_YDbDr_make_silver

// ::color::make::silver( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.75, 0.75, 0.75 } ) - rgb(191,191,191) - #BFBFBF

     template< typename tag_name >
      inline
      void silver( ::color::model< ::color::category::YDbDr< tag_name > > & color_parameter )
       {
        typedef ::color::category::YDbDr< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YDbDr< double >      right_type;

        static left_type local( right_type( { 0.75, -2.22044605E-16, 6.66133815E-16 } ) );

        color_parameter = local;
       }

    }
  }

#endif