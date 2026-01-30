#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\DOTween\DG_Tweening_Plugins_Options_VectorOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct VectorOptions; };
namespace DOTween::DG::Tweening::Core { template <typename T1, typename T2, typename TPlugOptions> struct TweenerCore_3; };
namespace UnityEngine_Physics2DModule::UnityEngine { struct Rigidbody2D; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\DOTween\DG_Tweening_Plugins_Options_FloatOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct FloatOptions; };
namespace DOTween::DG::Tweening { struct Sequence; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::DG::Tweening
{
	struct DOTweenModulePhysics2D : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOMove(UnityEngine_Physics2DModule::UnityEngine::Rigidbody2D* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOMoveX(UnityEngine_Physics2DModule::UnityEngine::Rigidbody2D* target, float endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOMoveY(UnityEngine_Physics2DModule::UnityEngine::Rigidbody2D* target, float endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DORotate(UnityEngine_Physics2DModule::UnityEngine::Rigidbody2D* target, float endValue, float duration);
		static DOTween::DG::Tweening::Sequence* DOJump(UnityEngine_Physics2DModule::UnityEngine::Rigidbody2D* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, float jumpPower, int32_t numJumps, float duration, bool snapping);
	};
}

