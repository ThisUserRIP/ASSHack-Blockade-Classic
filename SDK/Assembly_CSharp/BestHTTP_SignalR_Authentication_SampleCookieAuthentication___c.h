#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_SignalR_Authentication_SampleCookieAuthentication.h"
namespace Assembly_CSharp::BestHTTP::SignalR::Authentication { struct SampleCookieAuthentication; };
namespace Assembly_CSharp::BestHTTP::Cookies { struct Cookie; };
namespace mscorlib::System { template <typename T> struct Predicate_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::BestHTTP::SignalR::Authentication
{
	struct SampleCookieAuthentication___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::BestHTTP::SignalR::Authentication::SampleCookieAuthentication___c* __9;
			mscorlib::System::Predicate_1<Assembly_CSharp::BestHTTP::Cookies::Cookie>* __9__31_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		bool _OnAuthRequestFinished_b__31_0(Assembly_CSharp::BestHTTP::Cookies::Cookie* c);
	};
}

