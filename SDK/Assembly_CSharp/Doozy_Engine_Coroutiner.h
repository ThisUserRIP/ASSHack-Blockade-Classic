#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Coroutine; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp::Doozy::Engine
{
	struct Coroutiner : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::Coroutiner* s_instance;
			bool _ApplicationIsQuitting_k__BackingField;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Assembly_CSharp::Doozy::Engine::Coroutiner* get_Instance();
		static bool get_ApplicationIsQuitting();
		static void set_ApplicationIsQuitting(bool value);
		void Awake();
		void OnApplicationQuit();
		UnityEngine_CoreModule::UnityEngine::Coroutine* StartLocalCoroutine(mscorlib::System::Collections::IEnumerator* enumerator);
		void StopLocalCoroutine(UnityEngine_CoreModule::UnityEngine::Coroutine* coroutine);
		void StopLocalCoroutine(mscorlib::System::Collections::IEnumerator* enumerator);
		void StopAllLocalCoroutines();
		static UnityEngine_CoreModule::UnityEngine::Coroutine* Start(mscorlib::System::Collections::IEnumerator* enumerator);
		static void Stop(mscorlib::System::Collections::IEnumerator* enumerator);
		static void Stop(UnityEngine_CoreModule::UnityEngine::Coroutine* coroutine);
		static void StopAll();
		void _ctor();
	};
}

