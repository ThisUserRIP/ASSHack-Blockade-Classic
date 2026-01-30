#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Text { struct Encoding; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::Forms
{
	struct HTTPFieldData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _Name_k__BackingField;
		mscorlib::System::String* _FileName_k__BackingField;
		mscorlib::System::String* _MimeType_k__BackingField;
		mscorlib::System::Text::Encoding* _Encoding_k__BackingField;
		mscorlib::System::String* _Text_k__BackingField;
		IL2CPP::Array<uint8_t>* _Binary_k__BackingField;
		mscorlib::System::String* get_Name();
		void set_Name(mscorlib::System::String* value);
		mscorlib::System::String* get_FileName();
		void set_FileName(mscorlib::System::String* value);
		mscorlib::System::String* get_MimeType();
		void set_MimeType(mscorlib::System::String* value);
		mscorlib::System::Text::Encoding* get_Encoding();
		void set_Encoding(mscorlib::System::Text::Encoding* value);
		mscorlib::System::String* get_Text();
		void set_Text(mscorlib::System::String* value);
		IL2CPP::Array<uint8_t>* get_Binary();
		void set_Binary(IL2CPP::Array<uint8_t>* value);
		IL2CPP::Array<uint8_t>* get_Payload();
		void _ctor();
	};
}

