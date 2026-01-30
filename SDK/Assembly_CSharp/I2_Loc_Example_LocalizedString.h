#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "I2_Loc_LocalizedString.h"
namespace Assembly_CSharp::I2::Loc { struct LocalizedString; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::I2::Loc
{
	struct Example_LocalizedString : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::I2::Loc::LocalizedString _MyLocalizedString;
		mscorlib::System::String* _NormalString;
		mscorlib::System::String* _StringWithTermPopup;
		void Start();
		void _ctor();
	};
}

