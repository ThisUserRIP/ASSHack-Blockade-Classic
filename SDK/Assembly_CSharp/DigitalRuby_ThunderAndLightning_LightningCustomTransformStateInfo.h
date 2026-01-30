#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DigitalRuby_ThunderAndLightning_LightningCustomTransformState.h"
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBoltParameters; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningCustomTransformStateInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformState _State_k__BackingField;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* _Parameters_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Vector3 BoltStartPosition;
		UnityEngine_CoreModule::UnityEngine::Vector3 BoltEndPosition;
		UnityEngine_CoreModule::UnityEngine::Transform* Transform;
		UnityEngine_CoreModule::UnityEngine::Transform* StartTransform;
		UnityEngine_CoreModule::UnityEngine::Transform* EndTransform;
		mscorlib::System::Object* UserInfo;
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo>* cache;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformState get_State();
		void set_State(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformState value);
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* get_Parameters();
		void set_Parameters(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* value);
		static Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo* GetOrCreateStateInfo();
		static void ReturnStateInfoToCache(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo* info);
		void _ctor();
		static void _cctor();
	};
}

