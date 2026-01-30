#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
namespace mscorlib::System::Collections::Generic::IDictionary_2_System::Int32_System::Collections { template <typename TKey, typename TValue> struct IDictionary_2_System_Int32_System_Collections_Generic_IDictionary_2; };
namespace System::System::Collections::Generic { template <typename T> struct Stack_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::LitJson { struct Lexer; };
namespace mscorlib::System::IO { struct TextReader; };
namespace mscorlib::System { struct Object; };
#include "LitJson_JsonToken.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "LitJson_ParserToken.h"

namespace Assembly_CSharp::LitJson
{
	struct JsonReader : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::System::Collections::Generic::Stack_1<mscorlib::System::Int32>* automaton_stack;
		int32_t current_input;
		int32_t current_symbol;
		bool end_of_json;
		bool end_of_input;
		Assembly_CSharp::LitJson::Lexer* lexer;
		bool parser_in_string;
		bool parser_return;
		bool read_started;
		mscorlib::System::IO::TextReader* reader;
		bool reader_is_owned;
		bool skip_non_members;
		mscorlib::System::Object* token_value;
		Assembly_CSharp::LitJson::JsonToken token;
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::IDictionary_2_System::Int32_System::Collections::IDictionary_2_System_Int32_System_Collections_Generic_IDictionary_2<mscorlib::System::Int32, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::Int32, IL2CPP::Array<mscorlib::System::Int32>>>* parse_table;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_AllowComments();
		void set_AllowComments(bool value);
		bool get_AllowSingleQuotedStrings();
		void set_AllowSingleQuotedStrings(bool value);
		bool get_SkipNonMembers();
		void set_SkipNonMembers(bool value);
		bool get_EndOfInput();
		bool get_EndOfJson();
		Assembly_CSharp::LitJson::JsonToken get_Token();
		mscorlib::System::Object* get_Value();
		static void _cctor();
		void _ctor(mscorlib::System::String* json_text);
		void _ctor(mscorlib::System::IO::TextReader* reader);
		void _ctor(mscorlib::System::IO::TextReader* reader, bool owned);
		static void PopulateParseTable();
		static void TableAddCol(Assembly_CSharp::LitJson::ParserToken row, int32_t col, IL2CPP::Array<int32_t>* symbols);
		static void TableAddRow(Assembly_CSharp::LitJson::ParserToken rule);
		void ProcessNumber(mscorlib::System::String* number);
		void ProcessSymbol();
		bool ReadToken();
		void Close();
		bool Read();
	};
}

