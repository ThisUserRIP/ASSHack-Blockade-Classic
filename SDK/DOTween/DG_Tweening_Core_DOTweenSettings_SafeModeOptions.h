#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DG_Tweening_Core_DOTweenSettings.h"
namespace DOTween::DG::Tweening::Core { struct DOTweenSettings; };
#include "DG_Tweening_Core_Enums_NestedTweenFailureBehaviour.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace DOTween::DG::Tweening::Core
{
	struct DOTweenSettings_SafeModeOptions : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		DOTween::DG::Tweening::Core::Enums::NestedTweenFailureBehaviour nestedTweenFailureBehaviour;
		void _ctor();
	};
}

