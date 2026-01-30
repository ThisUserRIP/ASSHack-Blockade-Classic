#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2Int.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2Int; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct RTHandleProperties
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector2Int previousViewportSize;
		UnityEngine_CoreModule::UnityEngine::Vector2Int previousRenderTargetSize;
		UnityEngine_CoreModule::UnityEngine::Vector2Int currentViewportSize;
		UnityEngine_CoreModule::UnityEngine::Vector2Int currentRenderTargetSize;
		UnityEngine_CoreModule::UnityEngine::Vector4 rtHandleScale;
	};
}

