#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SignalR::JsonEncoders
{
	struct LitJsonEncoder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* Encode(mscorlib::System::Object* obj);
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* DecodeMessage(mscorlib::System::String* json);
		void _ctor();
	};
}

