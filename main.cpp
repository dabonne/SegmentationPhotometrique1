#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/opencv.hpp"
#include "Traitement.h"
#include "SmallImage.h"
using namespace cv;
using namespace std;
int main()
{
    // load as color image BGR
    cv::Mat input;
    input = cv::imread("./background.png");
    Mat transfor = imagePreprocessing(input);
    vector <SmallImage> tableImages;
    tableImages = imageCrop(transfor);
    updateRatio(tableImages);
    vector <SmallImage> classe;
    classe = patchClassification(tableImages);
    imageReconstruction(tableImages, input);
    WriteOnDisk(classe);
    return 0;
}