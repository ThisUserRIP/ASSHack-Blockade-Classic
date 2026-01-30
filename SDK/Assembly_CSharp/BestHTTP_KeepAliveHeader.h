#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace Assembly_CSharp::BestHTTP
{
	struct KeepAliveHeader : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::TimeSpan _TimeOut_k__BackingField;
		int32_t _MaxRequests_k__BackingField;
		mscorlib::System::TimeSpan get_TimeOut();
		void set_TimeOut(mscorlib::System::TimeSpan value);
		int32_t get_MaxRequests();
		void set_MaxRequests(int32_t value);
		void Parse(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* headerValues);
		void _ctor();
	};
}

