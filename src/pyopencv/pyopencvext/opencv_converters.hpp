#ifndef SDOPENCV_CONVERTERS_H
#define SDOPENCV_CONVERTERS_H

#include <cstdio>
#include <vector>
#include <typeinfo>

#include "boost/python.hpp"
#include "boost/python/object.hpp"
#include "boost/python/str.hpp"
#include "boost/python/tuple.hpp"
#include "boost/python/list.hpp"
#include "boost/python/to_python_value.hpp"

#include "opencv_extra.hpp"

// ================================================================================================
// Useful template functions that deal with fixed-size array-like data types

// ------------------------------------------------------------------------------------------------
// elem_type_of : type of an element of T
template<typename T>
inline int elem_type_of()
{
    char s[300];
    sprintf( s, "Instantiation of function elem_type_of() for class '%s' is not yet implemented.", typeid(T).name() );
    PyErr_SetString(PyExc_NotImplementedError, s);
    throw bp::error_already_set(); 
}

// basic
template<> inline int elem_type_of<char>() { return CV_8S; }
template<> inline int elem_type_of<unsigned char>() { return CV_8U; }
template<> inline int elem_type_of<short>() { return CV_16S; }
template<> inline int elem_type_of<unsigned short>() { return CV_16U; }
template<> inline int elem_type_of<long>() { return CV_32S; } // workaround, only works for 32-bit
// template<> inline int elem_type_of<unsigned long>() { return CV_32U; } // workaround, only works for 32-bit
template<> inline int elem_type_of<int>() { return CV_32S; } // workaround, only works for 32-bit
// template<> inline int elem_type_of<unsigned int>() { return CV_32U; } // workaround, only works for 32-bit
template<> inline int elem_type_of<float>() { return CV_32F; }
template<> inline int elem_type_of<double>() { return CV_64F; }

// Vec-like
template<> inline int elem_type_of<cv::Vec2b>() { return CV_8U; }
template<> inline int elem_type_of<cv::Vec3b>() { return CV_8U; }
template<> inline int elem_type_of<cv::Vec4b>() { return CV_8U; }
template<> inline int elem_type_of<cv::Vec2s>() { return CV_16S; }
template<> inline int elem_type_of<cv::Vec3s>() { return CV_16S; }
template<> inline int elem_type_of<cv::Vec4s>() { return CV_16S; }
template<> inline int elem_type_of<cv::Vec2w>() { return CV_16U; }
template<> inline int elem_type_of<cv::Vec3w>() { return CV_16U; }
template<> inline int elem_type_of<cv::Vec4w>() { return CV_16U; }
template<> inline int elem_type_of<cv::Vec2i>() { return CV_32S; } // workaround, only works for 32-bit
template<> inline int elem_type_of<cv::Vec3i>() { return CV_32S; } // workaround, only works for 32-bit
template<> inline int elem_type_of<cv::Vec4i>() { return CV_32S; } // workaround, only works for 32-bit
template<> inline int elem_type_of<cv::Vec2f>() { return CV_32F; }
template<> inline int elem_type_of<cv::Vec3f>() { return CV_32F; }
template<> inline int elem_type_of<cv::Vec4f>() { return CV_32F; }
template<> inline int elem_type_of<cv::Vec6f>() { return CV_32F; }
template<> inline int elem_type_of<cv::Vec2d>() { return CV_64F; }
template<> inline int elem_type_of<cv::Vec3d>() { return CV_64F; }
template<> inline int elem_type_of<cv::Vec4d>() { return CV_64F; }
template<> inline int elem_type_of<cv::Vec6d>() { return CV_64F; }

// Point-like
template<> inline int elem_type_of<cv::Point2i>() { return CV_32S; } // workaround, only works for 32-bit
template<> inline int elem_type_of<cv::Point2f>() { return CV_32F; }
template<> inline int elem_type_of<cv::Point2d>() { return CV_64F; }
template<> inline int elem_type_of<cv::Point3i>() { return CV_32S; } // workaround, only works for 32-bit
template<> inline int elem_type_of<cv::Point3f>() { return CV_32F; }
template<> inline int elem_type_of<cv::Point3d>() { return CV_64F; }

