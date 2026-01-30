#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System::System::Net
{
	struct DigestHeaderParser : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* header;
		int32_t length;
		int32_t pos;
		IL2CPP::Array<mscorlib::System::String*>* values;
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::String*>* keywords;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::String* header);
		mscorlib::System::String* get_Realm();
		mscorlib::System::String* get_Opaque();
		mscorlib::System::String* get_Nonce();
		mscorlib::System::String* get_Algorithm();
		mscorlib::System::String* get_QOP();
		bool Parse();
		void SkipWhitespace();
		mscorlib::System::String* GetKey();
		bool GetKeywordAndValue(mscorlib::System::String& key, mscorlib::System::String& value);
		static void _cctor();
	};
}

