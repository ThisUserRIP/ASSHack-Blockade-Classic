#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DigitalRuby_ThunderAndLightning_ThunderAndLightningScript.h"
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct ThunderAndLightningScript; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct Random_; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct ThunderAndLightningScript_LightningBoltHandler : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float _VolumeMultiplier_k__BackingField;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::ThunderAndLightningScript* script;
		mscorlib::System::Random_* random;
		float get_VolumeMultiplier();
		void set_VolumeMultiplier(float value);
		void _ctor(Assembly_CSharp::DigitalRuby::ThunderAndLightning::ThunderAndLightningScript* script);
		void UpdateLighting();
		void CalculateNextLightningTime();
		mscorlib::System::Collections::IEnumerator* ProcessLightning(mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3> _start, mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3> _end, bool intense, bool visible);
		void Strike(mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3> _start, mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3> _end, bool intense, float intensity, UnityEngine_CoreModule::UnityEngine::Camera* camera, UnityEngine_CoreModule::UnityEngine::Camera* visibleInCamera);
		void CheckForLightning();
		void Update();
	};
}

