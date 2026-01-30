#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp
{
	struct APIScript : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void Novalink_API_Init(uint64_t uid, int32_t nid);
		static void Novalink_API_UpdateStats(int32_t m, int32_t k, int32_t d, int32_t _forceUpdate);
		void Start();
		static void API_Init();
		static void API_UpdateMyStats(int32_t m, int32_t k, int32_t d, int32_t forceUpdate);
		void _ctor();
	};
}

