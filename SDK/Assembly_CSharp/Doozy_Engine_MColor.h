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

namespace Assembly_CSharp::Doozy::Engine
{
	struct MColor : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* Name;
		UnityEngine_CoreModule::UnityEngine::Color M50;
		UnityEngine_CoreModule::UnityEngine::Color M100;
		UnityEngine_CoreModule::UnityEngine::Color M200;
		UnityEngine_CoreModule::UnityEngine::Color M300;
		UnityEngine_CoreModule::UnityEngine::Color M400;
		UnityEngine_CoreModule::UnityEngine::Color M500;
		UnityEngine_CoreModule::UnityEngine::Color M600;
		UnityEngine_CoreModule::UnityEngine::Color M700;
		UnityEngine_CoreModule::UnityEngine::Color M800;
		UnityEngine_CoreModule::UnityEngine::Color M900;
		UnityEngine_CoreModule::UnityEngine::Color A100;
		UnityEngine_CoreModule::UnityEngine::Color A200;
		UnityEngine_CoreModule::UnityEngine::Color A400;
		UnityEngine_CoreModule::UnityEngine::Color A700;
		void _ctor(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Color m50, UnityEngine_CoreModule::UnityEngine::Color m100, UnityEngine_CoreModule::UnityEngine::Color m200, UnityEngine_CoreModule::UnityEngine::Color m300, UnityEngine_CoreModule::UnityEngine::Color m400, UnityEngine_CoreModule::UnityEngine::Color m500, UnityEngine_CoreModule::UnityEngine::Color m600, UnityEngine_CoreModule::UnityEngine::Color m700, UnityEngine_CoreModule::UnityEngine::Color m800, UnityEngine_CoreModule::UnityEngine::Color m900, UnityEngine_CoreModule::UnityEngine::Color a100, UnityEngine_CoreModule::UnityEngine::Color a200, UnityEngine_CoreModule::UnityEngine::Color a400, UnityEngine_CoreModule::UnityEngine::Color a700);
		void _ctor(mscorlib::System::String* name, mscorlib::System::String* m50Hex, mscorlib::System::String* m100Hex, mscorlib::System::String* m200Hex, mscorlib::System::String* m300Hex, mscorlib::System::String* m400Hex, mscorlib::System::String* m500Hex, mscorlib::System::String* m600Hex, mscorlib::System::String* m700Hex, mscorlib::System::String* m800Hex, mscorlib::System::String* m900Hex, mscorlib::System::String* a100Hex, mscorlib::System::String* a200Hex, mscorlib::System::String* a400Hex, mscorlib::System::String* a700Hex);
	};
}

