#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_HTTPManager.h"
namespace Assembly_CSharp::BestHTTP { struct HTTPManager; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace mscorlib::System { template <typename T> struct Predicate_1; };
namespace mscorlib::System { template <typename T> struct Comparison_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::BestHTTP
{
	struct HTTPManager___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::BestHTTP::HTTPManager___c* __9;
			mscorlib::System::Predicate_1<Assembly_CSharp::BestHTTP::HTTPRequest>* __9__105_0;
			mscorlib::System::Comparison_1<Assembly_CSharp::BestHTTP::HTTPRequest>* __9__105_1;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		bool _OnUpdate_b__105_0(Assembly_CSharp::BestHTTP::HTTPRequest* req);
		int32_t _OnUpdate_b__105_1(Assembly_CSharp::BestHTTP::HTTPRequest* req1, Assembly_CSharp::BestHTTP::HTTPRequest* req2);
	};
}

