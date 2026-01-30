#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "BestHTTP_Examples_CacheMaintenanceSample_DeleteOlderTypes.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::Examples
{
	struct CacheMaintenanceSample : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::Examples::CacheMaintenanceSample_DeleteOlderTypes deleteOlderType;
		int32_t value;
		int32_t maxCacheSize;
		void OnGUI();
		void _ctor();
		void _OnGUI_b__4_0();
	};
}

