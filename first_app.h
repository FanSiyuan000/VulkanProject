#pragma once

#include "lve_window.h"

namespace lve {
	class FirstApp
	{
	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;//���崰�ڳ���

		void run();//���к���

	private:
		LveWindow lveWindow{WIDTH, HEIGHT, "Vulkan"};//��������һ�����ڣ�����ʱ��window�Զ��ƻ�
	};
}