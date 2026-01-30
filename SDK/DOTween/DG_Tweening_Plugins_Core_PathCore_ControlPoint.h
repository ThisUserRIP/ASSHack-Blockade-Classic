#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace DOTween::DG::Tweening::Plugins::Core::PathCore
{
	struct ControlPoint
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 a;
		UnityEngine_CoreModule::UnityEngine::Vector3 b;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Vector3 a, UnityEngine_CoreModule::UnityEngine::Vector3 b);
		static DOTween::DG::Tweening::Plugins::Core::PathCore::ControlPoint op_Addition(DOTween::DG::Tweening::Plugins::Core::PathCore::ControlPoint cp, UnityEngine_CoreModule::UnityEngine::Vector3 v);
		mscorlib::System::String* ToString();
	};
	DOTween::DG::Tweening::Plugins::Core::PathCore::ControlPoint operator+(DOTween::DG::Tweening::Plugins::Core::PathCore::ControlPoint cp, UnityEngine_CoreModule::UnityEngine::Vector3 v);
}

