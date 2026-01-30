#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DG_Tweening_DOTween.h"
namespace DOTween::DG::Tweening { struct DOTween; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace DOTween::DG::Tweening::Core { template <typename T> struct DOSetter_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace DOTween::DG::Tweening
{
	struct DOTween___c__DisplayClass60_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float v;
		DOTween::DG::Tweening::Core::DOSetter_1<mscorlib::System::Single>* setter;
		void _ctor();
		float _To_b__0();
		void _To_b__1(float x);
	};
}

