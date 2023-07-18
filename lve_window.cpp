#include "lve_window.h"

namespace lve {
	LveWindow::LveWindow(int w, int h, std::string name) : width{ w }, height{ h }, windowName{ name } {
		initWindow();//����initWindow
	}//���캯��ʹ�ó�Ա��ʼֵ�趨���б�����ʼ����Ա����

	LveWindow::~LveWindow() {
		glfwDestroyWindow(window);//�����windowָ��
		glfwTerminate();
	}//�����������ٳ�ʼ��������Դ

	void LveWindow::initWindow() {
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);//������OpenGL������
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);//ʹ����ʾ�ڴ�������ô��ڴ�С����

		window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);//������������

	}//ʵ��initWindow����Ҫ����glfwInit��ʼ��GLFW��
}