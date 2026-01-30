#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SocketIO::JsonEncoders
{
	struct IJsonEncoder
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Object>* Decode(mscorlib::System::String* json);
		mscorlib::System::String* Encode(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Object>* obj);
	};
}

