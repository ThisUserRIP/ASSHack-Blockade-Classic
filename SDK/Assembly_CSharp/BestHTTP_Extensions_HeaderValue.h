#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::BestHTTP::Extensions
{
	struct HeaderValue : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _Key_k__BackingField;
		mscorlib::System::String* _Value_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::Extensions::HeaderValue>* _Options_k__BackingField;
		mscorlib::System::String* get_Key();
		void set_Key(mscorlib::System::String* value);
		mscorlib::System::String* get_Value();
		void set_Value(mscorlib::System::String* value);
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::Extensions::HeaderValue>* get_Options();
		void set_Options(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::Extensions::HeaderValue>* value);
		bool get_HasValue();
		void _ctor();
		void _ctor(mscorlib::System::String* key);
		void Parse(mscorlib::System::String* headerStr, int32_t& pos);
		bool TryGetOption(mscorlib::System::String* key, Assembly_CSharp::BestHTTP::Extensions::HeaderValue& option);
		void ParseImplementation(mscorlib::System::String* headerStr, int32_t& pos, bool isOptionIsAnOption);
		mscorlib::System::String* ToString();
	};
}

