#ifndef color_rgb_get_green
#define color_rgb_get_green

// ::color::get::green( c )



 namespace color
  {
   namespace get
    {
     namespace _internal
      {
       namespace rgb
        {
         namespace _internal
          {

           template< typename category_name >
            inline
            typename ::color::_internal::model< category_name >::component_const_type
            green( ::color::_internal::model< category_name > const& color_parameter  )
             {
              return color_parameter.template get<1>();
             }

          }
        }
      }

      inline
      ::color::_internal::model< color::category::rgb_uint8 >::component_const_type
      green( ::color::_internal::model< color::category::rgb_uint8 > const& color_parameter )
       {
        return ::color::get::_internal::rgb::_internal::green<color::category::rgb_uint8>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::rgb_uint16 >::component_const_type
      green( ::color::_internal::model< color::category::rgb_uint16 > const& color_parameter )
       {
        return ::color::get::_internal::rgb::_internal::green<color::category::rgb_uint16>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::rgb_uint32 >::component_const_type
      green( ::color::_internal::model< color::category::rgb_uint32 > const& color_parameter )
       {
        return ::color::get::_internal::rgb::_internal::green<color::category::rgb_uint32>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::rgb_uint64 >::component_const_type
      green( ::color::_internal::model< color::category::rgb_uint64 > const& color_parameter )
       {
        return ::color::get::_internal::rgb::_internal::green<color::category::rgb_uint64>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::rgb_float >::component_const_type
      green( ::color::_internal::model< color::category::rgb_float > const& color_parameter )
       {
        return ::color::get::_internal::rgb::_internal::green<color::category::rgb_float>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::rgb_double >::component_const_type
      green( ::color::_internal::model< color::category::rgb_double > const& color_parameter )
       {
        return ::color::get::_internal::rgb::_internal::green<color::category::rgb_double>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::rgb_ldouble >::component_const_type
      green( ::color::_internal::model< color::category::rgb_ldouble > const& color_parameter )
       {
        return ::color::get::_internal::rgb::_internal::green<color::category::rgb_ldouble>( color_parameter );
       }


    }
  }

#endif
