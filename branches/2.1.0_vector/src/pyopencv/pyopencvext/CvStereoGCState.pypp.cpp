// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvStereoGCState.pypp.hpp"

namespace bp = boost::python;

struct CvStereoGCState_wrapper : CvStereoGCState, bp::wrapper< CvStereoGCState > {

    CvStereoGCState_wrapper(CvStereoGCState const & arg )
    : CvStereoGCState( arg )
      , bp::wrapper< CvStereoGCState >(){
        // copy constructor
        
    }

    CvStereoGCState_wrapper()
    : CvStereoGCState()
      , bp::wrapper< CvStereoGCState >(){
        // null constructor
        
    }

    cv::Mat left_as_Mat;
    CvMat left_as_CvMat;
    void update_left()
    {
        if(left_as_Mat.empty()) left = 0; // NULL pointer
        else
        {
            left_as_CvMat = left_as_Mat; // to ensure left points to a valid CvMat
            left = &left_as_CvMat;
        }
    }
    void set_left(cv::Mat const &new_left)
    {
        left_as_Mat = new_left; // to keep a reference to left
        update_left();
    }
    cv::Mat & get_left()
    {
        update_left();
        return left_as_Mat;
    }

    cv::Mat right_as_Mat;
    CvMat right_as_CvMat;
    void update_right()
    {
        if(right_as_Mat.empty()) right = 0; // NULL pointer
        else
        {
            right_as_CvMat = right_as_Mat; // to ensure right points to a valid CvMat
            right = &right_as_CvMat;
        }
    }
    void set_right(cv::Mat const &new_right)
    {
        right_as_Mat = new_right; // to keep a reference to right
        update_right();
    }
    cv::Mat & get_right()
    {
        update_right();
        return right_as_Mat;
    }

    cv::Mat dispLeft_as_Mat;
    CvMat dispLeft_as_CvMat;
    void update_dispLeft()
    {
        if(dispLeft_as_Mat.empty()) dispLeft = 0; // NULL pointer
        else
        {
            dispLeft_as_CvMat = dispLeft_as_Mat; // to ensure dispLeft points to a valid CvMat
            dispLeft = &dispLeft_as_CvMat;
        }
    }
    void set_dispLeft(cv::Mat const &new_dispLeft)
    {
        dispLeft_as_Mat = new_dispLeft; // to keep a reference to dispLeft
        update_dispLeft();
    }
    cv::Mat & get_dispLeft()
    {
        update_dispLeft();
        return dispLeft_as_Mat;
    }

    cv::Mat dispRight_as_Mat;
    CvMat dispRight_as_CvMat;
    void update_dispRight()
    {
        if(dispRight_as_Mat.empty()) dispRight = 0; // NULL pointer
        else
        {
            dispRight_as_CvMat = dispRight_as_Mat; // to ensure dispRight points to a valid CvMat
            dispRight = &dispRight_as_CvMat;
        }
    }
    void set_dispRight(cv::Mat const &new_dispRight)
    {
        dispRight_as_Mat = new_dispRight; // to keep a reference to dispRight
        update_dispRight();
    }
    cv::Mat & get_dispRight()
    {
        update_dispRight();
        return dispRight_as_Mat;
    }

    cv::Mat ptrLeft_as_Mat;
    CvMat ptrLeft_as_CvMat;
    void update_ptrLeft()
    {
        if(ptrLeft_as_Mat.empty()) ptrLeft = 0; // NULL pointer
        else
        {
            ptrLeft_as_CvMat = ptrLeft_as_Mat; // to ensure ptrLeft points to a valid CvMat
            ptrLeft = &ptrLeft_as_CvMat;
        }
    }
    void set_ptrLeft(cv::Mat const &new_ptrLeft)
    {
        ptrLeft_as_Mat = new_ptrLeft; // to keep a reference to ptrLeft
        update_ptrLeft();
    }
    cv::Mat & get_ptrLeft()
    {
        update_ptrLeft();
        return ptrLeft_as_Mat;
    }

    cv::Mat ptrRight_as_Mat;
    CvMat ptrRight_as_CvMat;
    void update_ptrRight()
    {
        if(ptrRight_as_Mat.empty()) ptrRight = 0; // NULL pointer
        else
        {
            ptrRight_as_CvMat = ptrRight_as_Mat; // to ensure ptrRight points to a valid CvMat
            ptrRight = &ptrRight_as_CvMat;
        }
    }
    void set_ptrRight(cv::Mat const &new_ptrRight)
    {
        ptrRight_as_Mat = new_ptrRight; // to keep a reference to ptrRight
        update_ptrRight();
    }
    cv::Mat & get_ptrRight()
    {
        update_ptrRight();
        return ptrRight_as_Mat;
    }

    cv::Mat vtxBuf_as_Mat;
    CvMat vtxBuf_as_CvMat;
    void update_vtxBuf()
    {
        if(vtxBuf_as_Mat.empty()) vtxBuf = 0; // NULL pointer
        else
        {
            vtxBuf_as_CvMat = vtxBuf_as_Mat; // to ensure vtxBuf points to a valid CvMat
            vtxBuf = &vtxBuf_as_CvMat;
        }
    }
    void set_vtxBuf(cv::Mat const &new_vtxBuf)
    {
        vtxBuf_as_Mat = new_vtxBuf; // to keep a reference to vtxBuf
        update_vtxBuf();
    }
    cv::Mat & get_vtxBuf()
    {
        update_vtxBuf();
        return vtxBuf_as_Mat;
    }

