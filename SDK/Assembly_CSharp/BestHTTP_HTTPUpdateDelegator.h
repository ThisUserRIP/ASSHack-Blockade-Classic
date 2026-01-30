#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { template <typename TResult> struct Func_1; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::BestHTTP
{
	struct HTTPUpdateDelegator : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::BestHTTP::HTTPUpdateDelegator* _Instance_k__BackingField;
			bool _IsCreated_k__BackingField;
			bool _IsThreaded_k__BackingField;
			bool _IsThreadRunning_k__BackingField;
			int32_t _ThreadFrequencyInMS_k__BackingField;
			mscorlib::System::Func_1<mscorlib::System::Boolean>* OnBeforeApplicationQuit;
			mscorlib::System::Action_1<mscorlib::System::Boolean>* OnApplicationForegroundStateChanged;
			bool IsSetupCalled;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Assembly_CSharp::BestHTTP::HTTPUpdateDelegator* get_Instance();
		static void set_Instance(Assembly_CSharp::BestHTTP::HTTPUpdateDelegator* value);
		static bool get_IsCreated();
		static void set_IsCreated(bool value);
		static bool get_IsThreaded();
		static void set_IsThreaded(bool value);
		static bool get_IsThreadRunning();
		static void set_IsThreadRunning(bool value);
		static int32_t get_ThreadFrequencyInMS();
		static void set_ThreadFrequencyInMS(int32_t value);
		static void _cctor();
		static void CheckInstance();
		void Setup();
		void ThreadFunc(mscorlib::System::Object* obj);
		void Update();
		void OnDisable();
		void OnApplicationPause(bool isPaused);
		void OnApplicationQuit();
		void _ctor();
	};
}

