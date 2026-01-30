#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_InternalStaticBatchingUtility.h"
namespace UnityEngine_CoreModule::UnityEngine { struct InternalStaticBatchingUtility; };
namespace UnityEngine_CoreModule::UnityEngine { struct InternalStaticBatchingUtility_StaticBatcherGOSorter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct InternalStaticBatchingUtility___c__DisplayClass5_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::InternalStaticBatchingUtility_StaticBatcherGOSorter* sorter;
		void _ctor();
		int64_t _SortGameObjectsForStaticBatching_b__0(UnityEngine_CoreModule::UnityEngine::GameObject* g);
		int32_t _SortGameObjectsForStaticBatching_b__1(UnityEngine_CoreModule::UnityEngine::GameObject* g);
		int64_t _SortGameObjectsForStaticBatching_b__3(UnityEngine_CoreModule::UnityEngine::GameObject* g);
	};
}

