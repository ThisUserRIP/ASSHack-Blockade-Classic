#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Camera.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "UnityEngine_Camera_RenderRequestMode.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };
#include "UnityEngine_Camera_RenderRequestOutputSpace.h"

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Camera_RenderRequest
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Camera_RenderRequestMode m_CameraRenderMode;
		UnityEngine_CoreModule::UnityEngine::RenderTexture* m_ResultRT;
		UnityEngine_CoreModule::UnityEngine::Camera_RenderRequestOutputSpace m_OutputSpace;
	};
}

