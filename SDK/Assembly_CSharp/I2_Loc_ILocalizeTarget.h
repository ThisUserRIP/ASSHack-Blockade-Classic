#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::I2::Loc { struct Localize; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "I2_Loc_eTermType.h"

namespace Assembly_CSharp::I2::Loc
{
	struct ILocalizeTarget : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool IsValid(Assembly_CSharp::I2::Loc::Localize* cmp);
		void GetFinalTerms(Assembly_CSharp::I2::Loc::Localize* cmp, mscorlib::System::String* Main, mscorlib::System::String* Secondary, mscorlib::System::String& primaryTerm, mscorlib::System::String& secondaryTerm);
		void DoLocalize(Assembly_CSharp::I2::Loc::Localize* cmp, mscorlib::System::String* mainTranslation, mscorlib::System::String* secondaryTranslation);
		bool CanUseSecondaryTerm();
		bool AllowMainTermToBeRTL();
		bool AllowSecondTermToBeRTL();
		Assembly_CSharp::I2::Loc::eTermType GetPrimaryTermType(Assembly_CSharp::I2::Loc::Localize* cmp);
		Assembly_CSharp::I2::Loc::eTermType GetSecondaryTermType(Assembly_CSharp::I2::Loc::Localize* cmp);
		void _ctor();
	};
}