// Rect-like
template<> inline int elem_type_of<cv::Rect>() { return CV_32S; } // workaround, only works for 32-bit
template<> inline int elem_type_of<cv::Rectf>() { return CV_32F; }
template<> inline int elem_type_of<cv::Rectd>() { return CV_64F; }
template<> inline int elem_type_of<cv::RotatedRect>() { return CV_32F; }

// Scalar
template<> inline int elem_type_of<cv::Scalar>() { return CV_64F; }

// Range
template<> inline int elem_type_of<cv::Range>() { return CV_32S; } // workaround, only works for 32-bit


// ------------------------------------------------------------------------------------------------
// n_elems_of : number of elements of T
template<typename T>
inline int n_elems_of()
{
    char s[300];
    sprintf( s, "Instantiation of function n_elems_of() for class '%s' is not yet implemented.", typeid(T).name() );
    PyErr_SetString(PyExc_NotImplementedError, s);
    throw bp::error_already_set(); 
}

// basic
template<> inline int n_elems_of<char>() { return 1; }
template<> inline int n_elems_of<unsigned char>() { return 1; }
template<> inline int n_elems_of<short>() { return 1; }
template<> inline int n_elems_of<unsigned short>() { return 1; }
template<> inline int n_elems_of<long>() { return 1; }
template<> inline int n_elems_of<unsigned long>() { return 1; }
template<> inline int n_elems_of<int>() { return 1; }
template<> inline int n_elems_of<unsigned int>() { return 1; }
template<> inline int n_elems_of<float>() { return 1; }
template<> inline int n_elems_of<double>() { return 1; }

// Vec-like
template<> inline int n_elems_of<cv::Vec2b>() { return 2; }
template<> inline int n_elems_of<cv::Vec3b>() { return 3; }
template<> inline int n_elems_of<cv::Vec4b>() { return 4; }
template<> inline int n_elems_of<cv::Vec2s>() { return 2; }
template<> inline int n_elems_of<cv::Vec3s>() { return 3; }
template<> inline int n_elems_of<cv::Vec4s>() { return 4; }
template<> inline int n_elems_of<cv::Vec2w>() { return 2; }
template<> inline int n_elems_of<cv::Vec3w>() { return 3; }
template<> inline int n_elems_of<cv::Vec4w>() { return 4; }
template<> inline int n_elems_of<cv::Vec2i>() { return 2; }
template<> inline int n_elems_of<cv::Vec3i>() { return 3; }
template<> inline int n_elems_of<cv::Vec4i>() { return 4; }
template<> inline int n_elems_of<cv::Vec2f>() { return 2; }
template<> inline int n_elems_of<cv::Vec3f>() { return 3; }
template<> inline int n_elems_of<cv::Vec4f>() { return 4; }
template<> inline int n_elems_of<cv::Vec6f>() { return 6; }
template<> inline int n_elems_of<cv::Vec2d>() { return 2; }
template<> inline int n_elems_of<cv::Vec3d>() { return 3; }
template<> inline int n_elems_of<cv::Vec4d>() { return 4; }
template<> inline int n_elems_of<cv::Vec6d>() { return 6; }

// Point-like
template<> inline int n_elems_of<cv::Point2i>() { return 2; }
template<> inline int n_elems_of<cv::Point2f>() { return 2; }
template<> inline int n_elems_of<cv::Point2d>() { return 2; }
template<> inline int n_elems_of<cv::Point3i>() { return 3; }
template<> inline int n_elems_of<cv::Point3f>() { return 3; }
template<> inline int n_elems_of<cv::Point3d>() { return 3; }

// Rect-like
template<> inline int n_elems_of<cv::Rect>() { return 4; }
template<> inline int n_elems_of<cv::Rectf>() { return 4; }
template<> inline int n_elems_of<cv::Rectd>() { return 4; }
template<> inline int n_elems_of<cv::RotatedRect>() { return 5; }

// Scalar
template<> inline int n_elems_of<cv::Scalar>() { return 4; }

// Range
template<> inline int n_elems_of<cv::Range>() { return 2; }


