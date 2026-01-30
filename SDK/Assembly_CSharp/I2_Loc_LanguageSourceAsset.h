#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace Assembly_CSharp::I2::Loc { struct LanguageSourceData; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::I2::Loc
{
	struct LanguageSourceAsset : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::I2::Loc::LanguageSourceData* mSource;
		Assembly_CSharp::I2::Loc::LanguageSourceData* get_SourceData();
		void set_SourceData(Assembly_CSharp::I2::Loc::LanguageSourceData* value);
		void _ctor();
	};
}

