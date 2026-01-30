#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace DOTween::DG::Tweening { struct Sequence; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_CoreModule::UnityEngine { struct Gradient; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct CustomYieldInstruction; };
namespace DOTween::DG::Tweening { struct Tween; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\DOTween\DG_Tweening_Plugins_Options_VectorOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct VectorOptions; };
namespace DOTween::DG::Tweening::Core { template <typename T1, typename T2, typename TPlugOptions> struct TweenerCore_3; };

namespace Assembly_CSharp::DG::Tweening
{
	struct DOTweenModuleUnityVersion : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static DOTween::DG::Tweening::Sequence* DOGradientColor(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Gradient* gradient, float duration);
		static DOTween::DG::Tweening::Sequence* DOGradientColor(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Gradient* gradient, mscorlib::System::String* property, float duration);
		static UnityEngine_CoreModule::UnityEngine::CustomYieldInstruction* WaitForCompletion(DOTween::DG::Tweening::Tween* t, bool returnCustomYieldInstruction);
		static UnityEngine_CoreModule::UnityEngine::CustomYieldInstruction* WaitForRewind(DOTween::DG::Tweening::Tween* t, bool returnCustomYieldInstruction);
		static UnityEngine_CoreModule::UnityEngine::CustomYieldInstruction* WaitForKill(DOTween::DG::Tweening::Tween* t, bool returnCustomYieldInstruction);
		static UnityEngine_CoreModule::UnityEngine::CustomYieldInstruction* WaitForElapsedLoops(DOTween::DG::Tweening::Tween* t, int32_t elapsedLoops, bool returnCustomYieldInstruction);
		static UnityEngine_CoreModule::UnityEngine::CustomYieldInstruction* WaitForPosition(DOTween::DG::Tweening::Tween* t, float position, bool returnCustomYieldInstruction);
		static UnityEngine_CoreModule::UnityEngine::CustomYieldInstruction* WaitForStart(DOTween::DG::Tweening::Tween* t, bool returnCustomYieldInstruction);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOOffset(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, int32_t propertyID, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTiling(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, int32_t propertyID, float duration);
	};
}

