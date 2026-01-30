#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "com_playGenesis_VkUnityPlugin_MiniJSON_Json.h"
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin::MiniJSON { struct Json; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::IO { struct StringReader; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "com_playGenesis_VkUnityPlugin_MiniJSON_Json_Parser_TOKEN.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin::MiniJSON
{
	struct Json_Parser : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::StringReader* json;
		struct StaticFields
		{
			mscorlib::System::String* WhiteSpace;
			mscorlib::System::String* WordBreak;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::String* jsonString);
		wchar_t get_PeekChar();
		wchar_t get_NextChar();
		mscorlib::System::String* get_NextWord();
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::MiniJSON::Json_Parser_TOKEN get_NextToken();
		static mscorlib::System::Object* Parse(mscorlib::System::String* jsonString);
		void Dispose();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* ParseObject();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Object>* ParseArray();
		mscorlib::System::Object* ParseValue();
		mscorlib::System::Object* ParseByToken(Assembly_CSharp::com::playGenesis::VkUnityPlugin::MiniJSON::Json_Parser_TOKEN token);
		mscorlib::System::String* ParseString();
		mscorlib::System::Object* ParseNumber();
		void EatWhitespace();
	};
}

