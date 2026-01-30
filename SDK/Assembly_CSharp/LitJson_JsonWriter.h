#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Globalization { struct NumberFormatInfo; };
namespace Assembly_CSharp::LitJson { struct WriterContext; };
namespace System::System::Collections::Generic { template <typename T> struct Stack_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace mscorlib::System::IO { struct TextWriter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "LitJson_Condition.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };

namespace Assembly_CSharp::LitJson
{
	struct JsonWriter : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::LitJson::WriterContext* context;
		System::System::Collections::Generic::Stack_1<Assembly_CSharp::LitJson::WriterContext>* ctx_stack;
		bool has_reached_end;
		IL2CPP::Array<wchar_t>* hex_seq;
		int32_t indentation;
		int32_t indent_value;
		mscorlib::System::Text::StringBuilder* inst_string_builder;
		bool pretty_print;
		bool validate;
		mscorlib::System::IO::TextWriter* writer;
		struct StaticFields
		{
			mscorlib::System::Globalization::NumberFormatInfo* number_format;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int32_t get_IndentValue();
		void set_IndentValue(int32_t value);
		bool get_PrettyPrint();
		void set_PrettyPrint(bool value);
		mscorlib::System::IO::TextWriter* get_TextWriter();
		bool get_Validate();
		void set_Validate(bool value);
		static void _cctor();
		void _ctor();
		void _ctor(mscorlib::System::Text::StringBuilder* sb);
		void _ctor(mscorlib::System::IO::TextWriter* writer);
		void DoValidation(Assembly_CSharp::LitJson::Condition cond);
		void Init();
		static void IntToHex(int32_t n, IL2CPP::Array<wchar_t>* hex);
		void Indent();
		void Put(mscorlib::System::String* str);
		void PutNewline();
		void PutNewline(bool add_comma);
		void PutString(mscorlib::System::String* str);
		void Unindent();
		mscorlib::System::String* ToString();
		void Reset();
		void Write(bool boolean);
		void Write(mscorlib::System::Decimal number);
		void Write(double number);
		void Write(int32_t number);
		void Write(int64_t number);
		void Write(mscorlib::System::String* str);
		void Write(uint64_t number);
		void WriteArrayEnd();
		void WriteArrayStart();
		void WriteObjectEnd();
		void WriteObjectStart();
		void WritePropertyName(mscorlib::System::String* property_name);
	};
}

