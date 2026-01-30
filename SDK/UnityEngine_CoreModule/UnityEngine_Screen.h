#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_ScreenOrientation.h"
#include "UnityEngine_Resolution.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Resolution; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_FullScreenMode.h"

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Screen : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static int32_t get_width();
		static int32_t get_height();
		static float get_dpi();
		static void RequestOrientation(UnityEngine_CoreModule::UnityEngine::ScreenOrientation orient);
		static UnityEngine_CoreModule::UnityEngine::ScreenOrientation GetScreenOrientation();
		static UnityEngine_CoreModule::UnityEngine::ScreenOrientation get_orientation();
		static void set_orientation(UnityEngine_CoreModule::UnityEngine::ScreenOrientation value);
		static UnityEngine_CoreModule::UnityEngine::Resolution get_currentResolution();
		static bool get_fullScreen();
		static void set_fullScreen(bool value);
		static UnityEngine_CoreModule::UnityEngine::FullScreenMode get_fullScreenMode();
		static void SetResolution(int32_t width, int32_t height, UnityEngine_CoreModule::UnityEngine::FullScreenMode fullscreenMode, int32_t preferredRefreshRate);
		static void SetResolution(int32_t width, int32_t height, bool fullscreen, int32_t preferredRefreshRate);
		static void SetResolution(int32_t width, int32_t height, bool fullscreen);
		static IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Resolution>* get_resolutions();
		static void get_currentResolution_Injected(UnityEngine_CoreModule::UnityEngine::Resolution& ret);
	};
}

