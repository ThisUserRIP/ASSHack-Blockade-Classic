#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "I2_Loc_LocalizeTarget_1.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::I2::Loc { struct Localize; };
#include "I2_Loc_eTermType.h"
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::I2::Loc
{
	struct LocalizeTarget_UnityStandard_Child : Assembly_CSharp::I2::Loc::LocalizeTarget_1<UnityEngine_CoreModule::UnityEngine::GameObject>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void _cctor();
		static void AutoRegister();
		bool IsValid(Assembly_CSharp::I2::Loc::Localize* cmp);
		Assembly_CSharp::I2::Loc::eTermType GetPrimaryTermType(Assembly_CSharp::I2::Loc::Localize* cmp);
		Assembly_CSharp::I2::Loc::eTermType GetSecondaryTermType(Assembly_CSharp::I2::Loc::Localize* cmp);
		bool CanUseSecondaryTerm();
		bool AllowMainTermToBeRTL();
		bool AllowSecondTermToBeRTL();
		void GetFinalTerms(Assembly_CSharp::I2::Loc::Localize* cmp, mscorlib::System::String* Main, mscorlib::System::String* Secondary, mscorlib::System::String& primaryTerm, mscorlib::System::String& secondaryTerm);
		void DoLocalize(Assembly_CSharp::I2::Loc::Localize* cmp, mscorlib::System::String* mainTranslation, mscorlib::System::String* secondaryTranslation);
		void _ctor();
	};
}

