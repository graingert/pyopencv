// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "opencv_converters.hpp"
#include "ndarray.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "PlanarObjectDetector.pypp.hpp"

namespace bp = boost::python;

struct PlanarObjectDetector_wrapper : cv::PlanarObjectDetector, bp::wrapper< cv::PlanarObjectDetector > {

    PlanarObjectDetector_wrapper(cv::PlanarObjectDetector const & arg )
    : cv::PlanarObjectDetector( arg )
      , bp::wrapper< cv::PlanarObjectDetector >(){
        // copy constructor
        
    }

    PlanarObjectDetector_wrapper( )
    : cv::PlanarObjectDetector( )
      , bp::wrapper< cv::PlanarObjectDetector >(){
        // null constructor
    
    }

    PlanarObjectDetector_wrapper(::cv::FileNode const & node )
    : cv::PlanarObjectDetector( boost::ref(node) )
      , bp::wrapper< cv::PlanarObjectDetector >(){
        // constructor
    
    }

    PlanarObjectDetector_wrapper(::std::vector< cv::Mat > const & pyr, int _npoints=300, int _patchSize=cv::FernClassifier::PATCH_SIZE, int _nstructs=cv::FernClassifier::DEFAULT_STRUCTS, int _structSize=cv::FernClassifier::DEFAULT_STRUCT_SIZE, int _nviews=cv::FernClassifier::DEFAULT_VIEWS, ::cv::LDetector const & detector=cv::LDetector(), ::cv::PatchGenerator const & patchGenerator=cv::PatchGenerator() )
    : cv::PlanarObjectDetector( boost::ref(pyr), _npoints, _patchSize, _nstructs, _structSize, _nviews, boost::ref(detector), boost::ref(patchGenerator) )
      , bp::wrapper< cv::PlanarObjectDetector >(){
        // constructor
    
    }

    static boost::python::tuple __call___4ace94e257458a02821c3e23f229be80( ::cv::PlanarObjectDetector const & inst, ::cv::Mat const & image, ::cv::Mat & H ){
        ::std::vector< cv::Point_<float> > corners2;
        cv::Mat corners3;
        bool result = inst.operator()(image, H, corners2);
        convert_from_vector_of_T_to_Mat(corners2, corners3);
        return bp::make_tuple( result, corners3 );
    }

    static boost::python::tuple __call___353477db407d578b28250d295a56ae36( ::cv::PlanarObjectDetector const & inst, ::std::vector< cv::Mat > const & pyr, ::std::vector< cv::KeyPoint > const & keypoints, ::cv::Mat & H ){
        ::std::vector< cv::Point_<float> > corners2;
        cv::Mat corners3;
        std::vector<int, std::allocator<int> > pairs2;
        bool result = inst.operator()(pyr, keypoints, H, corners2, &pairs2);
        convert_from_vector_of_T_to_Mat(corners2, corners3);
        return bp::make_tuple( result, corners3, pairs2 );
    }

    virtual void train( ::std::vector< cv::Mat > const & pyr, int _npoints=300, int _patchSize=cv::FernClassifier::PATCH_SIZE, int _nstructs=cv::FernClassifier::DEFAULT_STRUCTS, int _structSize=cv::FernClassifier::DEFAULT_STRUCT_SIZE, int _nviews=cv::FernClassifier::DEFAULT_VIEWS, ::cv::LDetector const & detector=cv::LDetector(), ::cv::PatchGenerator const & patchGenerator=cv::PatchGenerator() ) {
        if( bp::override func_train = this->get_override( "train" ) )
            func_train( boost::ref(pyr), _npoints, _patchSize, _nstructs, _structSize, _nviews, boost::ref(detector), boost::ref(patchGenerator) );
        else{
            this->cv::PlanarObjectDetector::train( boost::ref(pyr), _npoints, _patchSize, _nstructs, _structSize, _nviews, boost::ref(detector), boost::ref(patchGenerator) );
        }
    }
    
    void default_train( ::std::vector< cv::Mat > const & pyr, int _npoints=300, int _patchSize=cv::FernClassifier::PATCH_SIZE, int _nstructs=cv::FernClassifier::DEFAULT_STRUCTS, int _structSize=cv::FernClassifier::DEFAULT_STRUCT_SIZE, int _nviews=cv::FernClassifier::DEFAULT_VIEWS, ::cv::LDetector const & detector=cv::LDetector(), ::cv::PatchGenerator const & patchGenerator=cv::PatchGenerator() ) {
        cv::PlanarObjectDetector::train( boost::ref(pyr), _npoints, _patchSize, _nstructs, _structSize, _nviews, boost::ref(detector), boost::ref(patchGenerator) );
    }

