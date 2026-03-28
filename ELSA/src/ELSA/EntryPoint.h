#pragma once

#ifdef EL_PLATFORM_WINDOWS

extern ELSA::Application* ELSA::CreateApplication();

int main(int argc,char** argv) {

	ELSA::Log::Init();
	EL_CORE_WARN("Initialized Log!");
	int a = 5;
	EL_INFO("Hello! Var = {0}", a);

	printf("ELSA is running!");
	auto app = ELSA::CreateApplication();
	app->Run();
	delete app;

}
#endif