// ================================================================================================
// New converters related to cv::Mat

// ------------------------------------------------------------------------------------------------
// get the number of elements of type T per row
template<typename T>
int n_elems_per_row( const cv::Mat &mat )
{
    char s[300];
    
    if(!mat.empty()) return 0; // empty Mat is valid

    if(mat.depth() != elem_type_of<T>())
    {
        sprintf( s, "Mat's depth (%d) not equal to the element type (%d) of class type '%s'", mat.depth(), elem_type_of<T>(), typeid(T).name() );
        PyErr_SetString(PyExc_TypeError, s);
        throw bp::error_already_set(); 
    }
    
    return mat.channels()*mat.cols;
}

// ------------------------------------------------------------------------------------------------
// create a 1-row Mat with n elements of type T, return a pointer to the first element
// if 'in_arr' is not NULL, copy the data to the newly created Mat
template<typename T>
T *create_Mat( const cv::Mat &out_arr, int n, T const *in_arr=0 )
{
    if(!n)
    {
        out_arr = cv::Mat();
        return 0;
    }
    
    int nchannels = n_elems_of<T>();
    if(nchannels > 1 && nchannels <= 4) // multi-channel
        out_arr.create(cv::Size(n, 1), CV_MAKETYPE(elem_type_of<T>(), nchannels));
    else
        out_arr.create(cv::Size(nchannels*n, 1), CV_MAKETYPE(elem_type_of<T>(), 1));

    T *ddst = (T *)out_arr.data;
    if(in_arr) for(int i = 0; i < n; ++i) ddst[i] = in_arr[i];
    return ddst;
}

// ------------------------------------------------------------------------------------------------
// convert_from_Mat_to_T
template<typename T>
void convert_from_Mat_to_T( const cv::Mat &in_arr, T &out_arr )
{
    char s[300];
    int n = n_elems_per_row<T>(in_arr);
    if(n < n_elems_of<T>())
    {
        sprintf( s, "Mat only has %d elements per row while class type '%s' has %d elements.", 
            n, typeid(T).name(), n_elems_of<T>() );
        PyErr_SetString(PyExc_TypeError, s);
        throw bp::error_already_set(); 
    }
    out_arr = *(T *)in_arr.data;
}

// ------------------------------------------------------------------------------------------------
// convert_from_T_to_Mat
template<typename T>
void convert_from_T_to_Mat( const T &in_arr, cv::Mat &out_arr )
{
    *create_Mat<T>(out_arr, 1) = in_arr;
}

// ------------------------------------------------------------------------------------------------
// convert_from_Mat_to_array_of_T
template<typename T>
void convert_from_Mat_to_array_of_T( const cv::Mat &in_arr, T *&out_arr, int &out_len )
{    
    out_len = n_elems_per_row<T>(in_arr);
    out_arr = out_len? (T *)in_arr.data: 0;
}

// ------------------------------------------------------------------------------------------------
// convert_from_array_of_T_to_Mat
template<typename T>
void convert_from_array_of_T_to_Mat( T const *in_arr, int in_len, cv::Mat &out_arr )
{
    if(!out_arr.empty() && out_arr.depth() == elem_type_of<T>()) // same depth
    {
        if(n_elems_per_row<T>(out_arr) == in_len && (T const *)out_arr.data == in_arr)
            return; // same array
    }
    
    create_Mat<T>(out_arr, in_len, in_arr);
}

// ------------------------------------------------------------------------------------------------
// convert_from_Mat_to_vector_of_T
template<typename T>
void convert_from_Mat_to_vector_of_T( const cv::Mat &in_arr, std::vector<T> &out_arr )
{
    int out_len = n_elems_per_row<T>(in_arr);
    if(out_len)
    {
        out_arr.resize(out_len);
        T *out_arr2 = (T *)in_arr.data;
        for(int i = 0; i < out_len; ++i) out_arr[i] = out_arr2[i];
    }
    else
        out_arr.clear();
}