    virtual void train( ::std::vector< cv::Mat > const & pyr, ::std::vector< cv::KeyPoint > const & keypoints, int _patchSize=cv::FernClassifier::PATCH_SIZE, int _nstructs=cv::FernClassifier::DEFAULT_STRUCTS, int _structSize=cv::FernClassifier::DEFAULT_STRUCT_SIZE, int _nviews=cv::FernClassifier::DEFAULT_VIEWS, ::cv::LDetector const & detector=cv::LDetector(), ::cv::PatchGenerator const & patchGenerator=cv::PatchGenerator() ) {
        if( bp::override func_train = this->get_override( "train" ) )
            func_train( boost::ref(pyr), boost::ref(keypoints), _patchSize, _nstructs, _structSize, _nviews, boost::ref(detector), boost::ref(patchGenerator) );
        else{
            this->cv::PlanarObjectDetector::train( boost::ref(pyr), boost::ref(keypoints), _patchSize, _nstructs, _structSize, _nviews, boost::ref(detector), boost::ref(patchGenerator) );
        }
    }
    
    void default_train( ::std::vector< cv::Mat > const & pyr, ::std::vector< cv::KeyPoint > const & keypoints, int _patchSize=cv::FernClassifier::PATCH_SIZE, int _nstructs=cv::FernClassifier::DEFAULT_STRUCTS, int _structSize=cv::FernClassifier::DEFAULT_STRUCT_SIZE, int _nviews=cv::FernClassifier::DEFAULT_VIEWS, ::cv::LDetector const & detector=cv::LDetector(), ::cv::PatchGenerator const & patchGenerator=cv::PatchGenerator() ) {
        cv::PlanarObjectDetector::train( boost::ref(pyr), boost::ref(keypoints), _patchSize, _nstructs, _structSize, _nviews, boost::ref(detector), boost::ref(patchGenerator) );
    }

};

