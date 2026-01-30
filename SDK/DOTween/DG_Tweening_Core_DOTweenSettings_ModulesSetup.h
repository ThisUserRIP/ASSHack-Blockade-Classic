#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DG_Tweening_Core_DOTweenSettings.h"
namespace DOTween::DG::Tweening::Core { struct DOTweenSettings; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace DOTween::DG::Tweening::Core
{
	struct DOTweenSettings_ModulesSetup : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool showPanel;
		bool audioEnabled;
		bool physicsEnabled;
		bool physics2DEnabled;
		bool spriteEnabled;
		bool uiEnabled;
		bool textMeshProEnabled;
		bool tk2DEnabled;
		void _ctor();
	};
}

