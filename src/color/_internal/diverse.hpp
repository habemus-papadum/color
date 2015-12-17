#ifndef color__internal_diverse
#define color__internal_diverse

// ::color::_internal::diverse< >(   )
// ::color::_internal::diverse< >(   )

#include "./component.hpp"
#include "./index.hpp"
#include "./bound.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename category_name, typename float_name = double >
     struct diverse
      {
       public:
         typedef float_name float_type;
         typedef ::color::_internal::bound< category_name >      bound_trait_type;
         typedef ::color::_internal::component< category_name >  component_trait_type;
         typedef ::color::_internal::index< category_name >      index_trait_type;
 
         typedef typename component_trait_type::instance_type    component_instance_type;
         typedef typename component_trait_type::return_type      component_return_type;

         typedef typename index_trait_type::instance_type       index_instance_type;
         typedef typename index_trait_type::input_const_type    index_input_const_type;

         static
         component_return_type
         process( float_type const& normal, index_input_const_type index )
          {
           float_type divergent = normal;

           divergent *= bound_trait_type::range( index );
           divergent += bound_trait_type::minimum( index );
           return component_instance_type( divergent );
          }

         template< index_instance_type index_size >
          static 
          component_return_type
          process( float_type const& normal )
           {
            float_type divergent = normal;
            divergent *= bound_trait_type::template range<index_size>();
            divergent += bound_trait_type::template minimum<index_size>();

            return  component_instance_type( divergent );
           }
      };

   }
 }
 
#endif
