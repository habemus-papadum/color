#ifndef color_gray_akin_lab
#define color_gray_akin_lab

#include "../../generic/akin/gray.hpp"
#include "../category.hpp"
#include "../../lab/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct gray< ::color::category::lab_uint8   >{ typedef ::color::category::gray_uint8   akin_type; };
    template< >struct gray< ::color::category::lab_uint16  >{ typedef ::color::category::gray_uint16  akin_type; };
    template< >struct gray< ::color::category::lab_uint32  >{ typedef ::color::category::gray_uint32  akin_type; };
    template< >struct gray< ::color::category::lab_uint64  >{ typedef ::color::category::gray_uint64  akin_type; };
    template< >struct gray< ::color::category::lab_float   >{ typedef ::color::category::gray_float   akin_type; };
    template< >struct gray< ::color::category::lab_double  >{ typedef ::color::category::gray_double  akin_type; };
    template< >struct gray< ::color::category::lab_ldouble >{ typedef ::color::category::gray_ldouble akin_type; };

   }
 }

#endif
