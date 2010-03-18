// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "__array_1.pypp.hpp"
#include "opencv_converters.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "opencv_converters.hpp"
#include "Octree.pypp.hpp"

namespace bp = boost::python;

struct Octree_wrapper : cv::Octree, bp::wrapper< cv::Octree > {

    Octree_wrapper(cv::Octree const & arg )
    : cv::Octree( arg )
      , bp::wrapper< cv::Octree >(){
        // copy constructor
        
    }

    struct Node_wrapper : cv::Octree::Node, bp::wrapper< cv::Octree::Node > {
    
        Node_wrapper(cv::Octree::Node const & arg )
        : cv::Octree::Node( arg )
          , bp::wrapper< cv::Octree::Node >(){
            // copy constructor
            
        }
    
        Node_wrapper( )
        : cv::Octree::Node( )
          , bp::wrapper< cv::Octree::Node >(){
            // null constructor
        
        }
    
        static pyplusplus::containers::static_sized::array_1_t< int, 8>
        pyplusplus_children_wrapper( ::cv::Octree::Node & inst ){
            return pyplusplus::containers::static_sized::array_1_t< int, 8>( inst.children );
        }
    
    };

    Octree_wrapper( )
    : cv::Octree( )
      , bp::wrapper< cv::Octree >(){
        // null constructor
    
    }

    virtual void buildTree( ::std::vector< cv::Point3_<float> > const & points, int maxLevels=10, int minPoints=20 ) {
        namespace bpl = boost::python;
        if( bpl::override func_buildTree = this->get_override( "buildTree" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_buildTree.ptr(), points, maxLevels, minPoints );
        }
        else{
            cv::Octree::buildTree( boost::ref(points), maxLevels, minPoints );
        }
    }
    
    static void default_buildTree( ::cv::Octree & inst, cv::Mat const & points, int maxLevels=10, int minPoints=20 ){
        std::vector<cv::Point3_<float>, std::allocator<cv::Point3_<float> > > points2;
        convert_from_Mat_to_vector_of_T(points, points2);
        if( dynamic_cast< Octree_wrapper * >( boost::addressof( inst ) ) ){
            inst.::cv::Octree::buildTree(points2, maxLevels, minPoints);
        }
        else{
            inst.buildTree(points2, maxLevels, minPoints);
        }
    }

    virtual void getPointsWithinSphere( ::cv::Point3f const & center, float radius, ::std::vector< cv::Point3_<float> > & points ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_getPointsWithinSphere = this->get_override( "getPointsWithinSphere" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_getPointsWithinSphere.ptr(), center, radius, points );
        }
        else{
            cv::Octree::getPointsWithinSphere( boost::ref(center), radius, boost::ref(points) );
        }
    }
    
    static boost::python::object default_getPointsWithinSphere( ::cv::Octree const & inst, ::cv::Point3f const & center, float radius ){
        std::vector<cv::Point3_<float>, std::allocator<cv::Point3_<float> > > points2;
        cv::Mat points3;
        if( dynamic_cast< Octree_wrapper const* >( boost::addressof( inst ) ) ){
            inst.::cv::Octree::getPointsWithinSphere(center, radius, points2);
        }
        else{
            inst.getPointsWithinSphere(center, radius, points2);
        }
        convert_from_vector_of_T_to_Mat(points2, points3);
        return bp::object( points3 );
    }

};

static boost::shared_ptr<cv::Octree> Octree_init1( bp::list const &points, int maxLevels=10, int minPoints=20 )
{
    std::vector<cv::Point3f> points2;
    convert_from_object_to_T(points, points2);
    return boost::shared_ptr<cv::Octree>(new cv::Octree(points2, maxLevels, minPoints ));
}

static bp::object sd_getNodes(cv::Octree const &inst) { return convert_from_T_to_object(inst.getNodes()); }

