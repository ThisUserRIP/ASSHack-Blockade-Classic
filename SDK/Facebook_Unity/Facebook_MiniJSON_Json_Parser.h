#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facebook_MiniJSON_Json.h"
namespace Facebook_Unity::Facebook::MiniJSON { struct Json; };
namespace mscorlib::System::IO { struct StringReader; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "Facebook_MiniJSON_Json_Parser_TOKEN.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace Facebook_Unity::Facebook::MiniJSON
{
	struct Json_Parser : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::StringReader* json;
		void _ctor(mscorlib::System::String* jsonString);
		wchar_t get_PeekChar();
		wchar_t get_NextChar();
		mscorlib::System::String* get_NextWord();
		Facebook_Unity::Facebook::MiniJSON::Json_Parser_TOKEN get_NextToken();
		static mscorlib::System::Object* Parse(mscorlib::System::String* jsonString);
		void Dispose();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* ParseObject();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Object>* ParseArray();
		mscorlib::System::Object* ParseValue();
		mscorlib::System::Object* ParseByToken(Facebook_Unity::Facebook::MiniJSON::Json_Parser_TOKEN token);
		mscorlib::System::String* ParseString();
		mscorlib::System::Object* ParseNumber();
		void EatWhitespace();
	};
}

