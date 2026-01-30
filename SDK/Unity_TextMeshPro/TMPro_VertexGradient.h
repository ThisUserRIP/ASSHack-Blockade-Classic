#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct VertexGradient
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Color topLeft;
		UnityEngine_CoreModule::UnityEngine::Color topRight;
		UnityEngine_CoreModule::UnityEngine::Color bottomLeft;
		UnityEngine_CoreModule::UnityEngine::Color bottomRight;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Color color);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Color color0, UnityEngine_CoreModule::UnityEngine::Color color1, UnityEngine_CoreModule::UnityEngine::Color color2, UnityEngine_CoreModule::UnityEngine::Color color3);
	};
}

