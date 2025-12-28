#pragma once
#include<iostream>
#include<vector>
#include<opencv2/opencv.hpp>
#include<Windows.h>
//调用系统多媒体库播放音乐
#include"all_music.h"
#include"player.h"
#include"monster.h"
#include"bullet.h"
class GAME
{
private:
	//游戏视口
	cv::Point game_viewport_position;
	cv::Size game_viewport_size;
	//窗口位置居中
	int wind_width, wind_height;
	//游戏背景图
	cv::Mat bk_img;
	cv::Mat bk_img_copy;
	cv::Size bk_img_size;
	//游戏对象
	PLAYER player;
	std::vector<MONSTER> monster;
	std::vector<BULLET> bullet;
	cv::Point  bullet_dir;//根据角色的方向记录子弹朝向
	void create_bk_img();//创建默认背景
public:
	GAME();
	~GAME();
	void handle_input(int key);
	void update();
	void draw();
};

