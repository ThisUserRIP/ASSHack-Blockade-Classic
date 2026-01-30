#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IO_MemoryStream.h"
namespace System::System { struct Uri; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };

namespace System_Xml::System::Xml
{
	struct XmlCachedStream : mscorlib::System::IO::MemoryStream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::System::Uri* uri;
		void _ctor(System::System::Uri* uri, mscorlib::System::IO::Stream* stream);
	};
}

