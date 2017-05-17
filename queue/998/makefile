SOURCE = test.cpp demo.cpp

# OpenCV version
OpenCV_VER = 2.4.10
# visual c++ version for OpenCV : vc12.0 vc10.0 vc11.0
VSV = vc12.0
CVV = 2410
# ARCH for OpenCV: x86 x64
ARCH = x64

OpenCV_ROOT = K:/OpenCV/$(OpenCV_VER)
OpenCV_INC = $(OpenCV_ROOT)/include
OpenCV_LIB = $(OpenCV_ROOT)/$(ARCH)/$(VSV)/lib
OpenCV_LIBS = $(OpenCV_LIB)/opencv_calib3d$(CVV).lib \
							$(OpenCV_LIB)/opencv_contrib$(CVV).lib \
							$(OpenCV_LIB)/opencv_core$(CVV).lib \
							$(OpenCV_LIB)/opencv_features2d$(CVV).lib \
							$(OpenCV_LIB)/opencv_flann$(CVV).lib \
							$(OpenCV_LIB)/opencv_highgui$(CVV).lib \
							$(OpenCV_LIB)/opencv_imgproc$(CVV).lib \
							$(OpenCV_LIB)/opencv_legacy$(CVV).lib \
							$(OpenCV_LIB)/opencv_ml$(CVV).lib \
							$(OpenCV_LIB)/opencv_nonfree$(CVV).lib \
							$(OpenCV_LIB)/opencv_objdetect$(CVV).lib \
							$(OpenCV_LIB)/opencv_photo$(CVV).lib \
							$(OpenCV_LIB)/opencv_stitching$(CVV).lib \
							$(OpenCV_LIB)/opencv_superres$(CVV).lib \
							$(OpenCV_LIB)/opencv_ts$(CVV).lib \
							$(OpenCV_LIB)/opencv_video$(CVV).lib \
							$(OpenCV_LIB)/opencv_videostab$(CVV).lib \

EIGEN_ROOT = K:/eigen/3.2.8

main : $(SOURCE)
	cl /EHsc -O2 -I. -I$(OpenCV_INC) -I$(EIGEN_ROOT) $(SOURCE) $(OpenCV_LIBS)

clean :
	del /Q /F /S *.obj *.exe
