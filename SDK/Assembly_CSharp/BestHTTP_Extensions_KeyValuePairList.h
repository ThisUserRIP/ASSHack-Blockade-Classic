#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::Extensions { struct HeaderValue; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::Extensions
{
	struct KeyValuePairList : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::Extensions::HeaderValue>* _Values_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::Extensions::HeaderValue>* get_Values();
		void set_Values(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::Extensions::HeaderValue>* value);
		bool TryGet(mscorlib::System::String* valueKeyName, Assembly_CSharp::BestHTTP::Extensions::HeaderValue& param);
		void _ctor();
	};
}

