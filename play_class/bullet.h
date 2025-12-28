#pragma once
#include<iostream>
#include<opencv2/opencv.hpp>
#include"game_obj_collision.h"
#undef max
#undef min
class BULLET:public game_obj_collision
{
private:
	cv::Mat bullet_img;
	cv::Mat temp_bullet_img;//用于朝向绘制
	cv::Size bullet_size;
	cv::Point bullet_diretion;
	int speed;
public:
	int life_time;
public:
	BULLET(cv::Size role_size, cv::Point role_pos, cv::Point dir);
	~BULLET();
	cv::Size get_bullet_size() const;
	void bullet_move(const cv::Size& bk_szie);
	void bullet_draw(const cv::Mat& frame) const;
};

