#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Net_ServicePointScheduler_AsyncManualResetEvent.h"
namespace System::System::Net { struct ServicePointScheduler_AsyncManualResetEvent; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Net
{
	struct ServicePointScheduler_AsyncManualResetEvent___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			System::Net::ServicePointScheduler_AsyncManualResetEvent___c* __9;
			mscorlib::System::Func_2<mscorlib::System::Object, mscorlib::System::Boolean>* __9__4_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		bool _Set_b__4_0(mscorlib::System::Object* s);
	};
}

