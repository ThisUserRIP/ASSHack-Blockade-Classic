#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::Doozy::Engine::Extensions
{
	struct ColorExtensions : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			float LIGHT_OFFSET;
			float DARKER_FACTOR;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Color FromHex(UnityEngine_CoreModule::UnityEngine::Color color, mscorlib::System::String* hexValue, float alpha);
		static UnityEngine_CoreModule::UnityEngine::Color ColorFrom256(UnityEngine_CoreModule::UnityEngine::Color color, float r, float g, float b, float a);
		static UnityEngine_CoreModule::UnityEngine::Color ColorFrom256(float r, float g, float b, float a);
		static UnityEngine_CoreModule::UnityEngine::Color Lighter(UnityEngine_CoreModule::UnityEngine::Color color);
		static UnityEngine_CoreModule::UnityEngine::Color Darker(UnityEngine_CoreModule::UnityEngine::Color color);
		static float Brightness(UnityEngine_CoreModule::UnityEngine::Color color);
		static UnityEngine_CoreModule::UnityEngine::Color WithBrightness(UnityEngine_CoreModule::UnityEngine::Color color, float brightness);
		static bool IsApproximatelyBlack(UnityEngine_CoreModule::UnityEngine::Color color);
		static bool IsApproximatelyWhite(UnityEngine_CoreModule::UnityEngine::Color color);
		static UnityEngine_CoreModule::UnityEngine::Color Opaque(UnityEngine_CoreModule::UnityEngine::Color color);
		static UnityEngine_CoreModule::UnityEngine::Color Invert(UnityEngine_CoreModule::UnityEngine::Color color);
		static UnityEngine_CoreModule::UnityEngine::Color WithAlpha(UnityEngine_CoreModule::UnityEngine::Color color, float alpha);
	};
}

