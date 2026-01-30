#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "DG_Tweening_PathMode.h"
#include "DG_Tweening_Plugins_Options_OrientType.h"
#include "DG_Tweening_AxisConstraint.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace DOTween::DG::Tweening::Plugins::Options
{
	struct PathOptions
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		DOTween::DG::Tweening::PathMode mode;
		DOTween::DG::Tweening::Plugins::Options::OrientType orientType;
		DOTween::DG::Tweening::AxisConstraint lockPositionAxis;
		DOTween::DG::Tweening::AxisConstraint lockRotationAxis;
		bool isClosedPath;
		UnityEngine_CoreModule::UnityEngine::Vector3 lookAtPosition;
		UnityEngine_CoreModule::UnityEngine::Transform* lookAtTransform;
		float lookAhead;
		bool hasCustomForwardDirection;
		UnityEngine_CoreModule::UnityEngine::Quaternion forward;
		bool useLocalPosition;
		UnityEngine_CoreModule::UnityEngine::Transform* parent;
		bool isRigidbody;
		UnityEngine_CoreModule::UnityEngine::Quaternion startupRot;
		float startupZRot;
		bool addedExtraStartWp;
		bool addedExtraEndWp;
		void Reset();
	};
}