void register_Octree_class(){

    { //::cv::Octree
        typedef bp::class_< Octree_wrapper > Octree_exposer_t;
        Octree_exposer_t Octree_exposer = Octree_exposer_t( "Octree", bp::init< >() );
        bp::scope Octree_scope( Octree_exposer );
        Octree_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Octree >() );
        { //::cv::Octree::Node
            typedef bp::class_< Octree_wrapper::Node_wrapper > Node_exposer_t;
            Node_exposer_t Node_exposer = Node_exposer_t( "Node", bp::init< >() );
            bp::scope Node_scope( Node_exposer );
            Node_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Octree::Node >() );
            Node_exposer.def_readwrite( "begin", &cv::Octree::Node::begin );
            pyplusplus::containers::static_sized::register_array_1< int, 8 >( "__array_1_int_8" );
            { //cv::Octree::Node::children [variable], type=int[8]
            
                typedef pyplusplus::containers::static_sized::array_1_t< int, 8> ( *array_wrapper_creator )( ::cv::Octree::Node & );
                
                Node_exposer.add_property( "children"
                    , bp::make_function( array_wrapper_creator(&Octree_wrapper::Node_wrapper::pyplusplus_children_wrapper)
                                        , bp::with_custodian_and_ward_postcall< 0, 1 >() ) );
            }
            Node_exposer.def_readwrite( "end", &cv::Octree::Node::end );
            Node_exposer.def_readwrite( "isLeaf", &cv::Octree::Node::isLeaf );
            Node_exposer.def_readwrite( "maxLevels", &cv::Octree::Node::maxLevels );
            Node_exposer.def_readwrite( "x_max", &cv::Octree::Node::x_max );
            Node_exposer.def_readwrite( "x_min", &cv::Octree::Node::x_min );
            Node_exposer.def_readwrite( "y_max", &cv::Octree::Node::y_max );
            Node_exposer.def_readwrite( "y_min", &cv::Octree::Node::y_min );
            Node_exposer.def_readwrite( "z_max", &cv::Octree::Node::z_max );
            Node_exposer.def_readwrite( "z_min", &cv::Octree::Node::z_min );
        }
        { //::cv::Octree::buildTree
        
            typedef void ( *default_buildTree_function_type )( ::cv::Octree &,cv::Mat const &,int,int );
            
            Octree_exposer.def( 
                "buildTree"
                , default_buildTree_function_type( &Octree_wrapper::default_buildTree )
                , ( bp::arg("inst"), bp::arg("points"), bp::arg("maxLevels")=(int)(10), bp::arg("minPoints")=(int)(20) )
                , "\nArgument 'points', of C++ type '::std::vector< cv::Point3_<float> > const &', is a Mat."\
    "\nUse function asMat() to convert a 1D Python sequence into a Mat, e.g. asMat([0,1,2]) or asMat((0,1,2))." );
        
        }
        { //::cv::Octree::getPointsWithinSphere
        
            typedef boost::python::object ( *default_getPointsWithinSphere_function_type )( ::cv::Octree const &,::cv::Point3f const &,float );
            
            Octree_exposer.def( 
                "getPointsWithinSphere"
                , default_getPointsWithinSphere_function_type( &Octree_wrapper::default_getPointsWithinSphere )
                , ( bp::arg("inst"), bp::arg("center"), bp::arg("radius") )
                , "\nArgument 'points', of C++ type '::std::vector< cv::Point3_<float> > &', is a Mat."\
    "\nUse function asMat() to convert a 1D Python sequence into a Mat, e.g. asMat([0,1,2]) or asMat((0,1,2))."\
    "\nAs an output argument, 'points' is omitted from the function's calling sequence." );
        
        }
        Octree_exposer.def("__init__", bp::make_constructor(&Octree_init1, bp::default_call_policies(), ( bp::arg("points"), bp::arg("maxLevels")=10, bp::arg("maxPoints")=20 )));
        Octree_exposer.add_property( "nodes", &sd_getNodes);
    }

}
