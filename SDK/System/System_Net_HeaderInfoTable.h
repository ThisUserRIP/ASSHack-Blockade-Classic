#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct Hashtable; };
namespace System::System::Net { struct HeaderInfo; };
namespace System::System::Net { struct HeaderParser; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Net
{
	struct HeaderInfoTable : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::Hashtable* HeaderHashTable;
			System::Net::HeaderInfo* UnknownHeaderInfo;
			System::Net::HeaderParser* SingleParser;
			System::Net::HeaderParser* MultiParser;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static IL2CPP::Array<mscorlib::System::String*>* ParseSingleValue(mscorlib::System::String* value);
		static IL2CPP::Array<mscorlib::System::String*>* ParseMultiValue(mscorlib::System::String* value);
		static void _cctor();
		System::Net::HeaderInfo* get_Item(mscorlib::System::String* name);
		void _ctor();
	};
}

