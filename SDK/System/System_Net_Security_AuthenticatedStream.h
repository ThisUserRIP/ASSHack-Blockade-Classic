#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IO_Stream.h"
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Net::Security
{
	struct AuthenticatedStream : mscorlib::System::IO::Stream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::Stream* _InnerStream;
		bool _LeaveStreamOpen;
		void _ctor(mscorlib::System::IO::Stream* innerStream, bool leaveInnerStreamOpen);
		mscorlib::System::IO::Stream* get_InnerStream();
		void Dispose(bool disposing);
		bool get_IsAuthenticated();
	};
}

