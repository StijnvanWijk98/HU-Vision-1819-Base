#include "StudentPreProcessing.h"


cv::Mat StudentPreProcessing::intensImgToMat(const IntensityImage& image) {
	cv::Mat res_matrix;

	return res_matrix;
}
IntensityImage* StudentPreProcessing::matToIntensImg(const cv::Mat& image) {
	//IntensityImage res_image;

	return nullptr;
}

cv::Mat StudentPreProcessing::combineKernels(const cv::Mat& x_res, const cv::Mat& y_res) {

}

IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepScaleImage(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepEdgeDetection(const IntensityImage &image) const {
	cv::Mat matrix_img;
	cv::Mat res_kernel_x;
	cv::Mat res_kernel_y;
	cv::Mat kernel_x = cv::Mat_<float>(3, 3);
	cv::Mat kernel_y = cv::Mat_<float>(3, 3);
	
	
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepThresholding(const IntensityImage &image) const {
	return nullptr;
}