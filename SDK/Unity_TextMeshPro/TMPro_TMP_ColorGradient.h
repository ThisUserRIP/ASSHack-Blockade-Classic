#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
#include "TMPro_ColorMode.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_ColorGradient : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_TextMeshPro::TMPro::ColorMode colorMode;
		UnityEngine_CoreModule::UnityEngine::Color topLeft;
		UnityEngine_CoreModule::UnityEngine::Color topRight;
		UnityEngine_CoreModule::UnityEngine::Color bottomLeft;
		UnityEngine_CoreModule::UnityEngine::Color bottomRight;
		struct StaticFields
		{
			Unity_TextMeshPro::TMPro::ColorMode k_DefaultColorMode;
			UnityEngine_CoreModule::UnityEngine::Color k_DefaultColor;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(UnityEngine_CoreModule::UnityEngine::Color color);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Color color0, UnityEngine_CoreModule::UnityEngine::Color color1, UnityEngine_CoreModule::UnityEngine::Color color2, UnityEngine_CoreModule::UnityEngine::Color color3);
		static void _cctor();
	};
}