// ------------------------------------------------------------------------------------------------
// convert_from_vector_of_T_to_Mat
template<typename T>
void convert_from_vector_of_T_to_Mat( const std::vector<T> &in_arr, cv::Mat &out_arr )
{
    create_Mat<T>(out_arr, in_arr.size(), &in_arr[0]);
}


// ================================================================================================

// convert_Mat
template<typename T>
void convert_Mat( const cv::Mat &in_arr, T &out_arr )
{
    char s[300];
    sprintf( s, "Instantiation of function convert_Mat() for class '%s' is not yet implemented.", typeid(T).name() );
    PyErr_SetString(PyExc_NotImplementedError, s);
    throw bp::error_already_set(); 
}

template<typename T>
void convert_Mat( const T &in_arr, cv::Mat &out_arr )
{
    char s[300];
    sprintf( s, "Instantiation of function convert_Mat() for class '%s' is not yet implemented.", typeid(T).name() );
    PyErr_SetString(PyExc_NotImplementedError, s);
    throw bp::error_already_set(); 
}

// convert a Python sequence into a cv::Mat
template<> void convert_Mat<bp::object>( const bp::object &in_arr, cv::Mat &out_arr );


// convert_Mat, T * case
// Only from Mat to T* is implemented. The converse direction is UNSAFE.
template<typename T>
void convert_Mat( const cv::Mat &in_arr, T *&out_arr )
{
    char s[100];
    if(!in_arr.flags) { out_arr = 0; return; }
    
    if(in_arr.rows != 1)
    {
        sprintf(s, "Mat must be a row vector, rows=%d detected.", in_arr.rows);
        PyErr_SetString(PyExc_TypeError, s);
        throw bp::error_already_set(); 
    }
    if(in_arr.channels() != 1)
    {
        sprintf(s, "Mat must be single-channel, nchannels=%d detected.", in_arr.channels());
        PyErr_SetString(PyExc_TypeError, s);
        throw bp::error_already_set(); 
    }
    if(in_arr.type() != cvtypeof<T>())
    {
        sprintf(s, "cv::Mat's element type is not the same as that of the output array. cv::Mat's type=%d, vector's type=%d.", in_arr.type(), cvtypeof<T>());
        PyErr_SetString(PyExc_TypeError, s);
        throw bp::error_already_set(); 
    }
    
    out_arr = (T *)in_arr.data;
}

extern template void convert_Mat( const cv::Mat &in_arr, char *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, unsigned char *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, short *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, unsigned short *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, long *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, unsigned long *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, int *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, unsigned int *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, float *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, double *&out_arr );

// ================================================================================================

// convert_seq_to_vector
template<typename T>
void convert_seq_to_vector( const bp::object &in_arr, std::vector<T> &out_arr )
{
    // None
    out_arr.clear();
    if(in_arr.ptr() == Py_None) return;
    
    // ndarray
    bp::extract<bp::ndarray> in_ndarray(in_arr);
    if(in_ndarray.check())
    {
        bp::ndarray_to_vector<T>(in_ndarray(), out_arr);
        return;
    }
    
    // others
    int len = bp::len(in_arr);
    if(!len) return;
    out_arr.resize(len);
    for(int i = 0; i < len; ++i) out_arr[i] = bp::extract<T>(in_arr[i]);
}

// convert_vector_to_seq
template<typename T>
bp::sequence convert_vector_to_seq( const std::vector<T> &in_arr )
{
    bp::list out_arr;
    int len = in_arr.size();
    if(!len) return bp::sequence(bp::list());
    for(int i = 0; i < len; ++i) out_arr.append(bp::object(in_arr[i]));
    return bp::sequence(out_arr);
}

#define CONVERT_VECTOR_TO_SEQ(Type) template<> bp::sequence convert_vector_to_seq<Type>( const std::vector<Type> &in_arr )

// basic
CONVERT_VECTOR_TO_SEQ(char);
CONVERT_VECTOR_TO_SEQ(unsigned char);
CONVERT_VECTOR_TO_SEQ(short);
CONVERT_VECTOR_TO_SEQ(unsigned short);
CONVERT_VECTOR_TO_SEQ(long);
CONVERT_VECTOR_TO_SEQ(unsigned long);
CONVERT_VECTOR_TO_SEQ(int);
CONVERT_VECTOR_TO_SEQ(unsigned int);
CONVERT_VECTOR_TO_SEQ(float);
CONVERT_VECTOR_TO_SEQ(double);

