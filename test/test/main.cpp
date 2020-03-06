//
//  main.cpp
//  test
//
//  Created by 徐亦燊 on 2020/2/28.
//  Copyright © 2020 徐亦燊. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;
int main(int argc, const char * argv[]) {
    
    
    VideoCapture cap;
    
    cap.open(0);
    
    if(!cap.isOpened())
    {
        std::cout<<"不能打开视频文件"<< std::endl;
        return-1;
    }
    
    double fps = cap.get(CAP_PROP_FPS);
    std::cout <<"fps" << fps << std::endl;
    while (1)
    {
        cv::Mat frame;
        bool rSucess = cap.read(frame);
        if (!rSucess)
        {
            std::cout <<"不能从视频文件中读取帧" << std::endl;
            break;
        }
        else
        {
            cv::imshow("frame",frame);
        }
    }
        waitKey(30);
        return 0;
    }
