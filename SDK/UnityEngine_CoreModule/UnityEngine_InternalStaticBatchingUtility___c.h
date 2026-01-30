#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_InternalStaticBatchingUtility.h"
namespace UnityEngine_CoreModule::UnityEngine { struct InternalStaticBatchingUtility; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct InternalStaticBatchingUtility___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::InternalStaticBatchingUtility___c* __9;
			mscorlib::System::Func_2<UnityEngine_CoreModule::UnityEngine::GameObject, mscorlib::System::UInt32>* __9__5_2;
			mscorlib::System::Func_2<UnityEngine_CoreModule::UnityEngine::Material, mscorlib::System::Boolean>* __9__6_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		uint32_t _SortGameObjectsForStaticBatching_b__5_2(UnityEngine_CoreModule::UnityEngine::GameObject* g);
		bool _CombineGameObjects_b__6_0(UnityEngine_CoreModule::UnityEngine::Material* m);
	};
}

