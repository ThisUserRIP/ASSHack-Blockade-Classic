#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace System::Mono::Net::Security
{
	struct BufferOffsetSize : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* Buffer;
		int32_t Offset;
		int32_t Size;
		int32_t TotalBytes;
		bool Complete;
		int32_t get_EndOffset();
		int32_t get_Remaining();
		void _ctor(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size);
		mscorlib::System::String* ToString();
	};
}

