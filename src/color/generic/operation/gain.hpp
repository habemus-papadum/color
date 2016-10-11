#ifndef  color_generic_operation_gain
#define  color_generic_operation_gain

#include "../../generic/model.hpp"
#include "../../generic/trait/scalar.hpp"

 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template< typename category_name >
        struct gain
         {
          public:
            typedef category_name  category_type;

            typedef typename ::color::trait::scalar<category_type>::instance_type    scalar_type;

            typedef scalar_type  const&  scalar_const_input_type;

            typedef ::color::trait::index<category_type>         index_trait_type;
            typedef ::color::trait::container< category_type >   container_trait_type;

            typedef ::color::model<category_type>     model_type;

            typedef ::color::_internal::normalize< category_type > normalize_type;
            typedef ::color::_internal::diverse< category_type >   diverse_type;

            typedef ::color::operation::_internal::bias< category_name > bias_type;

            typedef ::color::operation::_internal::gain< category_name > this_type;

            typedef model_type &  model_input_type;
            typedef model_type const&  model_const_input_type;

            typedef typename index_trait_type::instance_type  index_type;

            static model_type & process( model_input_type result, scalar_const_input_type scalar, model_const_input_type right )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                result.set( index, diverse_type::process( this_type::process( normalize_type::process( result.get( index ), index ), scalar ), index );
               }
              return result;
             }

            static model_type & process(  model_input_type  result, model_const_input_type left, scalar_const_input_type scalar, model_const_input_type right )
             {
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                result.set( index, diverse_type::process( this_type::process( normalize_type::process( left.get( index ), index ), scalar ), index );
               }
              return result;
             }

            template< index_type index_number >
             static model_type & process(  model_input_type  result, model_const_input_type left, scalar_const_input_type scalar, model_const_input_type right )
              {
               result.template set<index_number>( diverse_type::template process<index_number>( this_type::process( normalize_type::template process<index>( left.template get<index_number>() ), scalar ) ) );
               return result;
              }

            static scalar_type process( scalar_const_input_type x, scalar_const_input_type b  )
             {
              if( x < scalar_type( 0.5) )
               {
                return bias_type::process(scalar_type(1)-g,2*x)/scalar_type(2);
               }
              else
               {
                return 1 - bias_type::process(scalar_type(1)-g,scalar_type(2) - scalar_type(2)*x)/scalar_type(2);
               }
             }

         };
      }


     template< typename category_name, typename scalar_name >
      void gain
       (
         ::color::model<category_name>        & result
        ,scalar_name                     const& scalar
        ,color::model<category_name>     const& right
       )
       {
        ::color::operation::_internal::gain<category_name>::process( result, scalar, right );
       }

     template< typename category_name, typename scalar_name >
      void gain
       (
         ::color::model<category_name>        & result
        ,color::model<category_name>     const& left
        ,scalar_name                     const& scalar
        ,color::model<category_name>     const& right
       )
       {
        ::color::operation::_internal::gain<category_name>::process( result, left, scalar, right );
       }

    }
  }

#endif