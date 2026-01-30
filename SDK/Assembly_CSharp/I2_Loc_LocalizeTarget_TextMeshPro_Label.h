#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Unity_TextMeshPro::TMPro { struct TextMeshPro; };
#include "I2_Loc_LocalizeTarget_1.h"
#include "..\Unity_TextMeshPro\TMPro_TextAlignmentOptions.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "I2_Loc_eTermType.h"
namespace Assembly_CSharp::I2::Loc { struct Localize; };
namespace mscorlib::System { struct String; };
namespace Unity_TextMeshPro::TMPro { struct TMP_FontAsset; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };

namespace Assembly_CSharp::I2::Loc
{
	struct LocalizeTarget_TextMeshPro_Label : Assembly_CSharp::I2::Loc::LocalizeTarget_1<Unity_TextMeshPro::TMPro::TextMeshPro>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_TextMeshPro::TMPro::TextAlignmentOptions mAlignment_RTL;
		Unity_TextMeshPro::TMPro::TextAlignmentOptions mAlignment_LTR;
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
		static Unity_TextMeshPro::TMPro::TMP_FontAsset* GetTMPFontFromMaterial(Assembly_CSharp::I2::Loc::Localize* cmp, mscorlib::System::String* matName);
		static void InitAlignment_TMPro(bool isRTL, Unity_TextMeshPro::TMPro::TextAlignmentOptions alignment, Unity_TextMeshPro::TMPro::TextAlignmentOptions& alignLTR, Unity_TextMeshPro::TMPro::TextAlignmentOptions& alignRTL);
		static void SetFont(Unity_TextMeshPro::TMPro::TMP_Text* label, Unity_TextMeshPro::TMPro::TMP_FontAsset* newFont);
		static void SetMaterial(Unity_TextMeshPro::TMPro::TMP_Text* label, UnityEngine_CoreModule::UnityEngine::Material* newMat);
		void _ctor();
	};
}

