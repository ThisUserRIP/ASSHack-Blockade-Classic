#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Http_NtlmClient.h"
namespace System::Mono::Http { struct NtlmClient; };
namespace System::System::Net { struct HttpWebRequest; };
namespace System::Mono::Http { struct NtlmSession; };
namespace mscorlib::System::Runtime::CompilerServices { template <typename TKey, typename TValue> struct ConditionalWeakTable_2_CreateValueCallback; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::Mono::Http
{
	struct NtlmClient___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			System::Mono::Http::NtlmClient___c* __9;
			mscorlib::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<System::Net::HttpWebRequest, System::Mono::Http::NtlmSession>* __9__1_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		System::Mono::Http::NtlmSession* _Authenticate_b__1_0(System::Net::HttpWebRequest* x);
	};
}

