#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Threading_OSSpecificSynchronizationContext.h"
namespace mscorlib::System::Threading { struct OSSpecificSynchronizationContext; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::CompilerServices { template <typename TKey, typename TValue> struct ConditionalWeakTable_2_CreateValueCallback; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Threading
{
	struct OSSpecificSynchronizationContext___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Threading::OSSpecificSynchronizationContext___c* __9;
			mscorlib::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<mscorlib::System::Object, mscorlib::System::Threading::OSSpecificSynchronizationContext>* __9__3_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		mscorlib::System::Threading::OSSpecificSynchronizationContext* _Get_b__3_0(mscorlib::System::Object* _osContext);
	};
}

