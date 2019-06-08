#include <jni.h>
#include <string>
#include <opencv2/opencv.hpp>

using namespace cv;

extern "C"
JNIEXPORT void JNICALL
Java_com_example_ihyelan_opencvuse_MainActivity_ConvertRGBtoGray(JNIEnv *env, jobject instance,
                                                                 jlong matAddrInput,
                                                                 jlong matAddrResult) {

    // 입력 RGBA 이미지를 GRAY 이미지로 변환
    Mat &matInput = *(Mat *)matAddrInput;
    Mat &matResult = *(Mat *)matAddrResult;

    cvtColor(matInput, matResult, COLOR_RGBA2GRAY);
}