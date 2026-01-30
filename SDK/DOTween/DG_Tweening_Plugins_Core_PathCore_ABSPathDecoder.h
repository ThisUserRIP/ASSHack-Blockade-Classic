#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace DOTween::DG::Tweening::Plugins::Core::PathCore { struct Path; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "DG_Tweening_Plugins_Core_PathCore_ControlPoint.h"
namespace DOTween::DG::Tweening::Plugins::Core::PathCore { struct ControlPoint; };

namespace DOTween::DG::Tweening::Plugins::Core::PathCore
{
	struct ABSPathDecoder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void FinalizePath(DOTween::DG::Tweening::Plugins::Core::PathCore::Path* p, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* wps, bool isClosedPath);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetPoint(float perc, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* wps, DOTween::DG::Tweening::Plugins::Core::PathCore::Path* p, IL2CPP::Array<DOTween::DG::Tweening::Plugins::Core::PathCore::ControlPoint>* controlPoints);
		void _ctor();
	};
}

