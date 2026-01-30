#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\DOTween\DG_Tweening_Plugins_Options_VectorOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct VectorOptions; };
namespace DOTween::DG::Tweening::Core { template <typename T1, typename T2, typename TPlugOptions> struct TweenerCore_3; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Rigidbody; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\DOTween\DG_Tweening_Plugins_Options_QuaternionOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct QuaternionOptions; };
#include "..\DOTween\DG_Tweening_RotateMode.h"
#include "..\DOTween\DG_Tweening_AxisConstraint.h"
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
namespace DOTween::DG::Tweening { struct Sequence; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace DOTween::DG::Tweening::Plugins::Core::PathCore { struct Path; };
#include "..\DOTween\DG_Tweening_Plugins_Options_PathOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct PathOptions; };
#include "..\DOTween\DG_Tweening_PathType.h"
#include "..\DOTween\DG_Tweening_PathMode.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };

namespace Assembly_CSharp::DG::Tweening
{
	struct DOTweenModulePhysics : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOMove(UnityEngine_PhysicsModule::UnityEngine::Rigidbody* target, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOMoveX(UnityEngine_PhysicsModule::UnityEngine::Rigidbody* target, float endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOMoveY(UnityEngine_PhysicsModule::UnityEngine::Rigidbody* target, float endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOMoveZ(UnityEngine_PhysicsModule::UnityEngine::Rigidbody* target, float endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::QuaternionOptions>* DORotate(UnityEngine_PhysicsModule::UnityEngine::Rigidbody* target, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, float duration, DOTween::DG::Tweening::RotateMode mode);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::QuaternionOptions>* DOLookAt(UnityEngine_PhysicsModule::UnityEngine::Rigidbody* target, UnityEngine_CoreModule::UnityEngine::Vector3 towards, float duration, DOTween::DG::Tweening::AxisConstraint axisConstraint, mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3> up);
		static DOTween::DG::Tweening::Sequence* DOJump(UnityEngine_PhysicsModule::UnityEngine::Rigidbody* target, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, float jumpPower, int32_t numJumps, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>* DOPath(UnityEngine_PhysicsModule::UnityEngine::Rigidbody* target, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* path, float duration, DOTween::DG::Tweening::PathType pathType, DOTween::DG::Tweening::PathMode pathMode, int32_t resolution, mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Color> gizmoColor);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>* DOLocalPath(UnityEngine_PhysicsModule::UnityEngine::Rigidbody* target, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* path, float duration, DOTween::DG::Tweening::PathType pathType, DOTween::DG::Tweening::PathMode pathMode, int32_t resolution, mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Color> gizmoColor);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>* DOPath(UnityEngine_PhysicsModule::UnityEngine::Rigidbody* target, DOTween::DG::Tweening::Plugins::Core::PathCore::Path* path, float duration, DOTween::DG::Tweening::PathMode pathMode);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>* DOLocalPath(UnityEngine_PhysicsModule::UnityEngine::Rigidbody* target, DOTween::DG::Tweening::Plugins::Core::PathCore::Path* path, float duration, DOTween::DG::Tweening::PathMode pathMode);
	};
}

