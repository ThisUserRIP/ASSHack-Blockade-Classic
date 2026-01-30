#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Unity_TextMeshPro::TMPro
{
	struct Mesh_Extents
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector2 min;
		UnityEngine_CoreModule::UnityEngine::Vector2 max;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Vector2 min, UnityEngine_CoreModule::UnityEngine::Vector2 max);
		mscorlib::System::String* ToString();
	};
}

