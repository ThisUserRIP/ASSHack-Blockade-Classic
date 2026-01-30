#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::AssemblyCSharp { struct CEnt; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Assembly_CSharp
{
	struct EntManager : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t MAX_ENT;
			IL2CPP::Array<Assembly_CSharp::AssemblyCSharp::CEnt*>* Ent;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void Clear();
		static Assembly_CSharp::AssemblyCSharp::CEnt* CreateEnt(UnityEngine_CoreModule::UnityEngine::GameObject* pgo, UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Vector3 rotation);
		static void DeleteEnt(int32_t entid);
		static Assembly_CSharp::AssemblyCSharp::CEnt* GetEnt(int32_t uid);
		static Assembly_CSharp::AssemblyCSharp::CEnt* GetFreeEnt();
		void _ctor();
		static void _cctor();
	};
}

