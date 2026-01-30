#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBoltPrefabScript; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "DigitalRuby_ThunderAndLightning_RangeOfFloats.h"
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct RangeOfFloats; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningCustomTransformStateInfo; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningBoltTransformTrackerScript : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltPrefabScript* LightningScript;
		UnityEngine_CoreModule::UnityEngine::Transform* StartTarget;
		UnityEngine_CoreModule::UnityEngine::Transform* EndTarget;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::RangeOfFloats ScaleLimit;
		mscorlib::System::Collections::Generic::Dictionary_2<UnityEngine_CoreModule::UnityEngine::Transform, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo>* transformStartPositions;
		void Start();
		static float AngleBetweenVector2(UnityEngine_CoreModule::UnityEngine::Vector2 vec1, UnityEngine_CoreModule::UnityEngine::Vector2 vec2);
		static void UpdateTransform(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo* state, Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltPrefabScript* script, Assembly_CSharp::DigitalRuby::ThunderAndLightning::RangeOfFloats scaleLimit);
		void CustomTransformHandler(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo* state);
		void _ctor();
	};
}

