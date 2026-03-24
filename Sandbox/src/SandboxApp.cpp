
#include <ELSA.h>

class Sandbox : public ELSA::Application
{
public:
	Sandbox()
	{
	}
	~Sandbox()
	{
	}
};

ELSA::Application* ELSA::CreateApplication()
{
	return new Sandbox();
}