#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System::Text { struct Encoding; };
namespace mscorlib::System::Text { struct Decoder; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Threading { struct ManualResetEvent; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Diagnostics
{
	struct AsyncStreamReader : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::Stream* stream;
		mscorlib::System::Text::Encoding* encoding;
		mscorlib::System::Text::Decoder* decoder;
		IL2CPP::Array<uint8_t>* byteBuffer;
		IL2CPP::Array<wchar_t>* charBuffer;
		bool cancelOperation;
		mscorlib::System::Threading::ManualResetEvent* eofEvent;
		mscorlib::System::Object* syncObject;
		void Close();
		void Dispose(bool disposing);
		void CancelOperation();
	};
}

