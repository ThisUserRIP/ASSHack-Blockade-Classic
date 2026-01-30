#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_MarshalByRefObject.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct IFormatProvider; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Text { struct Encoding; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::IO
{
	struct TextWriter : mscorlib::System::MarshalByRefObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<wchar_t>* CoreNewLine;
		mscorlib::System::IFormatProvider* InternalFormatProvider;
		struct StaticFields
		{
			mscorlib::System::IO::TextWriter* Null;
			mscorlib::System::Action_1<mscorlib::System::Object>* _WriteCharDelegate;
			mscorlib::System::Action_1<mscorlib::System::Object>* _WriteStringDelegate;
			mscorlib::System::Action_1<mscorlib::System::Object>* _WriteCharArrayRangeDelegate;
			mscorlib::System::Action_1<mscorlib::System::Object>* _WriteLineCharDelegate;
			mscorlib::System::Action_1<mscorlib::System::Object>* _WriteLineStringDelegate;
			mscorlib::System::Action_1<mscorlib::System::Object>* _WriteLineCharArrayRangeDelegate;
			mscorlib::System::Action_1<mscorlib::System::Object>* _FlushDelegate;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* get_InitialNewLine();
		void _ctor();
		void _ctor(mscorlib::System::IFormatProvider* formatProvider);
		mscorlib::System::IFormatProvider* get_FormatProvider();
		void Close();
		void Dispose(bool disposing);
		void Dispose();
		void Flush();
		mscorlib::System::Text::Encoding* get_Encoding();
		static mscorlib::System::IO::TextWriter* Synchronized(mscorlib::System::IO::TextWriter* writer);
		void Write(wchar_t value);
		void Write(IL2CPP::Array<wchar_t>* buffer);
		void Write(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void Write(mscorlib::System::String* value);
		void WriteLine();
		void WriteLine(wchar_t value);
		void WriteLine(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void WriteLine(mscorlib::System::String* value);
		void WriteLine(mscorlib::System::Object* value);
		void WriteLine(mscorlib::System::String* format, mscorlib::System::Object* arg0);
		void WriteLine(mscorlib::System::String* format, mscorlib::System::Object* arg0, mscorlib::System::Object* arg1);
		static void _cctor();
	};
}

