#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_HTTPRequest.h"
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace Assembly_CSharp::BestHTTP
{
	struct HTTPRequest___c__DisplayClass237_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::HTTPRequest* __4__this;
		mscorlib::System::IO::Stream* stream;
		void _ctor();
		void _SendHeaders_b__0(mscorlib::System::String* header, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* values);
	};
}

