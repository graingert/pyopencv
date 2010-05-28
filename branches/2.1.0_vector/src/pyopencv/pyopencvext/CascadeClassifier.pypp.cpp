// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CascadeClassifier.pypp.hpp"

namespace bp = boost::python;

struct CascadeClassifier_wrapper : cv::CascadeClassifier, bp::wrapper< cv::CascadeClassifier > {

    CascadeClassifier_wrapper(cv::CascadeClassifier const & arg )
    : cv::CascadeClassifier( arg )
      , bp::wrapper< cv::CascadeClassifier >(){
        // copy constructor
        
    }

    CascadeClassifier_wrapper( )
    : cv::CascadeClassifier( )
      , bp::wrapper< cv::CascadeClassifier >(){
        // null constructor
    
    }

    CascadeClassifier_wrapper(::std::string const & filename )
    : cv::CascadeClassifier( boost::ref(filename) )
      , bp::wrapper< cv::CascadeClassifier >(){
        // constructor
    
    }

    static boost::python::object detectMultiScale( ::cv::CascadeClassifier & inst, ::cv::Mat const & image, double scaleFactor=1.10000000000000008881784197001252323389053344727e+0, int minNeighbors=3, int flags=0, ::cv::Size minSize=cv::Size_<int>() ){
        std::vector<cv::Rect_<int> > objects2;
        inst.detectMultiScale(image, objects2, scaleFactor, minNeighbors, flags, minSize);
        return bp::object( objects2 );
    }

    cv::Mat sum, tilted, sqsum;
    CvMat _sum, _sqsum, _tilted;
    
    int my_runAt( cv::Ptr<cv::FeatureEvaluator> &_feval, const cv::Point &pt )
    {
        if( !oldCascade.empty() )
            return cvRunHaarClassifierCascade(oldCascade, pt, 0);
            
        return runAt(_feval, pt);
    }

        
    bool my_setImage( cv::Ptr<cv::FeatureEvaluator> &_feval, const cv::Mat& image )
    {
        if( !oldCascade.empty() )
        {
            sum.create(image.rows+1, image.cols+1, CV_32S);
            tilted.create(image.rows+1, image.cols+1, CV_32S);
            sqsum.create(image.rows+1, image.cols+1, CV_64F);
            cv::integral(image, sum, sqsum, tilted);
            _sum = sum; _sqsum = sqsum; _tilted = tilted;
            cvSetImagesForHaarClassifierCascade( oldCascade, &_sum, &_sqsum, &_tilted, 1. );
            return true;
        }
        
        return setImage(_feval, image);
    }
    
    std::vector<cv::Point> my_dryRun(const cv::Mat &image)
    {
        std::vector<cv::Point> pts;
        my_setImage(feval, image);
        float bias=0.0001f;
        CvHidHaarClassifierCascade* cascade = oldCascade->hid_cascade;
        int i;
        for(i = 0; i < cascade->count; ++i)
            cascade->stage_classifier[i].threshold += bias;
        cv::Point pt;
        int w1 = oldCascade->orig_window_size.width;
        int h1 = oldCascade->orig_window_size.height;
        int w = image.cols-w1;
        int h = image.rows-h1;
        double mean, var;
        for(pt.y = 0; pt.y < h; ++pt.y)
            for(pt.x = 0; pt.x < w; ++pt.x)
            {
                // mean = ((double)(sum.at<int>(pt.y, pt.x) + sum.at<int>(pt.y+h1, pt.x+w1)
                    // - sum.at<int>(pt.y+h1, pt.x) - sum.at<int>(pt.y, pt.x+w1))) / 
                    // (w1*h1);
                // var = ((double)(sqsum.at<int>(pt.y, pt.x) + sqsum.at<int>(pt.y+h1, pt.x+w1)
                    // - sqsum.at<int>(pt.y+h1, pt.x) - sqsum.at<int>(pt.y, pt.x+w1))) / 
                    // (w1*h1) - mean*mean;
                // if(var <= bias) continue;
                if(my_runAt(feval, pt) > 0) pts.push_back(pt);
            }
        for(i = 0; i < cascade->count; ++i)
            cascade->stage_classifier[i].threshold -= bias;
        return pts;
    }

};

