#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::Caching
{
	struct HTTPCacheMaintananceParams : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::TimeSpan _DeleteOlder_k__BackingField;
		uint64_t _MaxCacheSize_k__BackingField;
		mscorlib::System::TimeSpan get_DeleteOlder();
		void set_DeleteOlder(mscorlib::System::TimeSpan value);
		uint64_t get_MaxCacheSize();
		void set_MaxCacheSize(uint64_t value);
		void _ctor(mscorlib::System::TimeSpan deleteOlder, uint64_t maxCacheSize);
	};
}

