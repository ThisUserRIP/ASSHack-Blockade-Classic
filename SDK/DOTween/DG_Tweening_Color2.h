#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace DOTween::DG::Tweening
{
	struct Color2
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Color ca;
		UnityEngine_CoreModule::UnityEngine::Color cb;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Color ca, UnityEngine_CoreModule::UnityEngine::Color cb);
		static DOTween::DG::Tweening::Color2 op_Addition(DOTween::DG::Tweening::Color2 c1, DOTween::DG::Tweening::Color2 c2);
		static DOTween::DG::Tweening::Color2 op_Subtraction(DOTween::DG::Tweening::Color2 c1, DOTween::DG::Tweening::Color2 c2);
		static DOTween::DG::Tweening::Color2 op_Multiply(DOTween::DG::Tweening::Color2 c1, float f);
	};
	DOTween::DG::Tweening::Color2 operator+(DOTween::DG::Tweening::Color2 c1, DOTween::DG::Tweening::Color2 c2);
	DOTween::DG::Tweening::Color2 operator-(DOTween::DG::Tweening::Color2 c1, DOTween::DG::Tweening::Color2 c2);
	DOTween::DG::Tweening::Color2 operator*(DOTween::DG::Tweening::Color2 c1, float f);
}

