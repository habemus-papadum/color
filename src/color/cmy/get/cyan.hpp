#ifndef color_cmy_get_cyan
#define color_cmy_get_cyan

// ::color::get::cyan( c )



 namespace color
  {
   namespace get
    {

     inline
     ::color::_internal::model< color::category::cmy_uint8 >::component_const_type
     cyan( ::color::_internal::model< color::category::cmy_uint8 > const& color_parameter )
      {
       return color_parameter.template get<0>();
      }

     inline
     ::color::_internal::model< color::category::cmy_uint16 >::component_const_type
     cyan( ::color::_internal::model< color::category::cmy_uint16 > const& color_parameter )
      {
       return color_parameter.template get<0>();
      };

     inline
     ::color::_internal::model< color::category::cmy_uint32 >::component_const_type
     cyan( ::color::_internal::model< color::category::cmy_uint32 > const& color_parameter )
      {
       return color_parameter.template get<0>();
      };

     inline
     ::color::_internal::model< color::category::cmy_uint64 >::component_const_type
     cyan( ::color::_internal::model< color::category::cmy_uint64 > const& color_parameter )
      {
       return color_parameter.template get<0>();
      };

     inline
     ::color::_internal::model< color::category::cmy_float >::component_const_type
     cyan( ::color::_internal::model< color::category::cmy_float > const& color_parameter )
      {
       return color_parameter.template get<0>();
      };

     inline
     ::color::_internal::model< color::category::cmy_double >::component_const_type
     cyan( ::color::_internal::model< color::category::cmy_double > const& color_parameter )
      {
       return color_parameter.template get<0>();
      };

     inline
     ::color::_internal::model< color::category::cmy_ldouble >::component_const_type
     cyan( ::color::_internal::model< color::category::cmy_ldouble > const& color_parameter )
      {
       return color_parameter.template get<0>();
      };

    }
  }

#endif
