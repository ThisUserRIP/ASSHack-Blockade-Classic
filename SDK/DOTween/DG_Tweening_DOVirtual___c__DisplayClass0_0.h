#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DG_Tweening_DOVirtual.h"
namespace DOTween::DG::Tweening { struct DOVirtual; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace DOTween::DG::Tweening { template <typename T> struct TweenCallback_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace DOTween::DG::Tweening
{
	struct DOVirtual___c__DisplayClass0_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float val;
		DOTween::DG::Tweening::TweenCallback_1<mscorlib::System::Single>* onVirtualUpdate;
		void _ctor();
		float _Float_b__0();
		void _Float_b__1(float x);
		void _Float_b__2();
	};
}

