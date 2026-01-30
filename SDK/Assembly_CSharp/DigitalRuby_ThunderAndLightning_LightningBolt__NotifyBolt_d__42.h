#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DigitalRuby_ThunderAndLightning_LightningBolt.h"
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBolt; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBoltParameters; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBoltDependencies; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningCustomTransformStateInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningBolt__NotifyBolt_d__42 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Object* __2__current;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* p;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltDependencies* dependencies;
		UnityEngine_CoreModule::UnityEngine::Vector3 start;
		UnityEngine_CoreModule::UnityEngine::Vector3 end;
		UnityEngine_CoreModule::UnityEngine::Transform* transform;
		float _lifeTime_5__2;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo* _state_5__3;
		void _ctor(int32_t __1__state);
		void System_IDisposable_Dispose();
		bool MoveNext();
		mscorlib::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();
		void System_Collections_IEnumerator_Reset();
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
	};
}

