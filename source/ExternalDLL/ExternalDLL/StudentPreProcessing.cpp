#include "StudentPreProcessing.h"
#include "ImageFactory.h"

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
	float kernel_data_x[9] = {-1, 0, 1, -2, 0, 2, -1, 0, 1};
	float kernel_data_y[9] = {-1, -2, -1, 0, 0, 0, 1, 2, 1};
	cv::Mat kernel_x = cv::Mat(3, 3, CV_32F, kernel_data_x);
	cv::Mat kernel_y = cv::Mat(3, 3, CV_32F, kernel_data_y);
	cv::Mat res_kernel_x;
	cv::Mat res_kernel_y;

	HereBeDragons::HerLoveForWhoseDearLoveIRiseAndFall(image, matrix_img);
	cv::filter2D(matrix_img, kernel_x, 0, kernel_y);
	cv::filter2D(matrix_img, kernel_y, 0, kernel_y);
	
	IntensityImage* finalIntesityImage = ImageFactory::newIntensityImage();
	HereBeDragons::NoWantOfConscienceHoldItThatICall(res_kernel_x, *finalIntesityImage);
	return finalIntesityImage;
}

IntensityImage * StudentPreProcessing::stepThresholding(const IntensityImage &image) const {
	return nullptr;
}