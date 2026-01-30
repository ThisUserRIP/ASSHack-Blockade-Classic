#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::LitJson { struct Lexer_StateHandler; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::LitJson { struct FsmContext; };
namespace mscorlib::System::IO { struct TextReader; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };

namespace Assembly_CSharp::LitJson
{
	struct Lexer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool allow_comments;
		bool allow_single_quoted_strings;
		bool end_of_input;
		Assembly_CSharp::LitJson::FsmContext* fsm_context;
		int32_t input_buffer;
		int32_t input_char;
		mscorlib::System::IO::TextReader* reader;
		int32_t state;
		mscorlib::System::Text::StringBuilder* string_buffer;
		mscorlib::System::String* string_value;
		int32_t token;
		int32_t unichar;
		struct StaticFields
		{
			IL2CPP::Array<int32_t>* fsm_return_table;
			IL2CPP::Array<Assembly_CSharp::LitJson::Lexer_StateHandler*>* fsm_handler_table;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_AllowComments();
		void set_AllowComments(bool value);
		bool get_AllowSingleQuotedStrings();
		void set_AllowSingleQuotedStrings(bool value);
		bool get_EndOfInput();
		int32_t get_Token();
		mscorlib::System::String* get_StringValue();
		static void _cctor();
		void _ctor(mscorlib::System::IO::TextReader* reader);
		static int32_t HexValue(int32_t digit);
		static void PopulateFsmTables();
		static wchar_t ProcessEscChar(int32_t esc_char);
		static bool State1(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State2(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State3(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State4(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State5(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State6(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State7(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State8(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State9(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State10(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State11(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State12(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State13(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State14(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State15(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State16(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State17(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State18(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State19(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State20(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State21(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State22(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State23(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State24(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State25(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State26(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State27(Assembly_CSharp::LitJson::FsmContext* ctx);
		static bool State28(Assembly_CSharp::LitJson::FsmContext* ctx);
		bool GetChar();
		int32_t NextChar();
		bool NextToken();
		void UngetChar();
	};
}

