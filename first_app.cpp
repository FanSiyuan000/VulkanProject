#include "first_app.h"

namespace lve {
	void FirstApp::run() {

		while (!lveWindow.shouldClose()) {//Ϊ���ڵ���һ���鹹�������Ƿ�ر�
			glfwPollEvents();//����봦���ڼ�����¼�
		}
	}
}