#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "I2_Loc_LocalizationManager.h"
namespace Assembly_CSharp::I2::Loc { struct LocalizationManager; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::I2::Loc
{
	struct LocalizationManager___c__DisplayClass42_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* root;
		void _ctor();
		mscorlib::System::Object* _ApplyLocalizationParams_b__0(mscorlib::System::String* p);
	};
}

