#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_XR_XRDisplaySubsystem.h"
namespace UnityEngine_XRModule::UnityEngine::XR { struct XRDisplaySubsystem; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };

namespace UnityEngine_XRModule::UnityEngine::XR
{
	struct XRDisplaySubsystem_XRBlitParams
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::RenderTexture* srcTex;
		int32_t srcTexArraySlice;
		UnityEngine_CoreModule::UnityEngine::Rect srcRect;
		UnityEngine_CoreModule::UnityEngine::Rect destRect;
	};
}

