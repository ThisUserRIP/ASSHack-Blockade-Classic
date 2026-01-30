#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::IO { struct TextWriter; };
namespace mscorlib::System::IO { struct TextReader; };
namespace mscorlib::System::Text { struct Encoding; };
namespace mscorlib::System { struct ConsoleCancelEventHandler; };
namespace mscorlib::System { struct Console_InternalCancelHandler; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_IO_FileAccess.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "System_ConsoleKeyInfo.h"
namespace mscorlib::System { struct ConsoleKeyInfo; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System
{
	struct Console : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::IO::TextWriter* stdout_;
			mscorlib::System::IO::TextWriter* stderr_;
			mscorlib::System::IO::TextReader* stdin_;
			mscorlib::System::Text::Encoding* inputEncoding;
			mscorlib::System::Text::Encoding* outputEncoding;
			mscorlib::System::ConsoleCancelEventHandler* cancel_event;
			mscorlib::System::Console_InternalCancelHandler* cancel_handler;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static void SetupStreams(mscorlib::System::Text::Encoding* inputEncoding, mscorlib::System::Text::Encoding* outputEncoding);
		static mscorlib::System::IO::TextWriter* get_Error();
		static mscorlib::System::IO::Stream* Open(intptr_t handle, mscorlib::System::IO::FileAccess access, int32_t bufferSize);
		static mscorlib::System::IO::Stream* OpenStandardError(int32_t bufferSize);
		static mscorlib::System::IO::Stream* OpenStandardInput(int32_t bufferSize);
		static mscorlib::System::IO::Stream* OpenStandardOutput(int32_t bufferSize);
		static void SetOut(mscorlib::System::IO::TextWriter* newOut);
		static void Write(mscorlib::System::String* value);
		static void WriteLine(mscorlib::System::Object* value);
		static void WriteLine(mscorlib::System::String* value);
		static mscorlib::System::Text::Encoding* get_InputEncoding();
		static mscorlib::System::Text::Encoding* get_OutputEncoding();
		static mscorlib::System::ConsoleKeyInfo ReadKey();
		static mscorlib::System::ConsoleKeyInfo ReadKey(bool intercept);
		static void DoConsoleCancelEvent();
	};
}

