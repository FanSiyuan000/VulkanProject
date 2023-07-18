#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>

namespace lve {

	class LveWindow {

	public:
		LveWindow(int w, int h, std::string name);
		~LveWindow();//����������
		
		LveWindow(const LveWindow&) = delete;
		LveWindow& operator = (const LveWindow&) = delete;
		//ɾ�����ƹ��캯���븴�������

		bool shouldClose() {
			return glfwWindowShouldClose(window);
		}//�������캯����ȡ�����ڳ�ʼ����Ա������ֵ

	private:

		void initWindow();//��ʼ�����ں���

		const int width;
		const int height;

		std::string windowName;//��Ա�������洰�ڿ���������
		GLFWwindow* window; //ָ��GLFWwindow��ָ��
	};//����LveWindow���װһЩ���ڴ��ڵĹ���
}