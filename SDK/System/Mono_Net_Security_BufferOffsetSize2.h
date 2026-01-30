#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Net_Security_BufferOffsetSize.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace System::Mono::Net::Security
{
	struct BufferOffsetSize2 : System::Mono::Net::Security::BufferOffsetSize
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t InitialSize;
		void _ctor(int32_t size);
		void Reset();
		void MakeRoom(int32_t size);
		void AppendData(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size);
	};
}

