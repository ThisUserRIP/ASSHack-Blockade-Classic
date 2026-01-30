#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color32.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_TextRenderingModule::UnityEngine
{
	struct UIVertex
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 position;
		UnityEngine_CoreModule::UnityEngine::Vector3 normal;
		UnityEngine_CoreModule::UnityEngine::Vector4 tangent;
		UnityEngine_CoreModule::UnityEngine::Color32 color;
		UnityEngine_CoreModule::UnityEngine::Vector4 uv0;
		UnityEngine_CoreModule::UnityEngine::Vector4 uv1;
		UnityEngine_CoreModule::UnityEngine::Vector4 uv2;
		UnityEngine_CoreModule::UnityEngine::Vector4 uv3;
		static void _cctor();
	};
}

