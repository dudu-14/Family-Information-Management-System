#pragma once

#include "pch.h"
#include "MainWindow.h"

using namespace System;
using namespace 家庭信息管理系统;

int saveData()
{
	// TODO: 保存数据到文件
	FILE* fout = fopen("./data/data.txt", "w+");
	if (fout == NULL) {
		std::cout << "fp 初始化失败！" << std::endl;

	}
	else
		std::cout << "fp 初始化成功！" << std::endl;

	while (true)
	{
		Console::Write("SaveData While循环进行中...\n");
		// 获取当前日期和时间
		DateTime currentDateTime = DateTime::Now;

		// 获取当前日期
		DateTime currentDate = currentDateTime.Date;

		// 显示当前日期
		fprintf(fout,"当前日期是: %s", currentDate.ToString("yyyy-MM-dd"));

		Sleep(10000);
	}

	fclose(fout);
	return 0;
}

int main(array<System::String^>^ args)
{
	std::cout << "请勿关闭这个控制台窗口。" << std::endl;
	std::vector<std::thread> threads;
	threads.emplace_back(saveData);
	for (auto& t : threads) {
		t.detach();
	}

	Windows::Forms::Application::Run(gcnew MainWindow());

	std::cout << "程序主窗口运行结束。" << std::endl;
	std::cout << "请按任意键继续...";	char pause = _getch(); std::cout << std::endl;

	return 0;
}
/*
多线程示例
const int numThreads = 16;
	std::vector<std::thread> threads;

	// 创建16个线程，每个线程都执行无限循环
	for (int i = 0; i < numThreads; ++i) {
		threads.emplace_back(infiniteLoop);
	}

	// 分离所有线程，主线程不等待
	for (auto& t : threads) {
		t.detach();
	}
*/