void register_PlanarObjectDetector_class(){

    { //::cv::PlanarObjectDetector
        typedef bp::class_< PlanarObjectDetector_wrapper > PlanarObjectDetector_exposer_t;
        PlanarObjectDetector_exposer_t PlanarObjectDetector_exposer = PlanarObjectDetector_exposer_t( "PlanarObjectDetector", bp::init< >() );
        bp::scope PlanarObjectDetector_scope( PlanarObjectDetector_exposer );
        PlanarObjectDetector_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::PlanarObjectDetector >() );
        PlanarObjectDetector_exposer.def( bp::init< cv::FileNode const & >(( bp::arg("node") )) );
        bp::implicitly_convertible< cv::FileNode const &, cv::PlanarObjectDetector >();
        PlanarObjectDetector_exposer.def( bp::init< std::vector< cv::Mat > const &, bp::optional< int, int, int, int, int, cv::LDetector const &, cv::PatchGenerator const & > >(( bp::arg("pyr"), bp::arg("_npoints")=(int)(300), bp::arg("_patchSize")=(int)(cv::FernClassifier::PATCH_SIZE), bp::arg("_nstructs")=(int)(cv::FernClassifier::DEFAULT_STRUCTS), bp::arg("_structSize")=(int)(cv::FernClassifier::DEFAULT_STRUCT_SIZE), bp::arg("_nviews")=(int)(cv::FernClassifier::DEFAULT_VIEWS), bp::arg("detector")=cv::LDetector(), bp::arg("patchGenerator")=cv::PatchGenerator() )) );
        bp::implicitly_convertible< std::vector< cv::Mat > const &, cv::PlanarObjectDetector >();
        { //::cv::PlanarObjectDetector::getModelPoints
        
            typedef ::std::vector< cv::KeyPoint > ( ::cv::PlanarObjectDetector::*getModelPoints_function_type )(  ) const;
            
            PlanarObjectDetector_exposer.def( 
                "getModelPoints"
                , getModelPoints_function_type( &::cv::PlanarObjectDetector::getModelPoints ) );
        
        }
        { //::cv::PlanarObjectDetector::operator()
        
            typedef boost::python::tuple ( *__call___function_type )( ::cv::PlanarObjectDetector const &,::cv::Mat const &,::cv::Mat & );
            
            PlanarObjectDetector_exposer.def( 
                "__call__"
                , __call___function_type( &PlanarObjectDetector_wrapper::__call___4ace94e257458a02821c3e23f229be80 )
                , ( bp::arg("inst"), bp::arg("image"), bp::arg("H") )
                , "\nWrapped function:"
    "\n    operator()"
    "\nArgument 'corners':"\
    "\n    C/C++ type: ::std::vector< cv::Point_<float> > &."\
    "\n    Python type: Mat."\
    "\n    Invoke asMat() to convert a 1D Python sequence into a Mat, e.g. "\
    "\n    asMat([0,1,2]) or asMat((0,1,2))."\
    "\n    Output argument: omitted from the calling sequence. It is returned "\
    "\n    along with the function's return value (if any)." );
        
        }
        { //::cv::PlanarObjectDetector::operator()
        
            typedef boost::python::tuple ( *__call___function_type )( ::cv::PlanarObjectDetector const &,::std::vector<cv::Mat, std::allocator<cv::Mat> > const &,::std::vector<cv::KeyPoint, std::allocator<cv::KeyPoint> > const &,::cv::Mat & );
            
            PlanarObjectDetector_exposer.def( 
                "__call__"
                , __call___function_type( &PlanarObjectDetector_wrapper::__call___353477db407d578b28250d295a56ae36 )
                , ( bp::arg("inst"), bp::arg("pyr"), bp::arg("keypoints"), bp::arg("H") )
                , "\nWrapped function:"
    "\n    operator()"
    "\nArgument 'corners':"\
    "\n    C/C++ type: ::std::vector< cv::Point_<float> > &."\
    "\n    Python type: Mat."\
    "\n    Invoke asMat() to convert a 1D Python sequence into a Mat, e.g. "\
    "\n    asMat([0,1,2]) or asMat((0,1,2))."\
    "\n    Output argument: omitted from the calling sequence. It is returned "\
    "\n    along with the function's return value (if any)."\
    "\nArgument 'pairs':"\
    "\n    C/C++ type: ::std::vector< int > *."\
    "\n    Python type: Python equivalence of the C/C++ type without pointer."\
    "\n    Output argument: omitted from the calling sequence. It is returned "\
    "\n    along with the function's return value (if any)." );
        
        }
        { //::cv::PlanarObjectDetector::read
        
            typedef void ( ::cv::PlanarObjectDetector::*read_function_type )( ::cv::FileNode const & ) ;
            
            PlanarObjectDetector_exposer.def( 
                "read"
                , read_function_type( &::cv::PlanarObjectDetector::read )
                , ( bp::arg("node") ) );
        
        }
        { //::cv::PlanarObjectDetector::setVerbose
        
            typedef void ( ::cv::PlanarObjectDetector::*setVerbose_function_type )( bool ) ;
            
            PlanarObjectDetector_exposer.def( 
                "setVerbose"
                , setVerbose_function_type( &::cv::PlanarObjectDetector::setVerbose )
                , ( bp::arg("verbose") ) );
        
        }
        { //::cv::PlanarObjectDetector::train
        
            typedef void ( ::cv::PlanarObjectDetector::*train_function_type )( ::std::vector< cv::Mat > const &,int,int,int,int,int,::cv::LDetector const &,::cv::PatchGenerator const & ) ;
            typedef void ( PlanarObjectDetector_wrapper::*default_train_function_type )( ::std::vector< cv::Mat > const &,int,int,int,int,int,::cv::LDetector const &,::cv::PatchGenerator const & ) ;
            
            PlanarObjectDetector_exposer.def( 
                "train"
                , train_function_type(&::cv::PlanarObjectDetector::train)
                , default_train_function_type(&PlanarObjectDetector_wrapper::default_train)
                , ( bp::arg("pyr"), bp::arg("_npoints")=(int)(300), bp::arg("_patchSize")=(int)(cv::FernClassifier::PATCH_SIZE), bp::arg("_nstructs")=(int)(cv::FernClassifier::DEFAULT_STRUCTS), bp::arg("_structSize")=(int)(cv::FernClassifier::DEFAULT_STRUCT_SIZE), bp::arg("_nviews")=(int)(cv::FernClassifier::DEFAULT_VIEWS), bp::arg("detector")=cv::LDetector(), bp::arg("patchGenerator")=cv::PatchGenerator() ) );
        
        }
        { //::cv::PlanarObjectDetector::train
        
            typedef void ( ::cv::PlanarObjectDetector::*train_function_type )( ::std::vector< cv::Mat > const &,::std::vector< cv::KeyPoint > const &,int,int,int,int,::cv::LDetector const &,::cv::PatchGenerator const & ) ;
            typedef void ( PlanarObjectDetector_wrapper::*default_train_function_type )( ::std::vector< cv::Mat > const &,::std::vector< cv::KeyPoint > const &,int,int,int,int,::cv::LDetector const &,::cv::PatchGenerator const & ) ;
            
            PlanarObjectDetector_exposer.def( 
                "train"
                , train_function_type(&::cv::PlanarObjectDetector::train)
                , default_train_function_type(&PlanarObjectDetector_wrapper::default_train)
                , ( bp::arg("pyr"), bp::arg("keypoints"), bp::arg("_patchSize")=(int)(cv::FernClassifier::PATCH_SIZE), bp::arg("_nstructs")=(int)(cv::FernClassifier::DEFAULT_STRUCTS), bp::arg("_structSize")=(int)(cv::FernClassifier::DEFAULT_STRUCT_SIZE), bp::arg("_nviews")=(int)(cv::FernClassifier::DEFAULT_VIEWS), bp::arg("detector")=cv::LDetector(), bp::arg("patchGenerator")=cv::PatchGenerator() ) );
        
        }
        { //::cv::PlanarObjectDetector::write
        
            typedef void ( ::cv::PlanarObjectDetector::*write_function_type )( ::cv::FileStorage &,::cv::String const & ) const;
            
            PlanarObjectDetector_exposer.def( 
                "write"
                , write_function_type( &::cv::PlanarObjectDetector::write )
                , ( bp::arg("fs"), bp::arg("name")=std::string() ) );
        
        }
    }

}
