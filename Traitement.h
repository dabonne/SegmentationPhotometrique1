//
// Created by liris on 30/10/2019.
//

#ifndef SEGMENTATIONPHOTOMETRIQUE_TRAITEMENT_H
#define SEGMENTATIONPHOTOMETRIQUE_TRAITEMENT_H

#include "opencv2/imgproc.hpp"
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "SmallImage.h"

using namespace cv;
using namespace std;
//!
//! \param imageTrans
void arrierePlanBlanc(Mat &imageTrans);

void imageReconstruction(std::vector <SmallImage> &tableImg, Mat &img);
void WriteOnDisk(vector <SmallImage> &tableImag);
vector <SmallImage> patchClassification(vector <SmallImage> &tabImg);
cv::Mat imagePreprocessing(Mat &image);
vector <SmallImage>imageCrop(cv::Mat &img);
void updateRatio(std::vector <SmallImage> &table);

#endif //SEGMENTATIONPHOTOMETRIQUE_TRAITEMENT_H
