#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
#include "I2_Loc_LocalizeTarget_1.h"
#include "..\UnityEngine_TextRenderingModule\UnityEngine_TextAnchor.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "I2_Loc_eTermType.h"
namespace Assembly_CSharp::I2::Loc { struct Localize; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::I2::Loc
{
	struct LocalizeTarget_UnityUI_Text : Assembly_CSharp::I2::Loc::LocalizeTarget_1<UnityEngine_UI::UnityEngine::UI::Text>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_TextRenderingModule::UnityEngine::TextAnchor mAlignment_RTL;
		UnityEngine_TextRenderingModule::UnityEngine::TextAnchor mAlignment_LTR;
		bool mAlignmentWasRTL;
		bool mInitializeAlignment;
		static void _cctor();
		static void AutoRegister();
		Assembly_CSharp::I2::Loc::eTermType GetPrimaryTermType(Assembly_CSharp::I2::Loc::Localize* cmp);
		Assembly_CSharp::I2::Loc::eTermType GetSecondaryTermType(Assembly_CSharp::I2::Loc::Localize* cmp);
		bool CanUseSecondaryTerm();
		bool AllowMainTermToBeRTL();
		bool AllowSecondTermToBeRTL();
		void GetFinalTerms(Assembly_CSharp::I2::Loc::Localize* cmp, mscorlib::System::String* Main, mscorlib::System::String* Secondary, mscorlib::System::String& primaryTerm, mscorlib::System::String& secondaryTerm);
		void DoLocalize(Assembly_CSharp::I2::Loc::Localize* cmp, mscorlib::System::String* mainTranslation, mscorlib::System::String* secondaryTranslation);
		void InitAlignment(bool isRTL, UnityEngine_TextRenderingModule::UnityEngine::TextAnchor alignment, UnityEngine_TextRenderingModule::UnityEngine::TextAnchor& alignLTR, UnityEngine_TextRenderingModule::UnityEngine::TextAnchor& alignRTL);
		void _ctor();
	};
}

