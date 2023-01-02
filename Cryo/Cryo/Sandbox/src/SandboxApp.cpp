#include "Cryo.h"

class Sandbox : public Cryo::Application 
{
public:
	Sandbox(){}

	~Sandbox(){}
};

Cryo::Application* Cryo::CreateApplication() {
	return new Sandbox();
}