#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Coroutine; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp::I2::Loc
{
	struct CoroutineManager : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::I2::Loc::CoroutineManager* mInstance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Assembly_CSharp::I2::Loc::CoroutineManager* get_pInstance();
		void Awake();
		static UnityEngine_CoreModule::UnityEngine::Coroutine* Start(mscorlib::System::Collections::IEnumerator* coroutine);
		void _ctor();
	};
}

