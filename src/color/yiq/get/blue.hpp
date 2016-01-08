#ifndef color_yiq_get_blue
#define color_yiq_get_blue

#include "../../generic/trait/component.hpp"
#include "../../generic/trait/container.hpp"


#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"


// ::color::get::blue( c )
 namespace color
  {
   namespace get
    {
     namespace _internal
      {
       namespace _privateYIQ
        {

         template< typename category_name, typename scalar_name = double >
          inline
          typename ::color::_internal::model< category_name >::component_const_type
          blue( ::color::_internal::model< category_name > const& color_parameter  )
           {
            typedef ::color::_internal::normalize< category_name, scalar_name > normalize_type;
            typedef ::color::_internal::diverse< category_name, scalar_name >   diverse_type;

            scalar_name value =
                  1.00000 * normalize_type::template process<0>( color_parameter.template get<0>() )
               -  1.15704 * normalize_type::template process<1>( color_parameter.template get<1>() )
               +  2.03086 * normalize_type::template process<2>( color_parameter.template get<2>() )
               -0.436912;

            // BUG !!!
            return diverse_type::template process<0>( value );
           }

        }
      }

      inline
      ::color::_internal::model< color::category::yiq_uint8 >::component_const_type
      blue( ::color::_internal::model< color::category::yiq_uint8 > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::blue<color::category::yiq_uint8>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::yiq_uint16 >::component_const_type
      blue( ::color::_internal::model< color::category::yiq_uint16 > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::blue<color::category::yiq_uint16>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::yiq_uint32 >::component_const_type
      blue( ::color::_internal::model< color::category::yiq_uint32 > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::blue<color::category::yiq_uint32>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::yiq_uint64 >::component_const_type
      blue( ::color::_internal::model< color::category::yiq_uint64 > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::blue<color::category::yiq_uint64>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::yiq_float >::component_const_type
      blue( ::color::_internal::model< color::category::yiq_float > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::blue<color::category::yiq_float>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::yiq_double >::component_const_type
      blue( ::color::_internal::model< color::category::yiq_double > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::blue<color::category::yiq_double>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::yiq_ldouble >::component_const_type
      blue( ::color::_internal::model< color::category::yiq_ldouble > const& color_parameter )
       {
        return ::color::get::_internal::_privateYIQ::blue<color::category::yiq_ldouble>( color_parameter );
       };


    }
  }

#endif
