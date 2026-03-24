#pragma once

#ifdef EL_PLATFORM_WINDOWS

extern ELSA::Application* ELSA::CreateApplication();

int main(int argc,char** argv) {

	printf("ELSA is running!");
	auto app = ELSA::CreateApplication();
	app->Run();
	delete app;

}
#endif