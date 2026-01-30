#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_CustomYieldInstruction.h"
#include "DG_Tweening_DOTweenCYInstruction.h"
namespace Assembly_CSharp::DG::Tweening { struct DOTweenCYInstruction; };
namespace DOTween::DG::Tweening { struct Tween; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::DG::Tweening
{
	struct DOTweenCYInstruction_WaitForRewind : UnityEngine_CoreModule::UnityEngine::CustomYieldInstruction
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		DOTween::DG::Tweening::Tween* t;
		bool get_keepWaiting();
		void _ctor(DOTween::DG::Tweening::Tween* tween);
	};
}

