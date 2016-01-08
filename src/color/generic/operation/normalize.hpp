#ifndef color_operation_normalize
#define color_operation_normalize

#include "../../_internal/model.hpp"
#include "../../_internal/normalize.hpp"
#include "../trait/index.hpp"


namespace color
 {
  namespace operation
   {

    template< typename scalar_name = double, typename category_name >
     inline
     scalar_name normalize
      (
       ::color::_internal::model<category_name>                     const& m
       ,typename ::color::trait::index<category_name>::input_const_type index
      )
      {
       return ::color::_internal::normalize<category_name, scalar_name >::process( m[index], index ) ;
      }
      
    template
     <
       unsigned index_size
      ,typename scalar_name = double
      ,typename category_name 
      >
     inline
     scalar_name normalize
      (
       ::color::_internal::model<category_name>                     const& m
      )
     {
      return  ::color::_internal::normalize<category_name, scalar_name >::template process<index_size>( m.template get<index_size>()  ) ;
     }


   }
 }

#endif