// Vec-like
CONVERT_VECTOR_TO_SEQ(cv::Vec2b);
CONVERT_VECTOR_TO_SEQ(cv::Vec3b);
CONVERT_VECTOR_TO_SEQ(cv::Vec4b);
CONVERT_VECTOR_TO_SEQ(cv::Vec2s);
CONVERT_VECTOR_TO_SEQ(cv::Vec3s);
CONVERT_VECTOR_TO_SEQ(cv::Vec4s);
CONVERT_VECTOR_TO_SEQ(cv::Vec2w);
CONVERT_VECTOR_TO_SEQ(cv::Vec3w);
CONVERT_VECTOR_TO_SEQ(cv::Vec4w);
CONVERT_VECTOR_TO_SEQ(cv::Vec2i);
CONVERT_VECTOR_TO_SEQ(cv::Vec3i);
CONVERT_VECTOR_TO_SEQ(cv::Vec4i);
CONVERT_VECTOR_TO_SEQ(cv::Vec2f);
CONVERT_VECTOR_TO_SEQ(cv::Vec3f);
CONVERT_VECTOR_TO_SEQ(cv::Vec4f);
CONVERT_VECTOR_TO_SEQ(cv::Vec6f);
CONVERT_VECTOR_TO_SEQ(cv::Vec2d);
CONVERT_VECTOR_TO_SEQ(cv::Vec3d);
CONVERT_VECTOR_TO_SEQ(cv::Vec4d);
CONVERT_VECTOR_TO_SEQ(cv::Vec6d);

// Point-like
CONVERT_VECTOR_TO_SEQ(cv::Point2i);
CONVERT_VECTOR_TO_SEQ(cv::Point2f);
CONVERT_VECTOR_TO_SEQ(cv::Point2d);
CONVERT_VECTOR_TO_SEQ(cv::Point3i);
CONVERT_VECTOR_TO_SEQ(cv::Point3f);
CONVERT_VECTOR_TO_SEQ(cv::Point3d);

// Rect-like
CONVERT_VECTOR_TO_SEQ(cv::Rect);
CONVERT_VECTOR_TO_SEQ(cv::Rectd);
CONVERT_VECTOR_TO_SEQ(cv::Rectf);
CONVERT_VECTOR_TO_SEQ(cv::RotatedRect);

// Scalar
CONVERT_VECTOR_TO_SEQ(cv::Scalar);

// Range
CONVERT_VECTOR_TO_SEQ(cv::Range);


template<class T>
struct vector_to_python {
    static PyObject* convert(std::vector<T> const &x) {
        return bp::incref(convert_vector_to_seq(x).ptr());
    }
};


// ================================================================================================

// convert_seq_to_vector_vector
template<typename T>
void convert_seq_to_vector_vector( const bp::object &in_arr, std::vector < std::vector < T > > &out_arr )
{
    out_arr.clear();
    if(in_arr.ptr() == Py_None) return;
    int len = bp::len(in_arr);
    if(!len) return;
    out_arr.resize(len);
    for(int i = 0; i < len; ++i) convert_seq_to_vector(in_arr[i], out_arr[i]);
}

// convert_vector_vector_to_seq
template<typename T>
bp::sequence convert_vector_vector_to_seq( const std::vector < std::vector < T > > &in_arr )
{
    bp::list out_arr;
    int len = in_arr.size();
    if(!len) return bp::sequence(bp::list());
    for(int i = 0; i < len; ++i) out_arr.append(convert_vector_to_seq(in_arr[i]));
    return bp::sequence(out_arr);
}

template<class T>
struct vector_vector_to_python {
    static PyObject* convert(std::vector< std::vector<T> > const &x) {
        return bp::incref(convert_vector_vector_to_seq(x).ptr());
    }
};


CvMat * get_CvMat_ptr(cv::Mat const &mat);
IplImage * get_IplImage_ptr(cv::Mat const &mat);



#endif
