#ifndef color_cmy_get_gray
#define color_cmy_get_gray

// ::color::get::gray( c )

#include "../../gray/akin/cmy.hpp"
#include "../../gray/trait/component.hpp"
#include "../../gray/constant.hpp"

#include "../category.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"
#include "../../generic/trait/scalar.hpp"


 namespace color
  {
   namespace get
    {
     namespace _internal
      {
       namespace _privateCMY
        {

         template< typename category_name >
          inline
          typename ::color::trait::component< typename ::color::akin::gray<category_name>::akin_type >::return_type
          gray( ::color::_internal::model< category_name > const& color_parameter  )
           {
            typedef typename ::color::trait::scalar<category_name>::instance_type   scalar_type;

            typedef typename ::color::akin::gray<category_name >::akin_type     akin_type;

            typedef ::color::_internal::diverse< akin_type >       diverse_type;
            typedef ::color::_internal::normalize< category_name > normalize_type;

            typedef  ::color::constant::gray< akin_type > gray_const_type;

            scalar_type value =
               gray_const_type::Rc() * ( 1 - normalize_type::template process<0>( color_parameter.template get<0>() ) )
             + gray_const_type::Gc() * ( 1 - normalize_type::template process<1>( color_parameter.template get<1>() ) )
             + gray_const_type::Bc() * ( 1 - normalize_type::template process<2>( color_parameter.template get<2>() ) );

            return diverse_type::template process<0>( value );
           }

        }
      }

      inline
      ::color::_internal::model< color::category::cmy_uint8 >::component_const_type
      gray( ::color::_internal::model< color::category::cmy_uint8 > const& color_parameter )
       {
        return ::color::get::_internal::_privateCMY::gray<color::category::cmy_uint8>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::cmy_uint16 >::component_const_type
      gray( ::color::_internal::model< color::category::cmy_uint16 > const& color_parameter )
       {
        return ::color::get::_internal::_privateCMY::gray<color::category::cmy_uint16>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmy_uint32 >::component_const_type
      gray( ::color::_internal::model< color::category::cmy_uint32 > const& color_parameter )
       {
        return ::color::get::_internal::_privateCMY::gray<color::category::cmy_uint32>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmy_uint64 >::component_const_type
      gray( ::color::_internal::model< color::category::cmy_uint64 > const& color_parameter )
       {
        return ::color::get::_internal::_privateCMY::gray<color::category::cmy_uint64>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmy_float >::component_const_type
      gray( ::color::_internal::model< color::category::cmy_float > const& color_parameter )
       {
        return ::color::get::_internal::_privateCMY::gray<color::category::cmy_float>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmy_double >::component_const_type
      gray( ::color::_internal::model< color::category::cmy_double > const& color_parameter )
       {
        return ::color::get::_internal::_privateCMY::gray<color::category::cmy_double>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmy_ldouble >::component_const_type
      gray( ::color::_internal::model< color::category::cmy_ldouble > const& color_parameter )
       {
        return ::color::get::_internal::_privateCMY::gray<color::category::cmy_ldouble>( color_parameter );
       };


    }
  }

#endif