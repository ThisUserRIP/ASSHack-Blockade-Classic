#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Diagnostics_Tracing_EventSource.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Collections::Concurrent
{
	struct CDSCollectionETWBCLProvider : mscorlib::System::Diagnostics::Tracing::EventSource
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::Concurrent::CDSCollectionETWBCLProvider* Log;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void ConcurrentDictionary_AcquiringAllLocks(int32_t numOfBuckets);
		static void _cctor();
	};
}

