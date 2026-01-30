#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Diagnostics_Tracing_ActivityFilter.h"
namespace mscorlib::System::Diagnostics::Tracing { struct ActivityFilter; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "System_Collections_Generic_KeyValuePair_2.h"
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct KeyValuePair_2; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct ActivityFilter___c__DisplayClass13_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t tickNow;
		void _ctor();
		int32_t _TrimActiveActivityStore_b__0(mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::Guid, mscorlib::System::Int32> x, mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::Guid, mscorlib::System::Int32> y);
	};
}

