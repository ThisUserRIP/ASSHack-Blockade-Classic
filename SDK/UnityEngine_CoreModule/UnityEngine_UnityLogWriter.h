#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IO_TextWriter.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Text { struct Encoding; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct UnityLogWriter : mscorlib::System::IO::TextWriter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void WriteStringToUnityLog(mscorlib::System::String* s);
		static void WriteStringToUnityLogImpl(mscorlib::System::String* s);
		static void Init();
		mscorlib::System::Text::Encoding* get_Encoding();
		void Write(wchar_t value);
		void Write(mscorlib::System::String* s);
		void Write(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void _ctor();
	};
}

