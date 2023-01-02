#pragma once

#ifdef CRYO_PLATFORM_WINDOWS

extern Cryo::Application* Cryo::CreateApplication();

int main(int argc, char** argv)
{
	printf("Cryo Engine");
	auto app = Cryo::CreateApplication();
	app->Run();
	delete app;
}

#endif
