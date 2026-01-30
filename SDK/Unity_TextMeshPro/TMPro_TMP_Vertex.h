#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color32.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_Vertex
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 position;
		UnityEngine_CoreModule::UnityEngine::Vector2 uv;
		UnityEngine_CoreModule::UnityEngine::Vector2 uv2;
		UnityEngine_CoreModule::UnityEngine::Vector2 uv4;
		UnityEngine_CoreModule::UnityEngine::Color32 color;
		static Unity_TextMeshPro::TMPro::TMP_Vertex get_zero();
		static void _cctor();
	};
}

