/*
* Copyright (c) 2015 DottedEye Designs, Alexander Hustinx, NeoTech Software, Rolf Smit - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
*/

#pragma once
#include "PreProcessing.h"
#include <opencv2/core/mat.hpp>
#include "HereBeDragons.h"
class StudentPreProcessing : public PreProcessing {
public:
	IntensityImage * stepToIntensityImage(const RGBImage &image) const;
	IntensityImage * stepScaleImage(const IntensityImage &image) const;
	IntensityImage * stepEdgeDetection(const IntensityImage &image) const;
	IntensityImage * stepThresholding(const IntensityImage &image) const;
private:
	cv::Mat intensImgToMat(const IntensityImage& image);
	IntensityImage* matToIntensImg(const cv::Mat& image);
	cv::Mat combineKernels(const cv::Mat& x_res, const cv::Mat& y_res);
};