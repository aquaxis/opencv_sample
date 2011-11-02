
// サンプル - ガウシアン(平滑化)フィルタ
// test1.cpp
#include <cv.h>
#include <highgui.h>
int main (int argc, char **argv){
	int w, h, i, j;
	IplImage *src_img, *dst_img;

	// 画像を読み込む
	if (argc != 2 || (src_img = cvLoadImage(argv[1], CV_LOAD_IMAGE_ANYDEPTH | CV_LOAD_IMAGE_ANYCOLOR)) == 0){
		return -1;
	}

	// 画像領域の作成
	dst_img = cvCreateImage(cvGetSize(src_img), src_img->depth, src_img->nChannels);

	// 画像の平滑化
	cvSmooth(src_img, dst_img, CV_GAUSSIAN, 3, 3);

	// 画像の表示
	cvNamedWindow("Src Image", CV_WINDOW_AUTOSIZE);
	cvShowImage("Src Image", src_img);
	cvNamedWindow("Dst Image", CV_WINDOW_AUTOSIZE);
	cvShowImage("Dst Image", dst_img);
	cvWaitKey(0);

	// 後始末
	cvDestroyWindow("Src Image");
	cvDestroyWindow("Dst Image");
	cvReleaseImage(&src_img);
	cvReleaseImage(&dst_img);
	return 0;
}
