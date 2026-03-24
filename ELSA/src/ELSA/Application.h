#pragma once
#include "Core.h"
namespace ELSA {

	class ELSA_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};
	//to be defined in client
	Application* CreateApplication();
}