#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System::Text { struct StringBuilder; };
namespace mscorlib::System::Collections { struct IDictionary; };
namespace mscorlib::System::Collections { struct IList; };

namespace Assembly_CSharp::BestHTTP::JSON
{
	struct Json : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t TOKEN_NONE;
			int32_t TOKEN_CURLY_OPEN;
			int32_t TOKEN_CURLY_CLOSE;
			int32_t TOKEN_SQUARED_OPEN;
			int32_t TOKEN_SQUARED_CLOSE;
			int32_t TOKEN_COLON;
			int32_t TOKEN_COMMA;
			int32_t TOKEN_STRING;
			int32_t TOKEN_NUMBER;
			int32_t TOKEN_TRUE;
			int32_t TOKEN_FALSE;
			int32_t TOKEN_NULL;
			int32_t BUILDER_CAPACITY;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Object* Decode(mscorlib::System::String* json);
		static mscorlib::System::Object* Decode(mscorlib::System::String* json, bool& success);
		static mscorlib::System::String* Encode(mscorlib::System::Object* json);
		static mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* ParseObject(IL2CPP::Array<wchar_t>* json, int32_t& index, bool& success);
		static mscorlib::System::Collections::Generic::List_1<mscorlib::System::Object>* ParseArray(IL2CPP::Array<wchar_t>* json, int32_t& index, bool& success);
		static mscorlib::System::Object* ParseValue(IL2CPP::Array<wchar_t>* json, int32_t& index, bool& success);
		static mscorlib::System::String* ParseString(IL2CPP::Array<wchar_t>* json, int32_t& index, bool& success);
		static double ParseNumber(IL2CPP::Array<wchar_t>* json, int32_t& index, bool& success);
		static int32_t GetLastIndexOfNumber(IL2CPP::Array<wchar_t>* json, int32_t index);
		static void EatWhitespace(IL2CPP::Array<wchar_t>* json, int32_t& index);
		static int32_t LookAhead(IL2CPP::Array<wchar_t>* json, int32_t index);
		static int32_t NextToken(IL2CPP::Array<wchar_t>* json, int32_t& index);
		static bool SerializeValue(mscorlib::System::Object* value, mscorlib::System::Text::StringBuilder* builder);
		static bool SerializeObject(mscorlib::System::Collections::IDictionary* anObject, mscorlib::System::Text::StringBuilder* builder);
		static bool SerializeArray(mscorlib::System::Collections::IList* anArray, mscorlib::System::Text::StringBuilder* builder);
		static bool SerializeString(mscorlib::System::String* aString, mscorlib::System::Text::StringBuilder* builder);
		static bool SerializeNumber(double number, mscorlib::System::Text::StringBuilder* builder);
		void _ctor();
	};
}

