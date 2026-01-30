#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Utils
{
	struct DColor : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* ColorName;
		UnityEngine_CoreModule::UnityEngine::Color Light;
		UnityEngine_CoreModule::UnityEngine::Color Normal;
		UnityEngine_CoreModule::UnityEngine::Color Dark;
		struct StaticFields
		{
			mscorlib::System::String* UNNAMED_COLOR;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Color GetLightColor(UnityEngine_CoreModule::UnityEngine::Color normalColor);
		static UnityEngine_CoreModule::UnityEngine::Color GetDarkColor(UnityEngine_CoreModule::UnityEngine::Color normalColor);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Color normal);
		void _ctor(mscorlib::System::String* colorName);
		void _ctor(mscorlib::System::String* colorName, UnityEngine_CoreModule::UnityEngine::Color normal);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Color light, UnityEngine_CoreModule::UnityEngine::Color normal, UnityEngine_CoreModule::UnityEngine::Color dark);
		void _ctor(mscorlib::System::String* colorName, UnityEngine_CoreModule::UnityEngine::Color light, UnityEngine_CoreModule::UnityEngine::Color normal, UnityEngine_CoreModule::UnityEngine::Color dark);
		void _ctor(Assembly_CSharp::Doozy::Engine::Utils::DColor* dColor);
	};
}

