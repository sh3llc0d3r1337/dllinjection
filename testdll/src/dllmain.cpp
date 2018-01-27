
#include <windows.h>


BOOL WINAPI DllMain(
	HINSTANCE hinstDLL,
	DWORD fdwReason,
	LPVOID lpvReserved)
{
	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:
#ifdef __MiNGW64__
		MessageBox(NULL, L"Process attach!", L"DLL Injection for 64 bit!", 0);
#else
		MessageBox(NULL, L"Process attach!", L"DLL Injection for 32 bit!", 0);
#endif
		break;

	case DLL_THREAD_ATTACH:
		break;

	case DLL_THREAD_DETACH:
		break;

	case DLL_PROCESS_DETACH:
		break;
	}

	return TRUE;
}

