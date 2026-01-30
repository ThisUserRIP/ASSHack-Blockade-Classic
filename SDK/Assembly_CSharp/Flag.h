#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Vector3i.h"
namespace Assembly_CSharp { struct Vector3i; };
namespace Assembly_CSharp { struct Map; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Assembly_CSharp { struct FlagPlase; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct Flag : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int32_t>* timer;
		Assembly_CSharp::Vector3i pos;
		Assembly_CSharp::Map* map;
		bool inited;
		int32_t maxOffset;
		UnityEngine_CoreModule::UnityEngine::GameObject* flagObject;
		Assembly_CSharp::FlagPlase* FP;
		void SetFlag(Assembly_CSharp::Vector3i _pos, int32_t _t1, int32_t _t2);
		void UpdateFlag(int32_t _t1, int32_t _t2);
		void _ctor();
	};
}