    cv::Mat edgeBuf_as_Mat;
    CvMat edgeBuf_as_CvMat;
    void update_edgeBuf()
    {
        if(edgeBuf_as_Mat.empty()) edgeBuf = 0; // NULL pointer
        else
        {
            edgeBuf_as_CvMat = edgeBuf_as_Mat; // to ensure edgeBuf points to a valid CvMat
            edgeBuf = &edgeBuf_as_CvMat;
        }
    }
    void set_edgeBuf(cv::Mat const &new_edgeBuf)
    {
        edgeBuf_as_Mat = new_edgeBuf; // to keep a reference to edgeBuf
        update_edgeBuf();
    }
    cv::Mat & get_edgeBuf()
    {
        update_edgeBuf();
        return edgeBuf_as_Mat;
    }

};

void register_CvStereoGCState_class(){

    bp::class_< CvStereoGCState_wrapper >( "CvStereoGCState" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvStereoGCState >() )    
        .def_readwrite( "Ithreshold", &CvStereoGCState::Ithreshold )    
        .def_readwrite( "K", &CvStereoGCState::K )    
        .def_readwrite( "interactionRadius", &CvStereoGCState::interactionRadius )    
        .def_readwrite( "lambda", &CvStereoGCState::lambda )    
        .def_readwrite( "lambda1", &CvStereoGCState::lambda1 )    
        .def_readwrite( "lambda2", &CvStereoGCState::lambda2 )    
        .def_readwrite( "maxIters", &CvStereoGCState::maxIters )    
        .def_readwrite( "minDisparity", &CvStereoGCState::minDisparity )    
        .def_readwrite( "numberOfDisparities", &CvStereoGCState::numberOfDisparities )    
        .def_readwrite( "occlusionCost", &CvStereoGCState::occlusionCost )    
        .add_property( "left", bp::make_function(&::CvStereoGCState_wrapper::get_left, bp::return_internal_reference<>()),
            &::CvStereoGCState_wrapper::set_left)    
        .def( "validate_left", &::CvStereoGCState_wrapper::update_left, "Updates the internal C pointer that represents 'left'. The function should be called every time the header of 'left' is modified by the user." )    
        .add_property( "right", bp::make_function(&::CvStereoGCState_wrapper::get_right, bp::return_internal_reference<>()),
            &::CvStereoGCState_wrapper::set_right)    
        .def( "validate_right", &::CvStereoGCState_wrapper::update_right, "Updates the internal C pointer that represents 'right'. The function should be called every time the header of 'right' is modified by the user." )    
        .add_property( "dispLeft", bp::make_function(&::CvStereoGCState_wrapper::get_dispLeft, bp::return_internal_reference<>()),
            &::CvStereoGCState_wrapper::set_dispLeft)    
        .def( "validate_dispLeft", &::CvStereoGCState_wrapper::update_dispLeft, "Updates the internal C pointer that represents 'dispLeft'. The function should be called every time the header of 'dispLeft' is modified by the user." )    
        .add_property( "dispRight", bp::make_function(&::CvStereoGCState_wrapper::get_dispRight, bp::return_internal_reference<>()),
            &::CvStereoGCState_wrapper::set_dispRight)    
        .def( "validate_dispRight", &::CvStereoGCState_wrapper::update_dispRight, "Updates the internal C pointer that represents 'dispRight'. The function should be called every time the header of 'dispRight' is modified by the user." )    
        .add_property( "ptrLeft", bp::make_function(&::CvStereoGCState_wrapper::get_ptrLeft, bp::return_internal_reference<>()),
            &::CvStereoGCState_wrapper::set_ptrLeft)    
        .def( "validate_ptrLeft", &::CvStereoGCState_wrapper::update_ptrLeft, "Updates the internal C pointer that represents 'ptrLeft'. The function should be called every time the header of 'ptrLeft' is modified by the user." )    
        .add_property( "ptrRight", bp::make_function(&::CvStereoGCState_wrapper::get_ptrRight, bp::return_internal_reference<>()),
            &::CvStereoGCState_wrapper::set_ptrRight)    
        .def( "validate_ptrRight", &::CvStereoGCState_wrapper::update_ptrRight, "Updates the internal C pointer that represents 'ptrRight'. The function should be called every time the header of 'ptrRight' is modified by the user." )    
        .add_property( "vtxBuf", bp::make_function(&::CvStereoGCState_wrapper::get_vtxBuf, bp::return_internal_reference<>()),
            &::CvStereoGCState_wrapper::set_vtxBuf)    
        .def( "validate_vtxBuf", &::CvStereoGCState_wrapper::update_vtxBuf, "Updates the internal C pointer that represents 'vtxBuf'. The function should be called every time the header of 'vtxBuf' is modified by the user." )    
        .add_property( "edgeBuf", bp::make_function(&::CvStereoGCState_wrapper::get_edgeBuf, bp::return_internal_reference<>()),
            &::CvStereoGCState_wrapper::set_edgeBuf)    
        .def( "validate_edgeBuf", &::CvStereoGCState_wrapper::update_edgeBuf, "Updates the internal C pointer that represents 'edgeBuf'. The function should be called every time the header of 'edgeBuf' is modified by the user." );

}
