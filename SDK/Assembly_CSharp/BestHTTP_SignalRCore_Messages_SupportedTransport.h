#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SignalRCore::Messages
{
	struct SupportedTransport : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _Name_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* _SupportedFormats_k__BackingField;
		mscorlib::System::String* get_Name();
		void set_Name(mscorlib::System::String* value);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* get_SupportedFormats();
		void set_SupportedFormats(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* value);
		void _ctor(mscorlib::System::String* transportName, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* transferFormats);
	};
}

