#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Threading_Tasks_BeginEndAwaitableAdapter.h"
namespace mscorlib::System::Threading::Tasks { struct BeginEndAwaitableAdapter; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct IAsyncResult; };

namespace mscorlib::System::Threading::Tasks
{
	struct BeginEndAwaitableAdapter___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Threading::Tasks::BeginEndAwaitableAdapter___c* __9;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void __cctor_b__11_0();
		void __cctor_b__11_1(mscorlib::System::IAsyncResult* asyncResult);
	};
}

