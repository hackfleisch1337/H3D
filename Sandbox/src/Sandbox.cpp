#include <H3D.h>

class Sandbox : public h3d::Application
{
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};



h3d::Application* h3d::Main() {

	

	return new Sandbox();
}