// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "opencv_converters.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "Index.pypp.hpp"

namespace bp = boost::python;

static boost::python::tuple knnSearch_b27556db8034853ef4327f12b2570dc5( ::cv::flann::Index & inst, ::std::vector< float > const & queries, int knn, ::cv::flann::SearchParams const & params ){
    ::std::vector< int > indices2;
    cv::Mat indices3;
    ::std::vector< float > dists2;
    cv::Mat dists3;
    inst.knnSearch(queries, indices2, dists2, knn, params);
    convert_from_vector_of_T_to_Mat(indices2, indices3);
    convert_from_vector_of_T_to_Mat(dists2, dists3);
    return bp::make_tuple( indices3, dists3 );
}

static boost::python::tuple radiusSearch_9595058c6922b247b15bed6a4e25038c( ::cv::flann::Index & inst, ::std::vector< float > const & query, float radius, ::cv::flann::SearchParams const & params ){
    ::std::vector< int > indices2;
    cv::Mat indices3;
    ::std::vector< float > dists2;
    cv::Mat dists3;
    int result = inst.radiusSearch(query, indices2, dists2, radius, params);
    convert_from_vector_of_T_to_Mat(indices2, indices3);
    convert_from_vector_of_T_to_Mat(dists2, dists3);
    return bp::make_tuple( result, indices3, dists3 );
}

void register_Index_class(){

    bp::class_< cv::flann::Index >( "Index", bp::init< cv::Mat const &, cv::flann::IndexParams const & >(( bp::arg("features"), bp::arg("params") )) )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::flann::Index >() )    
        .def( 
            "knnSearch"
            , (boost::python::tuple (*)( ::cv::flann::Index &,::std::vector<float, std::allocator<float> > const &,int,::cv::flann::SearchParams const & ))( &knnSearch_b27556db8034853ef4327f12b2570dc5 )
            , ( bp::arg("inst"), bp::arg("queries"), bp::arg("knn"), bp::arg("params") )
            , "\nArgument 'indices':"\
    "\n    C/C++ type: ::std::vector< int > &."\
    "\n    Python type: Mat."\
    "\n    Invoke asMat() to convert a 1D Python sequence into a Mat, e.g. "\
    "\n    asMat([0,1,2]) or asMat((0,1,2))."\
    "\n    Output argument: omitted from the calling sequence. It is returned "\
    "\n    along with the function's return value (if any)."\
    "\nArgument 'dists':"\
    "\n    C/C++ type: ::std::vector< float > &."\
    "\n    Python type: Mat."\
    "\n    Invoke asMat() to convert a 1D Python sequence into a Mat, e.g. "\
    "\n    asMat([0,1,2]) or asMat((0,1,2))."\
    "\n    Output argument: omitted from the calling sequence. It is returned "\
    "\n    along with the function's return value (if any)." )    
        .def( 
            "knnSearch"
            , (void ( ::cv::flann::Index::* )( ::cv::Mat const &,::cv::Mat &,::cv::Mat &,int,::cv::flann::SearchParams const & ) )( &::cv::flann::Index::knnSearch )
            , ( bp::arg("queries"), bp::arg("indices"), bp::arg("dists"), bp::arg("knn"), bp::arg("params") ) )    
        .def( 
            "radiusSearch"
            , (boost::python::tuple (*)( ::cv::flann::Index &,::std::vector<float, std::allocator<float> > const &,float,::cv::flann::SearchParams const & ))( &radiusSearch_9595058c6922b247b15bed6a4e25038c )
            , ( bp::arg("inst"), bp::arg("query"), bp::arg("radius"), bp::arg("params") )
            , "\nArgument 'indices':"\
    "\n    C/C++ type: ::std::vector< int > &."\
    "\n    Python type: Mat."\
    "\n    Invoke asMat() to convert a 1D Python sequence into a Mat, e.g. "\
    "\n    asMat([0,1,2]) or asMat((0,1,2))."\
    "\n    Output argument: omitted from the calling sequence. It is returned "\
    "\n    along with the function's return value (if any)."\
    "\nArgument 'dists':"\
    "\n    C/C++ type: ::std::vector< float > &."\
    "\n    Python type: Mat."\
    "\n    Invoke asMat() to convert a 1D Python sequence into a Mat, e.g. "\
    "\n    asMat([0,1,2]) or asMat((0,1,2))."\
    "\n    Output argument: omitted from the calling sequence. It is returned "\
    "\n    along with the function's return value (if any)." )    
        .def( 
            "radiusSearch"
            , (int ( ::cv::flann::Index::* )( ::cv::Mat const &,::cv::Mat &,::cv::Mat &,float,::cv::flann::SearchParams const & ) )( &::cv::flann::Index::radiusSearch )
            , ( bp::arg("query"), bp::arg("indices"), bp::arg("dists"), bp::arg("radius"), bp::arg("params") ) )    
        .def( 
            "save"
            , (void ( ::cv::flann::Index::* )( ::std::string ) )( &::cv::flann::Index::save )
            , ( bp::arg("filename") ) )    
        .def( 
            "size"
            , (int ( ::cv::flann::Index::* )(  ) const)( &::cv::flann::Index::size ) )    
        .def( 
            "veclen"
            , (int ( ::cv::flann::Index::* )(  ) const)( &::cv::flann::Index::veclen ) );

}