void register_CascadeClassifier_class(){

    { //::cv::CascadeClassifier
        typedef bp::class_< CascadeClassifier_wrapper > CascadeClassifier_exposer_t;
        CascadeClassifier_exposer_t CascadeClassifier_exposer = CascadeClassifier_exposer_t( "CascadeClassifier", bp::init< >() );
        bp::scope CascadeClassifier_scope( CascadeClassifier_exposer );
        CascadeClassifier_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::CascadeClassifier >() );
        bp::scope().attr("BOOST") = (int)cv::CascadeClassifier::BOOST;
        bp::scope().attr("DO_CANNY_PRUNING") = (int)cv::CascadeClassifier::DO_CANNY_PRUNING;
        bp::scope().attr("SCALE_IMAGE") = (int)cv::CascadeClassifier::SCALE_IMAGE;
        bp::scope().attr("FIND_BIGGEST_OBJECT") = (int)cv::CascadeClassifier::FIND_BIGGEST_OBJECT;
        bp::scope().attr("DO_ROUGH_SEARCH") = (int)cv::CascadeClassifier::DO_ROUGH_SEARCH;
        bp::class_< cv::CascadeClassifier::DTree >( "DTree" )    
            .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::CascadeClassifier::DTree >() )    
            .def_readwrite( "nodeCount", &cv::CascadeClassifier::DTree::nodeCount );
        bp::class_< cv::CascadeClassifier::DTreeNode >( "DTreeNode" )    
            .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::CascadeClassifier::DTreeNode >() )    
            .def_readwrite( "featureIdx", &cv::CascadeClassifier::DTreeNode::featureIdx )    
            .def_readwrite( "left", &cv::CascadeClassifier::DTreeNode::left )    
            .def_readwrite( "right", &cv::CascadeClassifier::DTreeNode::right )    
            .def_readwrite( "threshold", &cv::CascadeClassifier::DTreeNode::threshold );
        bp::class_< cv::CascadeClassifier::Stage >( "Stage" )    
            .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::CascadeClassifier::Stage >() )    
            .def_readwrite( "first", &cv::CascadeClassifier::Stage::first )    
            .def_readwrite( "ntrees", &cv::CascadeClassifier::Stage::ntrees )    
            .def_readwrite( "threshold", &cv::CascadeClassifier::Stage::threshold );
        CascadeClassifier_exposer.def( bp::init< std::string const & >(( bp::arg("filename") )) );
        bp::implicitly_convertible< std::string const &, cv::CascadeClassifier >();
        { //::cv::CascadeClassifier::detectMultiScale
        
            typedef boost::python::object ( *detectMultiScale_function_type )( cv::CascadeClassifier &,cv::Mat const &,double,int,int,::cv::Size );
            
            CascadeClassifier_exposer.def( 
                "detectMultiScale"
                , detectMultiScale_function_type( &CascadeClassifier_wrapper::detectMultiScale )
                , ( bp::arg("inst"), bp::arg("image"), bp::arg("scaleFactor")=1.10000000000000008881784197001252323389053344727e+0, bp::arg("minNeighbors")=(int)(3), bp::arg("flags")=(int)(0), bp::arg("minSize")=cv::Size_<int>() )
                , "\nArgument 'objects':"\
    "\n    C++ type: ::std::vector< cv::Rect_<int> > &."\
    "\n    Python type: vector_Rect."\
    "\n    Output argument: omitted from input and returned as output."\
    "\nReturns:"\
    "\n    objects" );
        
        }
        { //::cv::CascadeClassifier::empty
        
            typedef bool ( ::cv::CascadeClassifier::*empty_function_type )(  ) const;
            
            CascadeClassifier_exposer.def( 
                "empty"
                , empty_function_type( &::cv::CascadeClassifier::empty ) );
        
        }
        { //::cv::CascadeClassifier::load
        
            typedef bool ( ::cv::CascadeClassifier::*load_function_type )( ::std::string const & ) ;
            
            CascadeClassifier_exposer.def( 
                "load"
                , load_function_type( &::cv::CascadeClassifier::load )
                , ( bp::arg("filename") ) );
        
        }
        { //::cv::CascadeClassifier::read
        
            typedef bool ( ::cv::CascadeClassifier::*read_function_type )( ::cv::FileNode const & ) ;
            
            CascadeClassifier_exposer.def( 
                "read"
                , read_function_type( &::cv::CascadeClassifier::read )
                , ( bp::arg("node") ) );
        
        }
        CascadeClassifier_exposer.def_readwrite( "classifiers", &cv::CascadeClassifier::classifiers );
        CascadeClassifier_exposer.def_readwrite( "featureType", &cv::CascadeClassifier::featureType );
        CascadeClassifier_exposer.def_readwrite( "feval", &cv::CascadeClassifier::feval );
        CascadeClassifier_exposer.def_readwrite( "is_stump_based", &cv::CascadeClassifier::is_stump_based );
        CascadeClassifier_exposer.def_readwrite( "leaves", &cv::CascadeClassifier::leaves );
        CascadeClassifier_exposer.def_readwrite( "ncategories", &cv::CascadeClassifier::ncategories );
        CascadeClassifier_exposer.def_readwrite( "nodes", &cv::CascadeClassifier::nodes );
        CascadeClassifier_exposer.def_readwrite( "oldCascade", &cv::CascadeClassifier::oldCascade );
        CascadeClassifier_exposer.def_readwrite( "origWinSize", &cv::CascadeClassifier::origWinSize );
        CascadeClassifier_exposer.def_readwrite( "stageType", &cv::CascadeClassifier::stageType );
        CascadeClassifier_exposer.def_readwrite( "stages", &cv::CascadeClassifier::stages );
        CascadeClassifier_exposer.def_readwrite( "subsets", &cv::CascadeClassifier::subsets );
        CascadeClassifier_exposer.def("runAt", &::CascadeClassifier_wrapper::my_runAt, ( bp::arg("_feval"), bp::arg("pt") ) );
        CascadeClassifier_exposer.def("setImage", &::CascadeClassifier_wrapper::my_setImage, ( bp::arg("_feval"), bp::arg("image") ) );
        CascadeClassifier_exposer.def("runCascade", &::CascadeClassifier_wrapper::my_dryRun, ( bp::arg("image") ) );
    }

}
