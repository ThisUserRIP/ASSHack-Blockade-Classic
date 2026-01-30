#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Windows_WebCam_PhotoCapture.h"
namespace UnityEngine_CoreModule::UnityEngine::Windows::WebCam { struct PhotoCapture; };
#include "UnityEngine_Windows_WebCam_PhotoCapture_CaptureResultType.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };

namespace UnityEngine_CoreModule::UnityEngine::Windows::WebCam
{
	struct PhotoCapture_PhotoCaptureResult
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Windows::WebCam::PhotoCapture_CaptureResultType resultType;
		int64_t hResult;
	};
}

