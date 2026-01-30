#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_ScreenCapture_StereoScreenCaptureMode.h"

namespace UnityEngine_ScreenCaptureModule::UnityEngine
{
	struct ScreenCapture : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void CaptureScreenshot(mscorlib::System::String* filename);
		static void CaptureScreenshot(mscorlib::System::String* filename, int32_t superSize, UnityEngine_ScreenCaptureModule::UnityEngine::ScreenCapture_StereoScreenCaptureMode CaptureMode);
	};
}

