#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_Caching_HTTPCacheService.h"
namespace Assembly_CSharp::BestHTTP::Caching { struct HTTPCacheService; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { template <typename T> struct Predicate_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::BestHTTP::Caching
{
	struct HTTPCacheService___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::BestHTTP::Caching::HTTPCacheService___c* __9;
			mscorlib::System::Predicate_1<mscorlib::System::String>* __9__31_0;
			mscorlib::System::Predicate_1<mscorlib::System::String>* __9__31_1;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		bool _IsCacheble_b__31_0(mscorlib::System::String* headerValue);
		bool _IsCacheble_b__31_1(mscorlib::System::String* headerValue);
	};
}

