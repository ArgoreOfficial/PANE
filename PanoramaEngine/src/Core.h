
#ifdef PANE_BUILD_DLL
	#define PANE_API __declspec(dllexport)
#else
	#define PANE_API __declspec(dllimport)
#endif