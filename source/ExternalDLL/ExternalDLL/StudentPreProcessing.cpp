#include "StudentPreProcessing.h"


cv::Mat StudentPreProcessing::combineKernels(const cv::Mat& x_res, const cv::Mat& y_res) const {
	cv::Mat result_combine(x_res.rows, x_res.cols, CV_8UC1);
	for (int x = 0; x < x_res.cols; x++) {
		for (int y = 0; y < x_res.rows; y++) {
			unsigned int x_val = x_res.at<uchar>(y, x);
			unsigned int y_val = y_res.at<uchar>(y, x);
			unsigned int pyto = std::sqrt((x_val * x_val) + (y_val * y_val));
			result_combine.at<uchar>(y, x) = pyto;
		}
	}
	return result_combine;
}

IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepScaleImage(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage* StudentPreProcessing::stepEdgeDetection(const IntensityImage& image) const {
    cv::Mat matrix_img;

    float kernel_data_x[9] = { -1, 0, 1, -2, 0, 2, -1, 0, 1 };
    float kernel_data_y[9] = { -1, -2, -1, 0, 0, 0, 1, 2, 1 };
    cv::Mat kernel_x = cv::Mat(3, 3, CV_32F, kernel_data_x);
    cv::Mat kernel_y = cv::Mat(3, 3, CV_32F, kernel_data_y);
    cv::Mat res_kernel_x;
    cv::Mat res_kernel_y;

    HereBeDragons::HerLoveForWhoseDearLoveIRiseAndFall(image, matrix_img);
    cv::filter2D(matrix_img, res_kernel_x, -1, kernel_x, cv::Point(-1, -1), 0, cv::BORDER_DEFAULT);
    cv::filter2D(matrix_img, res_kernel_y, -1, kernel_y, cv::Point(-1, -1), 0, cv::BORDER_DEFAULT);

    cv::Mat combined_kernels = combineKernels(res_kernel_x, res_kernel_y);
    IntensityImage* finalIntesityImage = ImageFactory::newIntensityImage();
    HereBeDragons::NoWantOfConscienceHoldItThatICall(combined_kernels, *finalIntesityImage);
    
    return finalIntesityImage;
}

IntensityImage * StudentPreProcessing::stepThresholding(const IntensityImage &image) const {
    cv::Mat matrix_img;
    HereBeDragons::HerLoveForWhoseDearLoveIRiseAndFall(image, matrix_img);

    cv::threshold(matrix_img, matrix_img, threshold, 255, cv::THRESH_BINARY_INV);

    IntensityImage* finalIntesityImage = ImageFactory::newIntensityImage();
    HereBeDragons::NoWantOfConscienceHoldItThatICall(matrix_img, *finalIntesityImage);
    return finalIntesityImage;
}