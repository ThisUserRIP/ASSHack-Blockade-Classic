#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_MarshalByRefObject.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };

namespace mscorlib::System::IO
{
	struct TextReader : mscorlib::System::MarshalByRefObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Func_2<mscorlib::System::Object, mscorlib::System::String>* _ReadLineDelegate;
			mscorlib::System::Func_2<mscorlib::System::Object, mscorlib::System::Int32>* _ReadDelegate;
			mscorlib::System::IO::TextReader* Null;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void Close();
		void Dispose();
		void Dispose(bool disposing);
		int32_t Peek();
		int32_t Read();
		int32_t Read(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		mscorlib::System::String* ReadToEnd();
		mscorlib::System::String* ReadLine();
		static mscorlib::System::IO::TextReader* Synchronized(mscorlib::System::IO::TextReader* reader);
		static void _cctor();
	};
}

