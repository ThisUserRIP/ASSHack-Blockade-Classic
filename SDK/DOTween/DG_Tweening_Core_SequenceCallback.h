#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "DG_Tweening_Core_ABSSequentiable.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace DOTween::DG::Tweening { struct TweenCallback; };

namespace DOTween::DG::Tweening::Core
{
	struct SequenceCallback : DOTween::DG::Tweening::Core::ABSSequentiable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(float sequencedPosition, DOTween::DG::Tweening::TweenCallback* callback);
	};
}

