#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "DG_Tweening_RotateMode.h"
#include "DG_Tweening_AxisConstraint.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace DOTween::DG::Tweening::Plugins::Options
{
	struct QuaternionOptions
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		DOTween::DG::Tweening::RotateMode rotateMode;
		DOTween::DG::Tweening::AxisConstraint axisConstraint;
		UnityEngine_CoreModule::UnityEngine::Vector3 up;
		void Reset();
	};
}

